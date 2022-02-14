
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_repository ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int **,int *,char*,char*,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_1 = FUNC_1("status");
 git_submodule *VAR_2, *VAR_3;

 FUNC_0(FUNC_2(&VAR_2, VAR_1, "https://github.com/libgit2/libgit2.git", "submodules/libgit2", 1));

 FUNC_0(FUNC_5(&VAR_3, VAR_1, "submodules/libgit2"));
 FUNC_4(VAR_3);

 FUNC_0(FUNC_3(VAR_1, VAR_0, ((void*)0)));

 FUNC_4(VAR_2);
}
