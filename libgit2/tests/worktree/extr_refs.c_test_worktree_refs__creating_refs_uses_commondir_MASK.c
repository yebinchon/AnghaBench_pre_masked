
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_commit ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_7__ {int worktree; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int **,int ,char*,int *,int ) ;
 int FUNC_3 (int **,int ,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int **,int ) ;

void FUNC_14(void)
{
    git_reference *VAR_3, *VAR_4, *VAR_5;
    git_commit *VAR_6;
    git_buf VAR_7 = VAR_1;

    FUNC_1(FUNC_5(&VAR_7,
         FUNC_12(VAR_2.worktree), "refs/heads/testbranch"));
    FUNC_0(!FUNC_8(VAR_7.ptr));

    FUNC_1(FUNC_13(&VAR_3, VAR_2.worktree));
    FUNC_1(FUNC_7(&VAR_6, VAR_2.worktree, FUNC_11(VAR_3)));
    FUNC_1(FUNC_2(&VAR_4, VAR_2.worktree, "testbranch", VAR_6, 0));
    FUNC_1(FUNC_3(&VAR_5, VAR_2.worktree, "testbranch", VAR_0));
    FUNC_0(FUNC_9(VAR_4, VAR_5) == 0);
    FUNC_0(FUNC_8(VAR_7.ptr));

    FUNC_10(VAR_5);
    FUNC_10(VAR_4);
    FUNC_10(VAR_3);
    FUNC_6(VAR_6);
    FUNC_4(&VAR_7);
}
