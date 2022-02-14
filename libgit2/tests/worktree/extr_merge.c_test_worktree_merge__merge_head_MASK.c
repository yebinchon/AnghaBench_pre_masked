
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_annotated_commit ;
struct TYPE_2__ {int worktree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int ,int const**,int,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;

void FUNC_6(void)
{
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5;

 FUNC_0(FUNC_5(&VAR_3, VAR_2.worktree, VAR_0));
 FUNC_0(FUNC_2(&VAR_5, VAR_2.worktree, VAR_3));
 FUNC_0(FUNC_3(VAR_2.worktree, (const git_annotated_commit **)&VAR_5, 1, ((void*)0), ((void*)0)));

 FUNC_0(FUNC_5(&VAR_4, VAR_2.worktree, VAR_1));

 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
 FUNC_1(VAR_5);
}
