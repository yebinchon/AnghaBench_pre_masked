
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 if (VAR_1 != 2)
  FUNC_0("submodule--helper is-active takes exactly 1 argument");

 return !FUNC_1(VAR_0, VAR_2[1]);
}
