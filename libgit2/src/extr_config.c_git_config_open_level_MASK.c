
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_level_t ;
typedef int git_config ;
typedef int backend_internal ;


 int FUNC_0 (int **,int const*,int ) ;
 int FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;

int FUNC_4(
 git_config **VAR_0,
 const git_config *VAR_1,
 git_config_level_t VAR_2)
{
 git_config *VAR_3;
 backend_internal *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4, VAR_1, VAR_2)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_3(&VAR_3)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2, 1)) < 0) {
  FUNC_2(VAR_3);
  return VAR_5;
 }

 *VAR_0 = VAR_3;

 return 0;
}
