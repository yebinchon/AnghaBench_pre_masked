
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int*,int *,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int **,int *) ;

int FUNC_5(git_repository *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 git_config *VAR_3;
 FUNC_0(FUNC_4(&VAR_3, VAR_0));
 if (FUNC_2(&VAR_2, VAR_3, VAR_1) < 0)
  FUNC_3();
 FUNC_1(VAR_3);
 return VAR_2;
}
