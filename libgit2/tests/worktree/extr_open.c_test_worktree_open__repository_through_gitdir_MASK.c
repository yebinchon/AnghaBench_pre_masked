
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;

void FUNC_6(void)
{
 git_buf VAR_3 = VAR_1;
 git_repository *VAR_4;

 FUNC_1(FUNC_3(&VAR_3, VAR_0, ".git"));
 FUNC_1(FUNC_3(&VAR_3, VAR_3.ptr, "worktrees"));
 FUNC_1(FUNC_3(&VAR_3, VAR_3.ptr, "testrepo-worktree"));

 FUNC_1(FUNC_5(&VAR_4, VAR_3.ptr));
 FUNC_0(VAR_4, VAR_0, VAR_2);

 FUNC_2(&VAR_3);
 FUNC_4(VAR_4);
}
