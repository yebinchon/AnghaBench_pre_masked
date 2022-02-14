
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_regexp ;
typedef int git_object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int **,int *,char const*) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(git_object**VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 int VAR_5;
 git_regexp VAR_6;

 VAR_4 = FUNC_4(VAR_3, "-g");

 if (VAR_4 == ((void*)0))
  return VAR_0;

 if (FUNC_0(&VAR_6, ".+-[0-9]+-g[0-9a-fA-F]+") < 0)
  return -1;

 VAR_5 = FUNC_2(&VAR_6, VAR_3);
 FUNC_1(&VAR_6);

 if (VAR_5)
  return VAR_0;

 return FUNC_3(VAR_1, VAR_2, VAR_4+2);
}
