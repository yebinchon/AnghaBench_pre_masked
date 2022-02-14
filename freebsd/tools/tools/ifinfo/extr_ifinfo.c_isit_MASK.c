
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, char **VAR_2, const char *VAR_3)
{
 if (VAR_1 == 0)
  return 1;
 for (VAR_1 = 0; VAR_2[VAR_1]; VAR_1++) {
  if (FUNC_0(VAR_2[VAR_1], VAR_3, VAR_0) == 0)
   return 1;
 }
 return 0;
}
