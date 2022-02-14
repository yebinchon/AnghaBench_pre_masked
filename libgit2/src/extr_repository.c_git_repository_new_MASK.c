
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_bare; scalar_t__ is_worktree; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;

int FUNC_2(git_repository **VAR_0)
{
 git_repository *VAR_1;

 *VAR_0 = VAR_1 = FUNC_1();
 FUNC_0(VAR_1);

 VAR_1->is_bare = 1;
 VAR_1->is_worktree = 0;

 return 0;
}
