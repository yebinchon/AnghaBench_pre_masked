
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int ,int *,int const*,int const*,int *,int ,int *,int,int const**) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
 git_commit **VAR_1,
 git_repository *VAR_2,
 git_index *VAR_3,
 const git_signature *VAR_4,
 const char *VAR_5,
 const git_commit *VAR_6)
{
 git_tree *VAR_7 = ((void*)0);
 git_oid VAR_8;
 git_buf VAR_9 = VAR_0;
 int VAR_10;

 if ((VAR_10 = FUNC_0(&VAR_7, VAR_2, VAR_3)) < 0)
  goto cleanup;

 if ((VAR_10 = FUNC_3(&VAR_9, "index on %s\n", VAR_5)) < 0)
  goto cleanup;

 if ((VAR_10 = FUNC_4(
  &VAR_8,
  FUNC_6(VAR_3),
  ((void*)0),
  VAR_4,
  VAR_4,
  ((void*)0),
  FUNC_1(&VAR_9),
  VAR_7,
  1,
  &VAR_6)) < 0)
  goto cleanup;

 VAR_10 = FUNC_5(VAR_1, FUNC_6(VAR_3), &VAR_8);

cleanup:
 FUNC_7(VAR_7);
 FUNC_2(&VAR_9);
 return VAR_10;
}
