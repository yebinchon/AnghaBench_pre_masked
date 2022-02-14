
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_7__ {int * worktree; } ;


 TYPE_1__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_buf VAR_2 = VAR_0;
 git_repository *VAR_3;

 FUNC_1(FUNC_3(&VAR_2,
  FUNC_6(VAR_1.worktree), 0, ((void*)0)));
 FUNC_1(FUNC_5(&VAR_3, VAR_2.ptr));
 FUNC_0(FUNC_6(VAR_1.worktree),
  FUNC_6(VAR_3));

 FUNC_2(&VAR_2);
 FUNC_4(VAR_3);
}
