
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

void FUNC_1(void)
{
 FUNC_0("000Dunpack ok", 1);
 FUNC_0("000Dunpack ng error-msg", 0);

 FUNC_0("000Aunpack", 0);
 FUNC_0("0011unpack foobar", 0);
 FUNC_0("0010unpack ng ok", 0);
 FUNC_0("0010unpack okfoo", 1);
}
