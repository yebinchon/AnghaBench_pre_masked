
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_bare; int * workdir; scalar_t__ is_worktree; struct TYPE_5__* commondir; struct TYPE_5__* gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *,char const*,int *) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(
 git_repository **VAR_3,
 const char *VAR_4)
{
 int VAR_5;
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 git_repository *VAR_8 = ((void*)0);

 if ((VAR_5 = FUNC_4(&VAR_6, VAR_4, ((void*)0))) < 0)
  return VAR_5;

 if (!FUNC_6(&VAR_6, &VAR_7)) {
  FUNC_2(&VAR_6);
  FUNC_2(&VAR_7);
  FUNC_3(VAR_2, "path is not a repository: %s", VAR_4);
  return VAR_1;
 }

 VAR_8 = FUNC_5();
 FUNC_0(VAR_8);

 VAR_8->gitdir = FUNC_1(&VAR_6);
 FUNC_0(VAR_8->gitdir);
 VAR_8->commondir = FUNC_1(&VAR_7);
 FUNC_0(VAR_8->commondir);


 VAR_8->is_bare = 1;
 VAR_8->is_worktree = 0;
 VAR_8->workdir = ((void*)0);

 *VAR_3 = VAR_8;
 return 0;
}
