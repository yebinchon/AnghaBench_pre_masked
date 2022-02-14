
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef scalar_t__ git_rebase_type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__*,int *,int *) ;

__attribute__((used)) static int FUNC_2(git_repository *VAR_2)
{
 int VAR_3;
 git_rebase_type_t VAR_4;

 if ((VAR_3 = FUNC_1(&VAR_4, ((void*)0), VAR_2)) < 0)
  return VAR_3;

 if (VAR_4 != VAR_1) {
  FUNC_0(VAR_0, "there is an existing rebase in progress");
  return -1;
 }

 return 0;
}
