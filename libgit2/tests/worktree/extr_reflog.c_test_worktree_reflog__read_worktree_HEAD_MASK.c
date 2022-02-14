
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reflog_entry ;
typedef int git_reflog ;
struct TYPE_2__ {int worktree; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;

void FUNC_9(void)
{
 git_reflog *VAR_1;
 const git_reflog_entry *VAR_2;

 FUNC_3(FUNC_8(&VAR_1, VAR_0.worktree, "HEAD"));
 FUNC_1(1, FUNC_6(VAR_1));

 VAR_2 = FUNC_4(VAR_1, 0);
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_2("checkout: moving from 099fabac3a9ea935598528c27f866e34089c2eff to testrepo-worktree", FUNC_5(VAR_2));

 FUNC_7(VAR_1);
}
