
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_bare; int * workdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_config ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *,int,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int **,TYPE_1__*) ;

int FUNC_5(git_repository *VAR_0)
{
 int VAR_1;
 git_config *VAR_2;

 FUNC_0(VAR_0);

 if (VAR_0->is_bare)
  return 0;

 if ((VAR_1 = FUNC_4(&VAR_2, VAR_0)) < 0)
  return VAR_1;

 if ((VAR_1 = FUNC_3(VAR_2, "core.bare", 1)) < 0)
  return VAR_1;

 if ((VAR_1 = FUNC_2(VAR_2, "core.worktree", ((void*)0), 1, 1)) < 0)
  return VAR_1;

 FUNC_1(VAR_0->workdir);
 VAR_0->workdir = ((void*)0);
 VAR_0->is_bare = 1;

 return 0;
}
