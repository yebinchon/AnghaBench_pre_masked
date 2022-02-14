
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char const*) ;
 int FUNC_5 (int **,int *) ;

void FUNC_6(
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 git_config *VAR_4;
 git_buf VAR_5 = VAR_0;

 FUNC_1(FUNC_5(&VAR_4, VAR_1));

 FUNC_1(FUNC_4(&VAR_5, VAR_4, VAR_2));

 FUNC_0(VAR_3, FUNC_2(&VAR_5));
 FUNC_3(&VAR_5);
}
