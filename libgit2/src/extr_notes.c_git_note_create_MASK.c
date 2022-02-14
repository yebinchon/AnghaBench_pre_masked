
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *,int const*,int const*,int const*,char const*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int *,char*,int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char**,int *,char const*) ;

int FUNC_7(
 git_oid *VAR_1,
 git_repository *VAR_2,
 const char *VAR_3,
 const git_signature *VAR_4,
 const git_signature *VAR_5,
 const git_oid *VAR_6,
 const char *VAR_7,
 int VAR_8)
{
 int VAR_9;
 char *VAR_10 = ((void*)0);
 git_commit *VAR_11 = ((void*)0);
 git_reference *VAR_12 = ((void*)0);
 git_oid VAR_13, VAR_14;

 VAR_9 = FUNC_6(&VAR_11, &VAR_10,
   VAR_2, VAR_3);

 if (VAR_9 < 0 && VAR_9 != VAR_0)
  goto cleanup;

 VAR_9 = FUNC_2(&VAR_14,
   &VAR_13,
   VAR_2, VAR_11, VAR_4,
   VAR_5, VAR_6, VAR_7,
   VAR_8);
 if (VAR_9 < 0)
  goto cleanup;

 VAR_9 = FUNC_4(&VAR_12, VAR_2, VAR_10,
    &VAR_14, 1, ((void*)0));

 if (VAR_1 != ((void*)0))
  FUNC_3(VAR_1, &VAR_13);

cleanup:
 FUNC_0(VAR_10);
 FUNC_1(VAR_11);
 FUNC_5(VAR_12);
 return VAR_9;
}
