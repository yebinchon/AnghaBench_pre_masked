
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_0(FUNC_1("", "") == 0);
 FUNC_0(FUNC_1("foo", "foo") == 0);
 FUNC_0(FUNC_1("foo", "bar") > 0);
 FUNC_0(FUNC_1("bar", "foo") < 0);
 FUNC_0(FUNC_1("foo", "FOO") > 0);
 FUNC_0(FUNC_1("FOO", "foo") < 0);
 FUNC_0(FUNC_1("foo", "BAR") > 0);
 FUNC_0(FUNC_1("BAR", "foo") < 0);
 FUNC_0(FUNC_1("fooBar", "foobar") < 0);
}
