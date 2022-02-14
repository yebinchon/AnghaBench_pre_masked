
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,char const**) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 int VAR_1;

 if (!FUNC_1(VAR_0, "$Id: ", &VAR_0))
  return 0;
 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
  if (FUNC_0(VAR_0[VAR_1]) && VAR_0[VAR_1+1] != '$')
   return 1;
 }
 return 0;
}
