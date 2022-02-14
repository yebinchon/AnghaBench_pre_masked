
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int **,size_t*,int *,char const*) ;

int FUNC_4(
 git_object **VAR_0,
 git_reference **VAR_1,
 git_repository *VAR_2,
 const char *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 git_object *VAR_6 = ((void*)0);
 git_reference *VAR_7 = ((void*)0);

 if ((VAR_4 = FUNC_3(&VAR_6, &VAR_7, &VAR_5, VAR_2, VAR_3)) < 0)
  goto cleanup;

 *VAR_0 = VAR_6;
 *VAR_1 = VAR_7;
 FUNC_0(VAR_5);

 return 0;

cleanup:
 FUNC_1(VAR_6);
 FUNC_2(VAR_7);
 return VAR_4;
}
