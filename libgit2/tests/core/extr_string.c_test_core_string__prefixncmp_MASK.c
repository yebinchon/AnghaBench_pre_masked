
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,char*) ;

void FUNC_2(void)
{
 FUNC_0(FUNC_1("", 0, "") == 0);
 FUNC_0(FUNC_1("a", 1, "") == 0);
 FUNC_0(FUNC_1("", 0, "a") < 0);
 FUNC_0(FUNC_1("a", 1, "b") < 0);
 FUNC_0(FUNC_1("b", 1, "a") > 0);
 FUNC_0(FUNC_1("ab", 2, "a") == 0);
 FUNC_0(FUNC_1("ab", 1, "a") == 0);
 FUNC_0(FUNC_1("ab", 2, "ac") < 0);
 FUNC_0(FUNC_1("a", 1, "ac") < 0);
 FUNC_0(FUNC_1("ab", 1, "ac") < 0);
 FUNC_0(FUNC_1("ab", 2, "aa") > 0);
 FUNC_0(FUNC_1("ab", 1, "aa") < 0);
}
