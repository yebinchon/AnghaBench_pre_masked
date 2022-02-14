
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int locked; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_9__ {int repo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_7__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__**,int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void)
{
 git_worktree *VAR_1;

 FUNC_2(FUNC_6(&VAR_1, VAR_0.repo, "testrepo-worktree"));
 FUNC_2(FUNC_5(VAR_1, ((void*)0)));
 FUNC_0(FUNC_4(((void*)0), VAR_1));
 FUNC_1(0, FUNC_7(VAR_1));
 FUNC_0(!VAR_1->locked);

 FUNC_3(VAR_1);
}
