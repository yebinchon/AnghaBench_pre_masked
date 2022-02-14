
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_worktree ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,char*,...) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,char*,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 git_worktree *VAR_3;
 git_repository *VAR_4;

 FUNC_1(FUNC_8(&VAR_3, VAR_2, "name", VAR_1, ((void*)0)));
 FUNC_0(FUNC_10(VAR_3), FUNC_2(0, VAR_1, ((void*)0)));

 FUNC_1(FUNC_5(&VAR_4, VAR_1));
 FUNC_0(FUNC_6(VAR_4), FUNC_2(1, VAR_0, "worktrees", "name", ((void*)0)));

 FUNC_0(FUNC_3(VAR_2), FUNC_3(VAR_4));
 FUNC_0(FUNC_7(VAR_4), FUNC_2(1, VAR_1, ((void*)0)));

 FUNC_4(VAR_4);
 FUNC_9(VAR_3);
}
