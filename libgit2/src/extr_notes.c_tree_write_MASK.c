
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;


 int FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const**,int *,char const*,int const*,unsigned int) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(
 git_tree **VAR_0,
 git_repository *VAR_1,
 git_tree *VAR_2,
 const git_oid *VAR_3,
 const char *VAR_4,
 unsigned int VAR_5)
{
 int VAR_6;
 git_treebuilder *VAR_7 = ((void*)0);
 const git_tree_entry *VAR_8;
 git_oid VAR_9;

 if ((VAR_6 = FUNC_3(&VAR_7, VAR_1, VAR_2)) < 0)
  goto cleanup;

 if (VAR_3) {
  if ((VAR_6 = FUNC_2(
    &VAR_8, VAR_7, VAR_4, VAR_3, VAR_5)) < 0)
   goto cleanup;
 } else {
  if ((VAR_6 = FUNC_4(VAR_7, VAR_4)) < 0)
   goto cleanup;
 }

 if ((VAR_6 = FUNC_5(&VAR_9, VAR_7)) < 0)
  goto cleanup;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_9);

cleanup:
 FUNC_1(VAR_7);
 return VAR_6;
}
