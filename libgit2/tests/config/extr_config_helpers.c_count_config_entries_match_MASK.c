
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char const*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *) ;

int FUNC_5(git_repository *VAR_1, const char *VAR_2)
{
 git_config *VAR_3;
 int VAR_4 = 0;

 FUNC_1(FUNC_4(&VAR_3, VAR_1));

 FUNC_0(0, FUNC_2(
  VAR_3, VAR_2, VAR_0, &VAR_4));

 FUNC_3(VAR_3);

 return VAR_4;
}
