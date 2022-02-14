
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_1(
  "attr/.gitignore",
  "#foo\n"
  "\\#bar\n"
  "\\##baz\n"
  "\\#\\\\#qux\n"
 );

 FUNC_0(0, "#foo");
 FUNC_0(1, "#bar");
 FUNC_0(0, "\\#bar");
 FUNC_0(1, "##baz");
 FUNC_0(0, "\\##baz");
 FUNC_0(1, "#\\#qux");
 FUNC_0(0, "##qux");
 FUNC_0(0, "\\##qux");
}
