
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ worktreename; void* worktree; scalar_t__ reponame; void* repo; } ;
typedef TYPE_1__ worktree_fixture ;


 void* FUNC_0 (scalar_t__) ;

void FUNC_1(worktree_fixture *VAR_0)
{
 if (VAR_0->reponame)
  VAR_0->repo = FUNC_0(VAR_0->reponame);
 if (VAR_0->worktreename)
  VAR_0->worktree = FUNC_0(VAR_0->worktreename);
}
