
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_mailmap ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,char const*,size_t) ;

int FUNC_3(git_mailmap **VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(*VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
 }
 return VAR_3;
}
