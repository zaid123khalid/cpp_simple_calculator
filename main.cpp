#include <iostream>

using namespace std;

int main()
{   
    int a, b;
    string operation;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter the operation: ";
    cin >> operation;
    if (operation == "+") {
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
    } else if (operation == "-") {
        cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
    } else if (operation == "*") {
        cout << "The product of " << a << " and " << b << " is " << a * b << endl;
    } else if (operation == "/") {
        cout << "The quotient of " << a << " and " << b << " is " << a / b << endl;
    } else {
        cout << "Invalid operation" << endl;
    }
    return 0;
}

