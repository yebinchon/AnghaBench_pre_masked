
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int is_worktree; } ;
struct TYPE_6__ {TYPE_3__* worktree; TYPE_1__* repo; } ;
struct TYPE_5__ {int is_worktree; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_3__*) ;
 TYPE_2__ VAR_0 ;

void FUNC_3(void)
{
 FUNC_0(FUNC_1(VAR_0.worktree) != ((void*)0));
 FUNC_0(FUNC_2(VAR_0.worktree) != ((void*)0));

 FUNC_0(!VAR_0.repo->is_worktree);
 FUNC_0(VAR_0.worktree->is_worktree);
}
