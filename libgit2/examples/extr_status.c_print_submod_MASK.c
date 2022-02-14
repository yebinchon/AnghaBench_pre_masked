
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(git_submodule *VAR_0, const char *VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;
 (void)VAR_1;

 if (*VAR_3 == 0)
  FUNC_2("# Submodules\n");
 (*VAR_3)++;

 FUNC_2("# - submodule '%s' at %s\n",
  FUNC_0(VAR_0), FUNC_1(VAR_0));

 return 0;
}
