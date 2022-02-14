
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_0(FUNC_1("", "") == 0);
 FUNC_0(FUNC_1("a", "") == 0);
 FUNC_0(FUNC_1("", "a") < 0);
 FUNC_0(FUNC_1("a", "b") < 0);
 FUNC_0(FUNC_1("b", "a") > 0);
 FUNC_0(FUNC_1("ba", "a") == 0);
 FUNC_0(FUNC_1("zaa", "ac") < 0);
 FUNC_0(FUNC_1("zaz", "ac") > 0);
}
