
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_repository ;
typedef int git_attr_session ;
typedef int git_attr_file_source ;
typedef int git_attr_file ;


 int FUNC_0 (int **,int *,int *,int ,char const*,char const*,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(
 git_repository *VAR_1,
 git_attr_session *VAR_2,
 git_vector *VAR_3,
 git_attr_file_source VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 bool VAR_7)
{
 int VAR_8 = 0;
 git_attr_file *VAR_9 = ((void*)0);

 VAR_8 = FUNC_0(&VAR_9, VAR_1, VAR_2,
  VAR_4, VAR_5, VAR_6, VAR_0, VAR_7);

 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9 != ((void*)0)) {
  if ((VAR_8 = FUNC_2(VAR_3, VAR_9)) < 0)
   FUNC_1(VAR_9);
 }

 return VAR_8;
}
