
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_attr_file ;


 int VAR_0 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int) ;

int FUNC_4(git_repository *VAR_1)
{
 int VAR_2;
 git_attr_file *VAR_3;

 if ((VAR_2 = FUNC_0(&VAR_3, VAR_1)) < 0)
  return VAR_2;

 if (!(VAR_2 = FUNC_1(VAR_3, 1)))
  VAR_2 = FUNC_3(
    VAR_1, VAR_3, VAR_0, 0);

 FUNC_2(VAR_3);
 return VAR_2;
}
