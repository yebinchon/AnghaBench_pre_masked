
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char const*,char const*,char*) ;

void FUNC_2(void)
{
 const char *VAR_1 = "magic word: pretty please";
 const char *VAR_2 = "tree 6b79e22d69bf46e289df0345a14ca059dfc9bdf6\nparent 34734e478d6cf50c27c9d69026d93974d052c454\nauthor Ben Burkert <ben@benburkert.com> 1358451456 -0800\ncommitter Ben Burkert <ben@benburkert.com> 1358451456 -0800\n\na simple commit which does not work\n";






 const char *VAR_3 = "tree 4b825dc642cb6eb9a060e54bf8d69288fbee4904\nparent 34734e478d6cf50c27c9d69026d93974d052c454\nauthor Ben Burkert <ben@benburkert.com> 1358451456 -0800\ncommitter Ben Burkert <ben@benburkert.com> 1358451456 -0800\n\na simple commit which does not work\n";






 git_oid VAR_4;

 FUNC_0(-1, FUNC_1(&VAR_4, VAR_0, VAR_2, VAR_1, "magicsig"));
 FUNC_0(-1, FUNC_1(&VAR_4, VAR_0, VAR_3, VAR_1, "magicsig"));

}
