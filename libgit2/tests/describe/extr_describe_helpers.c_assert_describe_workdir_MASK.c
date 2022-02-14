
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_describe_result ;
typedef int git_describe_options ;
typedef int git_describe_format_options ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (char const*,int ,int ) ;

void FUNC_8(
 const char *VAR_1,
 git_repository *VAR_2,
 git_describe_options *VAR_3,
 git_describe_format_options *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 git_describe_result *VAR_6;

 FUNC_0(FUNC_6(&VAR_6, VAR_2, VAR_3));
 FUNC_0(FUNC_4(&VAR_5, VAR_6, VAR_4));

 FUNC_1(FUNC_7(VAR_1, FUNC_2(&VAR_5), 0));

 FUNC_5(VAR_6);
 FUNC_3(&VAR_5);
}
