
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_note_iterator ;
typedef int git_commit ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int **,char**,int *,char const*) ;

int FUNC_4(
 git_note_iterator **VAR_0,
 git_repository *VAR_1,
 const char *VAR_2)
{
 int VAR_3;
 git_commit *VAR_4 = ((void*)0);
 char *VAR_5;

 VAR_3 = FUNC_3(&VAR_4, &VAR_5, VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto cleanup;

 VAR_3 = FUNC_2(VAR_0, VAR_4);

cleanup:
 FUNC_0(VAR_5);
 FUNC_1(VAR_4);

 return VAR_3;
}
