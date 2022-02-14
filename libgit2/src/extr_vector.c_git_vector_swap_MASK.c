
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
typedef int git_vector ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2(git_vector *VAR_0, git_vector *VAR_1)
{
 git_vector VAR_2;

 FUNC_0(VAR_0 && VAR_1);

 if (VAR_0 != VAR_1) {
  FUNC_1(&VAR_2, VAR_0, sizeof(VAR_2));
  FUNC_1(VAR_0, VAR_1, sizeof(VAR_2));
  FUNC_1(VAR_1, &VAR_2, sizeof(VAR_2));
 }
}
