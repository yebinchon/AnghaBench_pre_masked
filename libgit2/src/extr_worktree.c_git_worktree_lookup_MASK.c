
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_worktree ;
struct TYPE_8__ {int commondir; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ,char const*) ;

int FUNC_6(git_worktree **VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 git_worktree *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_0(VAR_2 && VAR_3);

 *VAR_1 = ((void*)0);

 if ((VAR_6 = FUNC_2(&VAR_4, "%s/worktrees/%s", VAR_2->commondir, VAR_3)) < 0)
  goto out;

 if ((VAR_6 = (FUNC_5(VAR_1, FUNC_3(VAR_2), VAR_4.ptr, VAR_3))) < 0)
  goto out;

out:
 FUNC_1(&VAR_4);

 if (VAR_6)
  FUNC_4(VAR_5);

 return VAR_6;
}
