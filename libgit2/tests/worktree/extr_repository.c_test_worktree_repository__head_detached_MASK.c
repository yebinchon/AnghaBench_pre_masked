
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int oid; } ;
struct TYPE_8__ {TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
struct TYPE_9__ {int repo; int worktree; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_2__**,int ,char*) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(void)
{
 git_reference *VAR_1, *VAR_2;

 FUNC_2(FUNC_4(&VAR_1, VAR_0.repo, "refs/heads/testrepo-worktree"));
 FUNC_2(FUNC_8(VAR_0.worktree, &VAR_1->target.oid));

 FUNC_0(FUNC_5(VAR_0.worktree));
 FUNC_0(FUNC_6(VAR_0.repo, "testrepo-worktree"));
 FUNC_1(FUNC_7(&VAR_2, VAR_0.repo, "testrepo-worktree"));

 FUNC_3(VAR_1);
}
