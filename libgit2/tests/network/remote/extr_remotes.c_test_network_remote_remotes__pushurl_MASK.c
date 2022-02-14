
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_remote ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char const*) ;
 char* FUNC_5 (int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,char*) ;

void FUNC_8(void)
{
 const char *VAR_2 = FUNC_5(VAR_0);
 git_remote *VAR_3;

 FUNC_2(FUNC_7(VAR_1, VAR_2, "git://github.com/libgit2/notlibgit2"));
 FUNC_2(FUNC_4(&VAR_3, VAR_1, VAR_2));
 FUNC_1(FUNC_6(VAR_3), "git://github.com/libgit2/notlibgit2");
 FUNC_3(VAR_3);

 FUNC_2(FUNC_7(VAR_1, VAR_2, ((void*)0)));
 FUNC_2(FUNC_4(&VAR_3, VAR_1, VAR_2));
 FUNC_0(FUNC_6(VAR_3) == ((void*)0));
 FUNC_3(VAR_3);
}
