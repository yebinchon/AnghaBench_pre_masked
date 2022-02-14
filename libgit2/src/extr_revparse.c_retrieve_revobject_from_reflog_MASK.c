
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int *,int ) ;
 int FUNC_1 (int **,int *,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_5(git_object **VAR_1, git_reference **VAR_2, git_repository *VAR_3, const char *VAR_4, size_t VAR_5)
{
 git_reference *VAR_6;
 git_oid VAR_7;
 int VAR_8 = -1;

 if (*VAR_2 == ((void*)0)) {
  if ((VAR_8 = FUNC_1(&VAR_6, VAR_3, VAR_4)) < 0)
   return VAR_8;
 } else {
  VAR_6 = *VAR_2;
  *VAR_2 = ((void*)0);
 }

 if (VAR_5 == 0) {
  VAR_8 = FUNC_0(VAR_1, VAR_3, FUNC_3(VAR_6), VAR_0);
  goto cleanup;
 }

 if ((VAR_8 = FUNC_4(&VAR_7, VAR_6, VAR_5)) < 0)
  goto cleanup;

 VAR_8 = FUNC_0(VAR_1, VAR_3, &VAR_7, VAR_0);

cleanup:
 FUNC_2(VAR_6);
 return VAR_8;
}
