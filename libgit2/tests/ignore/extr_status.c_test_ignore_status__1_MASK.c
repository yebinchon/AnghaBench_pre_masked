
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 VAR_0 = FUNC_2("attr");

 FUNC_1("attr/.gitignore", "/*.txt\n/dir/\n");
 FUNC_3(VAR_0);

 FUNC_0("root_test4.txt");
 FUNC_4("sub/subdir_test2.txt");
 FUNC_0("dir");
 FUNC_0("dir/");
 FUNC_4("sub/dir");
 FUNC_4("sub/dir/");
}
