
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
  "*\n"
  "!/**/\n"
  "!*.keep\n"
  "!.gitignore\n"
 );

 FUNC_0(1, "src");
 FUNC_0(1, "src/A");
 FUNC_0(0, "src/");
 FUNC_0(0, "src/A.keep");
 FUNC_0(0, ".gitignore");
}
