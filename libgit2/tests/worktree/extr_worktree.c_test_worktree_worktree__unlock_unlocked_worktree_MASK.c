
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int locked; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_8__ {int repo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(void)
{
 git_worktree *VAR_1;

 FUNC_2(FUNC_5(&VAR_1, VAR_0.repo, "testrepo-worktree"));
 FUNC_0(!FUNC_4(((void*)0), VAR_1));
 FUNC_1(1, FUNC_6(VAR_1));
 FUNC_0(!VAR_1->locked);

 FUNC_3(VAR_1);
}
