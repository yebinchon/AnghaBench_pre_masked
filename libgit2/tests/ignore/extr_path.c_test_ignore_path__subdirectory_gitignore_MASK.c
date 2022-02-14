
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 FUNC_5("attr/.gitignore");
 FUNC_1(!FUNC_3("attr/.gitignore"));
 FUNC_2(
  "attr/.gitignore",
  "file1\n");
 FUNC_4("attr/dir", 0777);
 FUNC_2(
  "attr/dir/.gitignore",
  "file2/\n");

 FUNC_0(1, "file1");
 FUNC_0(1, "dir/file1");
 FUNC_0(1, "dir/file2/actual_file");
 FUNC_0(0, "dir/file3");
}
