
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_note ;
typedef int git_commit ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *,int const*) ;
 int FUNC_3 (int **,char**,int *,char const*) ;

int FUNC_4(git_note **VAR_0, git_repository *VAR_1,
    const char *VAR_2, const git_oid *VAR_3)
{
 int VAR_4;
 char *VAR_5 = ((void*)0);
 git_commit *VAR_6 = ((void*)0);

 VAR_4 = FUNC_3(&VAR_6, &VAR_5, VAR_1, VAR_2);

 if (VAR_4 < 0)
  goto cleanup;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_6, VAR_3);

cleanup:
 FUNC_0(VAR_5);
 FUNC_1(VAR_6);
 return VAR_4;
}
