
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_2__ {scalar_t__ repo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,scalar_t__,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int **,scalar_t__,char*) ;

void FUNC_7(void)
{
 git_reference *VAR_1, *VAR_2;

 FUNC_1(FUNC_4(&VAR_1, VAR_0.repo, "refs/heads/testrepo-worktree"));
 FUNC_1(FUNC_6(&VAR_2, VAR_0.repo, "testrepo-worktree"));
 FUNC_0(FUNC_2(VAR_1, VAR_2) == 0);
 FUNC_0(FUNC_5(VAR_1) == VAR_0.repo);

 FUNC_3(VAR_1);
 FUNC_3(VAR_2);
}
