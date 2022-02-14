
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_attr_file ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char const*,int) ;

int FUNC_3(git_repository *VAR_0, const char *VAR_1)
{
 int VAR_2;
 git_attr_file *VAR_3 = ((void*)0);

 if ((VAR_2 = FUNC_0(&VAR_3, VAR_0)) < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_3, VAR_1, 0);
 FUNC_1(VAR_3);

 return VAR_2;
}
