
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_worktree ;
typedef int git_repository ;
typedef int git_buf ;
struct TYPE_4__ {int repo; TYPE_1__* worktree; } ;
struct TYPE_3__ {int gitlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;

void FUNC_8(void)
{
 git_worktree *VAR_3;
 git_repository *VAR_4;
 git_buf VAR_5 = VAR_0;

 FUNC_1(FUNC_3(&VAR_5, "/path/to/nonexistent/gitdir"));
 FUNC_1(FUNC_4(&VAR_5,
      VAR_2.worktree->gitlink, VAR_1, 0644));

 FUNC_1(FUNC_7(&VAR_3, VAR_2.repo, "testrepo-worktree"));
 FUNC_0(FUNC_5(&VAR_4, VAR_3));

 FUNC_2(&VAR_5);
 FUNC_6(VAR_3);
}
