
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("abcd", "abcd");
 FUNC_0("a2%", "a2%");
 FUNC_0("a2%3", "a2%3");
 FUNC_0("a2%%3", "a2%%3");
 FUNC_0("a2%3z", "a2%3z");
 FUNC_0("a,", "a%2c");
 FUNC_0("a21", "a2%31");
 FUNC_0("a2%1", "a2%%31");
 FUNC_0("a bc ", "a%20bc%20");
 FUNC_0("Vicent Mart" "\355", "Vicent%20Mart%ED");
}
