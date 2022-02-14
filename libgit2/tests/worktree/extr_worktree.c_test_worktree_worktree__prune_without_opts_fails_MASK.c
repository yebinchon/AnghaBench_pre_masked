
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_worktree ;
typedef int git_repository ;
struct TYPE_2__ {int repo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (int *,int *) ;

void FUNC_7(void)
{
 git_worktree *VAR_1;
 git_repository *VAR_2;

 FUNC_1(FUNC_5(&VAR_1, VAR_0.repo, "testrepo-worktree"));
 FUNC_0(FUNC_6(VAR_1, ((void*)0)));


 FUNC_1(FUNC_3(&VAR_2, VAR_1));

 FUNC_4(VAR_1);
 FUNC_2(VAR_2);
}
