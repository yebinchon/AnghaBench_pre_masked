
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * strings; int count; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_6__ {int worktree; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void FUNC_5(void)
{
 git_strarray VAR_1;

 FUNC_2(FUNC_4(&VAR_1, VAR_0.worktree));
 FUNC_0(VAR_1.count, 1);
 FUNC_1(VAR_1.strings[0], "testrepo-worktree");

 FUNC_3(&VAR_1);
}
