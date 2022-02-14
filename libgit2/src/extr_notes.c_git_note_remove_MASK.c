
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_commit ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int const*,int const*,int const*) ;
 int FUNC_3 (int **,int *,char*,int *,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char**,int *,char const*) ;

int FUNC_6(git_repository *VAR_0, const char *VAR_1,
  const git_signature *VAR_2, const git_signature *VAR_3,
  const git_oid *VAR_4)
{
 int VAR_5;
 char *VAR_6 = ((void*)0);
 git_commit *VAR_7 = ((void*)0);
 git_oid VAR_8;
 git_reference *VAR_9 = ((void*)0);

 VAR_5 = FUNC_5(&VAR_7, &VAR_6,
   VAR_0, VAR_1);

 if (VAR_5 < 0)
  goto cleanup;

 VAR_5 = FUNC_2(&VAR_8, VAR_0,
   VAR_7, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  goto cleanup;

 VAR_5 = FUNC_3(&VAR_9, VAR_0, VAR_6,
   &VAR_8, 1, ((void*)0));

cleanup:
 FUNC_0(VAR_6);
 FUNC_4(VAR_9);
 FUNC_1(VAR_7);
 return VAR_5;
}
