
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_2__ {int worktree; int repo; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int **,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char*,int ,int *) ;
 int FUNC_4 (int **,int ) ;

void FUNC_5(void)
{
 git_reference *VAR_2, *VAR_3, *VAR_4;

 FUNC_0(FUNC_1(&VAR_3, VAR_1.repo,
      "testrepo-worktree", VAR_0));
 FUNC_0(FUNC_3(&VAR_4, VAR_3, "refs/heads/renamed", 0, ((void*)0)));
 FUNC_0(FUNC_4(&VAR_2, VAR_1.worktree));

 FUNC_2(VAR_2);
 FUNC_2(VAR_3);
 FUNC_2(VAR_4);
}
