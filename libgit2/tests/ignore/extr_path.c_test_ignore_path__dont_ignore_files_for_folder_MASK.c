
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 FUNC_2("attr/.gitignore");

 FUNC_1("attr/dir/.gitignore", "test/\n");


 FUNC_1("attr/dir/test", "This is a file.");

 FUNC_0(0, "dir/test");
 if (FUNC_4(VAR_0, "core.ignorecase"))
  FUNC_0(0, "dir/TeSt");


 FUNC_2("attr/dir/test");
 FUNC_3(FUNC_5("attr/dir/test", 0777));

 FUNC_0(1, "dir/test");
 if (FUNC_4(VAR_0, "core.ignorecase"))
  FUNC_0(1, "dir/TeSt");




 FUNC_3(FUNC_6("attr/dir/test"));

 FUNC_0(0, "dir/test");
 if (FUNC_4(VAR_0, "core.ignorecase"))
  FUNC_0(0, "dir/TeSt");
}
