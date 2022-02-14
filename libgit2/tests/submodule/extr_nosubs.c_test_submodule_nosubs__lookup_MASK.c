
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,char*) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(void)
{
 git_repository *VAR_2 = FUNC_2("status");
 git_submodule *VAR_3 = ((void*)0);

 FUNC_4("status/subrepo", 0777);
 FUNC_1("status/subrepo/.git", "gitdir: ../.git");

 FUNC_0(VAR_1, FUNC_3(&VAR_3, VAR_2, "subdir"));

 FUNC_0(VAR_0, FUNC_3(&VAR_3, VAR_2, "subrepo"));

 FUNC_0(VAR_1, FUNC_3(&VAR_3, VAR_2, "subdir"));

 FUNC_0(VAR_0, FUNC_3(&VAR_3, VAR_2, "subrepo"));
}
