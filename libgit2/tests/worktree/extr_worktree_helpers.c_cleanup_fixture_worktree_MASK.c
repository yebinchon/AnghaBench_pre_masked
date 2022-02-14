
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ worktreename; scalar_t__ reponame; int * worktree; int * repo; } ;
typedef TYPE_1__ worktree_fixture ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(worktree_fixture *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->repo) {
  FUNC_1(VAR_0->repo);
  VAR_0->repo = ((void*)0);
 }
 if (VAR_0->worktree) {
  FUNC_1(VAR_0->worktree);
  VAR_0->worktree = ((void*)0);
 }

 if (VAR_0->reponame)
  FUNC_0(VAR_0->reponame);
 if (VAR_0->worktreename)
  FUNC_0(VAR_0->worktreename);
}
