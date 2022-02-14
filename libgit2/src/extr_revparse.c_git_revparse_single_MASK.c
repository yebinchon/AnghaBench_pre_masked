
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int **,int *,char const*) ;

int FUNC_3(git_object **VAR_0, git_repository *VAR_1, const char *VAR_2)
{
 int VAR_3;
 git_object *VAR_4 = ((void*)0);
 git_reference *VAR_5 = ((void*)0);

 *VAR_0 = ((void*)0);

 if ((VAR_3 = FUNC_2(&VAR_4, &VAR_5, VAR_1, VAR_2)) < 0)
  goto cleanup;

 FUNC_1(VAR_5);

 *VAR_0 = VAR_4;

 return 0;

cleanup:
 FUNC_0(VAR_4);
 FUNC_1(VAR_5);
 return VAR_3;
}
