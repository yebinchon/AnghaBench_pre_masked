
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int **,int *,char*) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int FUNC_3(git_remote **VAR_2, git_repository *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, VAR_3);


 if (VAR_4 == VAR_0)
  VAR_4 = FUNC_1(VAR_2, VAR_3, "origin");

 if (VAR_4 == VAR_0)
  FUNC_0(
   VAR_1,
   "cannot get default remote for submodule - no local tracking "
   "branch for HEAD and origin does not exist");

 return VAR_4;
}
