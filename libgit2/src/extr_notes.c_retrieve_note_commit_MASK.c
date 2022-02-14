
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;


 scalar_t__ FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (char**,int *,char const*) ;

__attribute__((used)) static int FUNC_3(
 git_commit **VAR_0,
 char **VAR_1,
 git_repository *VAR_2,
 const char *VAR_3)
{
 int VAR_4;
 git_oid VAR_5;

 if ((VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_4;

 if ((VAR_4 = FUNC_1(&VAR_5, VAR_2, *VAR_1)) < 0)
  return VAR_4;

 if (FUNC_0(VAR_0, VAR_2, &VAR_5) < 0)
  return VAR_4;

 return 0;
}
