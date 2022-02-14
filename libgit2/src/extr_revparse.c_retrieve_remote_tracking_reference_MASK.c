
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int **,int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(git_reference **VAR_1, const char *VAR_2, git_repository *VAR_3)
{
 git_reference *VAR_4, *VAR_5;
 int VAR_6 = -1;

 if (*VAR_1 == ((void*)0)) {
  if ((VAR_6 = FUNC_1(&VAR_5, VAR_3, VAR_2)) < 0)
   return VAR_6;
 } else {
  VAR_5 = *VAR_1;
  *VAR_1 = ((void*)0);
 }

 if (!FUNC_3(VAR_5)) {
  VAR_6 = VAR_0;
  goto cleanup;
 }

 if ((VAR_6 = FUNC_0(&VAR_4, VAR_5)) < 0)
  goto cleanup;

 *VAR_1 = VAR_4;

cleanup:
 FUNC_2(VAR_5);
 return VAR_6;
}
