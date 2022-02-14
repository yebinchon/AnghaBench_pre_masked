
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int **,int *) ;

__attribute__((used)) static int FUNC_2(git_reference **VAR_1, git_repository *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 == VAR_0)
  return FUNC_0(VAR_3, "you do not have the initial commit yet.");

 return VAR_3;
}
