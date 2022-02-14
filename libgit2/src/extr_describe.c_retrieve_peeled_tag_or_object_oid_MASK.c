
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char const*,int) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
 git_oid *VAR_1,
 git_oid *VAR_2,
 git_repository *VAR_3,
 const char *VAR_4)
{
 git_reference *VAR_5;
 git_object *VAR_6 = ((void*)0);
 int VAR_7;

 if ((VAR_7 = FUNC_5(&VAR_5, VAR_3, VAR_4, -1)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_6(&VAR_6, VAR_5, VAR_0)) < 0)
  goto cleanup;

 FUNC_3(VAR_2, FUNC_7(VAR_5));
 FUNC_3(VAR_1, FUNC_1(VAR_6));

 if (FUNC_2(VAR_2, VAR_1) != 0)
  VAR_7 = 1;
 else
  VAR_7 = 0;

cleanup:
 FUNC_4(VAR_5);
 FUNC_0(VAR_6);
 return VAR_7;
}
