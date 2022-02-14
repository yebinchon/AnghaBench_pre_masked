
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reflog_entry ;
typedef int git_reflog ;
struct TYPE_2__ {int worktree; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ) ;

void FUNC_9(void)
{
 git_reflog *VAR_2;
 const git_reflog_entry *VAR_3;

 FUNC_3(FUNC_8(&VAR_2, VAR_1.worktree, VAR_0));
 FUNC_1(FUNC_6(VAR_2), 1);

 VAR_3 = FUNC_4(VAR_2, 0);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_2(FUNC_5(VAR_3), "branch: Created from HEAD");

 FUNC_7(VAR_2);
}
