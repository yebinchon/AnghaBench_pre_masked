
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*) ;

__attribute__((used)) static int FUNC_3(git_repository *VAR_3, const char *VAR_4)
{
 int VAR_5;
 git_remote *VAR_6;

 VAR_5 = FUNC_2(&VAR_6, VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  return 0;

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_6);

 FUNC_0(VAR_2, "remote '%s' already exists", VAR_4);

 return VAR_0;
}
