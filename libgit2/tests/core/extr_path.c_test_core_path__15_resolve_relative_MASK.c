
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_0(&VAR_1, "", "");
 FUNC_0(&VAR_1, "", ".");
 FUNC_0(&VAR_1, "", "./");
 FUNC_0(&VAR_1, "..", "..");
 FUNC_0(&VAR_1, "../", "../");
 FUNC_0(&VAR_1, "..", "./..");
 FUNC_0(&VAR_1, "../", "./../");
 FUNC_0(&VAR_1, "../", "../.");
 FUNC_0(&VAR_1, "../", ".././");
 FUNC_0(&VAR_1, "../..", "../..");
 FUNC_0(&VAR_1, "../../", "../../");

 FUNC_0(&VAR_1, "/", "/");
 FUNC_0(&VAR_1, "/", "/.");

 FUNC_0(&VAR_1, "", "a/..");
 FUNC_0(&VAR_1, "", "a/../");
 FUNC_0(&VAR_1, "", "a/../.");

 FUNC_0(&VAR_1, "/a", "/a");
 FUNC_0(&VAR_1, "/a/", "/a/.");
 FUNC_0(&VAR_1, "/", "/a/../");
 FUNC_0(&VAR_1, "/", "/a/../.");
 FUNC_0(&VAR_1, "/", "/a/.././");

 FUNC_0(&VAR_1, "a", "a");
 FUNC_0(&VAR_1, "a/", "a/");
 FUNC_0(&VAR_1, "a/", "a/.");
 FUNC_0(&VAR_1, "a/", "a/./");

 FUNC_0(&VAR_1, "a/b", "a//b");
 FUNC_0(&VAR_1, "a/b/c", "a/b/c");
 FUNC_0(&VAR_1, "b/c", "./b/c");
 FUNC_0(&VAR_1, "a/c", "a/./c");
 FUNC_0(&VAR_1, "a/b/", "a/b/.");

 FUNC_0(&VAR_1, "/a/b/c", "///a/b/c");
 FUNC_0(&VAR_1, "/", "////");
 FUNC_0(&VAR_1, "/a", "///a");
 FUNC_0(&VAR_1, "/", "///.");
 FUNC_0(&VAR_1, "/", "///a/..");

 FUNC_0(&VAR_1, "../../path", "../../test//../././path");
 FUNC_0(&VAR_1, "../d", "a/b/../../../c/../d");

 FUNC_2(FUNC_4(&VAR_1, "/.."));
 FUNC_1(FUNC_5(&VAR_1, 0));

 FUNC_2(FUNC_4(&VAR_1, "/./.."));
 FUNC_1(FUNC_5(&VAR_1, 0));

 FUNC_2(FUNC_4(&VAR_1, "/.//.."));
 FUNC_1(FUNC_5(&VAR_1, 0));

 FUNC_2(FUNC_4(&VAR_1, "/../."));
 FUNC_1(FUNC_5(&VAR_1, 0));

 FUNC_2(FUNC_4(&VAR_1, "/../.././../a"));
 FUNC_1(FUNC_5(&VAR_1, 0));

 FUNC_2(FUNC_4(&VAR_1, "////.."));
 FUNC_1(FUNC_5(&VAR_1, 0));
 FUNC_0(&VAR_1, "/a/b/c", "//a/b/c");
 FUNC_0(&VAR_1, "/a/", "//a/b/..");
 FUNC_0(&VAR_1, "/a/b/c", "//a/Q/../b/x/y/../../c");
 FUNC_0(&VAR_1, "/", "//a/b/../..");


 FUNC_3(&VAR_1);
}
