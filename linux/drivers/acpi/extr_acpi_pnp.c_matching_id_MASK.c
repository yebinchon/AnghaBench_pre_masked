
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 char FUNC_2 (char const) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_0, VAR_1, 3))
  return 0;

 for (VAR_2 = 3; VAR_2 < 7; VAR_2++) {
  char VAR_3 = FUNC_2(VAR_0[VAR_2]);

  if (!FUNC_0(VAR_3)
      || (VAR_1[VAR_2] != 'X' && VAR_3 != FUNC_2(VAR_1[VAR_2])))
   return 0;
 }
 return 1;
}
