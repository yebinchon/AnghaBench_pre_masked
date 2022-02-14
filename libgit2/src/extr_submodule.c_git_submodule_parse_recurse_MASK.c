
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_submodule_recurse_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*,int ,int ,char const*) ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(git_submodule_recurse_t *VAR_2, const char *VAR_3)
{
 int VAR_4;

 if (FUNC_1(
   &VAR_4, VAR_1, FUNC_0(VAR_1), VAR_3) < 0) {
  *VAR_2 = VAR_0;
  return FUNC_2("recurse", VAR_3);
 }

 *VAR_2 = (git_submodule_recurse_t)VAR_4;
 return 0;
}
