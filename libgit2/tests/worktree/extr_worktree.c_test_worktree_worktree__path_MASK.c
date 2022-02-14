
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_worktree ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_7__ {int repo; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_worktree *VAR_2;
 git_buf VAR_3 = VAR_0;

 FUNC_1(FUNC_4(&VAR_3, FUNC_2(), "testrepo-worktree"));
 FUNC_1(FUNC_6(&VAR_2, VAR_1.repo, "testrepo-worktree"));
 FUNC_0(FUNC_7(VAR_2), VAR_3.ptr);

 FUNC_3(&VAR_3);
 FUNC_5(VAR_2);
}
