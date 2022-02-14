
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int locked; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_12__ {int size; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_13__ {int repo; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_9__ VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__**,int ,char*) ;

void FUNC_8(void)
{
 git_worktree *VAR_2;
 git_buf VAR_3 = VAR_0;

 FUNC_2(FUNC_7(&VAR_2, VAR_1.repo, "testrepo-worktree"));

 FUNC_0(!FUNC_5(((void*)0), VAR_2));
 FUNC_2(FUNC_6(VAR_2, ((void*)0)));
 FUNC_0(FUNC_5(&VAR_3, VAR_2) > 0);
 FUNC_1(VAR_3.size, 0);
 FUNC_0(VAR_2->locked);

 FUNC_3(&VAR_3);
 FUNC_4(VAR_2);
}
