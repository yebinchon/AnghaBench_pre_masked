
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_worktree_prune_options ;
typedef int git_worktree ;
typedef int git_repository ;
struct TYPE_6__ {int repo; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

void FUNC_7(void)
{
 git_worktree_prune_options VAR_3 = VAR_0;
 git_worktree *VAR_4;
 git_repository *VAR_5;

 VAR_3.flags = VAR_1;

 FUNC_1(FUNC_5(&VAR_4, VAR_2.repo, "testrepo-worktree"));
 FUNC_1(FUNC_6(VAR_4, &VAR_3));


 FUNC_0(FUNC_3(&VAR_5, VAR_4));

 FUNC_4(VAR_4);
 FUNC_2(VAR_5);
}
