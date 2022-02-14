
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(void)
{
 FUNC_1("123", 123, 10);
 FUNC_1("  +123 ", 123, 10);
 FUNC_1("  +2147483647 ", 2147483647, 10);
 FUNC_1("  -2147483648 ", -2147483648LL, 10);
 FUNC_1("A", 10, 16);
 FUNC_1("1x1", 1, 10);

 FUNC_0("", 10);
 FUNC_0("a", 10);
 FUNC_0("x10x", 10);
 FUNC_0("  2147483657 ", 10);
 FUNC_0("  -2147483657 ", 10);
}
