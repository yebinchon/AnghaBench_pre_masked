
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
  "dir/*\n"
  "!dir/sub1/sub2/**\n");

 FUNC_0(1, "dir/a.test");
 FUNC_0(1, "dir/sub1/a.test");
 FUNC_0(1, "dir/sub1/sub2");
}
