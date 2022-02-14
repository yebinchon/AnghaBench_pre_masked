
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_worktree_prune_options ;
typedef int git_worktree ;
typedef int git_reference ;
struct TYPE_6__ {int repo; int worktreename; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;

void FUNC_7(void)
{
 git_worktree_prune_options VAR_4 = VAR_1;
 git_reference *VAR_5;
 git_worktree *VAR_6;

 VAR_4.flags = VAR_2;

 FUNC_0(FUNC_5(&VAR_6, VAR_3.repo, VAR_3.worktreename));
 FUNC_0(FUNC_6(VAR_6, &VAR_4));
 FUNC_4(VAR_6);

 FUNC_0(FUNC_2(&VAR_5, VAR_3.repo,
      "testrepo-worktree", VAR_0));
 FUNC_0(FUNC_1(VAR_5));
 FUNC_3(VAR_5);
}
