
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(void)
{
 FUNC_1("123", 123, 10);
 FUNC_1("  +123 ", 123, 10);
 FUNC_1("  +2147483647 ", 2147483647, 10);
 FUNC_1("  -2147483648 ", -2147483648LL, 10);
 FUNC_1("  2147483657 ", 2147483657LL, 10);
 FUNC_1("  -2147483657 ", -2147483657LL, 10);
 FUNC_1(" 9223372036854775807  ", VAR_0, 10);
 FUNC_1("   -9223372036854775808  ", VAR_1, 10);
 FUNC_1("   0x7fffffffffffffff  ", VAR_0, 16);
 FUNC_1("   -0x8000000000000000   ", VAR_1, 16);
 FUNC_1("1a", 26, 16);
 FUNC_1("1A", 26, 16);

 FUNC_0("", 10);
 FUNC_0("a", 10);
 FUNC_0("x10x", 10);
 FUNC_0("0x8000000000000000", 16);
 FUNC_0("-0x8000000000000001", 16);
}
