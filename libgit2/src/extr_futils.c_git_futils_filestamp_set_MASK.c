
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_futils_filestamp ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(
 git_futils_filestamp *VAR_0, const git_futils_filestamp *VAR_1)
{
 FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_0, VAR_1, sizeof(*VAR_0));
 else
  FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
