
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_worktree ;
typedef int git_repository ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_11__ {TYPE_2__* repo; } ;
struct TYPE_10__ {int commondir; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,TYPE_2__*,char*) ;

void FUNC_9(void)
{
 git_worktree *VAR_3;
 git_repository *VAR_4;
 git_buf VAR_5 = VAR_0, VAR_6 = VAR_0;

 FUNC_1(FUNC_4(&VAR_5, "/path/to/nonexistent/commondir"));
 FUNC_1(FUNC_3(&VAR_6,
      "%s/worktrees/testrepo-worktree/commondir",
      VAR_2.repo->commondir));
 FUNC_1(FUNC_5(&VAR_5, VAR_6.ptr, VAR_1, 0644));

 FUNC_1(FUNC_8(&VAR_3, VAR_2.repo, "testrepo-worktree"));
 FUNC_0(FUNC_6(&VAR_4, VAR_3));

 FUNC_2(&VAR_5);
 FUNC_2(&VAR_6);
 FUNC_7(VAR_3);
}
