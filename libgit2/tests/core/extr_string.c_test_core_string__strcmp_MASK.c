
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

void FUNC_3(void)
{
 FUNC_0(FUNC_1("", "") == 0);
 FUNC_0(FUNC_1("foo", "foo") == 0);
 FUNC_0(FUNC_1("Foo", "foo") < 0);
 FUNC_0(FUNC_1("foo", "FOO") > 0);
 FUNC_0(FUNC_1("foo", "fOO") > 0);

 FUNC_0(FUNC_2("rt\303\202of", "rt dev\302\266h") > 0);
 FUNC_0(FUNC_2("e\342\202\254ghi=", "et") > 0);
 FUNC_0(FUNC_2("rt dev\302\266h", "rt\303\202of") < 0);
 FUNC_0(FUNC_2("et", "e\342\202\254ghi=") < 0);
 FUNC_0(FUNC_2("\303\215", "\303\255") < 0);

 FUNC_0(FUNC_1("rt\303\202of", "rt dev\302\266h") > 0);
 FUNC_0(FUNC_1("e\342\202\254ghi=", "et") > 0);
 FUNC_0(FUNC_1("rt dev\302\266h", "rt\303\202of") < 0);
 FUNC_0(FUNC_1("et", "e\342\202\254ghi=") < 0);
 FUNC_0(FUNC_1("\303\215", "\303\255") < 0);
}
