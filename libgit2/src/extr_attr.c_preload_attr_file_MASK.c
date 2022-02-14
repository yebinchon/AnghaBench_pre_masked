
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_attr_session ;
typedef int git_attr_file_source ;
typedef int git_attr_file ;


 int FUNC_0 (int **,int *,int *,int ,char const*,char const*,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(
 git_repository *VAR_1,
 git_attr_session *VAR_2,
 git_attr_file_source VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 bool VAR_6)
{
 int VAR_7;
 git_attr_file *VAR_8 = ((void*)0);

 if (!VAR_5)
  return 0;
 if (!(VAR_7 = FUNC_0(&VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_0, VAR_6)))
  FUNC_1(VAR_8);

 return VAR_7;
}
