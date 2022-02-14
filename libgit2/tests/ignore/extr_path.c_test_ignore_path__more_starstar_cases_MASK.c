
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 FUNC_2(FUNC_3("attr/.gitignore"));
 FUNC_1(
  "attr/dir/.gitignore",
  "sub/**/*.html\n");

 FUNC_0(0, "aaa.html");
 FUNC_0(0, "dir");
 FUNC_0(0, "dir/sub");
 FUNC_0(1, "dir/sub/sub2/aaa.html");
 FUNC_0(1, "dir/sub/aaa.html");
 FUNC_0(0, "dir/aaa.html");
 FUNC_0(0, "sub");
 FUNC_0(0, "sub/aaa.html");
 FUNC_0(0, "sub/sub2/aaa.html");
}
