
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit_list_node ;


 scalar_t__ FUNC_0 (int *,int *,size_t*,size_t*) ;
 int * FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

int FUNC_5(size_t *VAR_0, size_t *VAR_1, git_repository *VAR_2,
 const git_oid *VAR_3, const git_oid *VAR_4)
{
 git_revwalk *VAR_5;
 git_commit_list_node *VAR_6, *VAR_7;

 if (FUNC_3(&VAR_5, VAR_2) < 0)
  return -1;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 == ((void*)0))
  goto on_error;

 VAR_7 = FUNC_1(VAR_5, VAR_3);
 if (VAR_7 == ((void*)0))
  goto on_error;

 if (FUNC_4(VAR_5, VAR_7, VAR_6) < 0)
  goto on_error;
 if (FUNC_0(VAR_7, VAR_6, VAR_0, VAR_1) < 0)
  goto on_error;

 FUNC_2(VAR_5);

 return 0;

on_error:
 FUNC_2(VAR_5);
 return -1;
}
