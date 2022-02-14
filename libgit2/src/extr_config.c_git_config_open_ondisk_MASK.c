
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **) ;

int FUNC_3(git_config **VAR_1, const char *VAR_2)
{
 int VAR_3;
 git_config *VAR_4;

 *VAR_1 = ((void*)0);

 if (FUNC_2(&VAR_4) < 0)
  return -1;

 if ((VAR_3 = FUNC_0(VAR_4, VAR_2, VAR_0, ((void*)0), 0)) < 0)
  FUNC_1(VAR_4);
 else
  *VAR_1 = VAR_4;

 return VAR_3;
}
