
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(
 git_oid *VAR_0, git_repository *VAR_1, const char *VAR_2)
{
 int VAR_3;
 git_reference *VAR_4;

 if ((VAR_3 = FUNC_2(&VAR_4, VAR_1, VAR_2, -1)) < 0)
  return VAR_3;

 FUNC_0(VAR_0, FUNC_3(VAR_4));
 FUNC_1(VAR_4);
 return 0;
}
