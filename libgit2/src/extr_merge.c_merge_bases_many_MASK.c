
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit_list_node ;
typedef int git_commit_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int **,int *,int *,int *) ;
 int * FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,size_t,int *) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(git_commit_list **VAR_3, git_revwalk **VAR_4, git_repository *VAR_5, size_t VAR_6, const git_oid VAR_7[])
{
 git_revwalk *VAR_8 = ((void*)0);
 git_vector VAR_9;
 git_commit_list *VAR_10 = ((void*)0);
 git_commit_list_node *VAR_11;
 int VAR_12 = -1;
 unsigned int VAR_13;

 if (VAR_6 < 2) {
  FUNC_0(VAR_1, "at least two commits are required to find an ancestor");
  return -1;
 }

 if (FUNC_6(&VAR_9, VAR_6 - 1, ((void*)0)) < 0)
  return -1;

 if (FUNC_4(&VAR_8, VAR_5) < 0)
  goto on_error;

 for (VAR_13 = 1; VAR_13 < VAR_6; VAR_13++) {
  VAR_11 = FUNC_2(VAR_8, &VAR_7[VAR_13]);
  if (VAR_11 == ((void*)0))
   goto on_error;

  FUNC_7(&VAR_9, VAR_11);
 }

 VAR_11 = FUNC_2(VAR_8, &VAR_7[0]);
 if (VAR_11 == ((void*)0))
  goto on_error;

 if (FUNC_1(&VAR_10, VAR_8, VAR_11, &VAR_9) < 0)
  goto on_error;

 if (!VAR_10) {
  FUNC_0(VAR_2, "no merge base found");
  VAR_12 = VAR_0;
  goto on_error;
 }

 *VAR_3 = VAR_10;
 *VAR_4 = VAR_8;

 FUNC_5(&VAR_9);
 return 0;

on_error:
 FUNC_5(&VAR_9);
 FUNC_3(VAR_8);
 return VAR_12;
}
