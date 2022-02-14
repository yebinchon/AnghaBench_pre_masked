
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(const char *VAR_0, size_t VAR_1, const char *VAR_2,
   int *VAR_3)
{
 for (*VAR_3 = 0; ; (*VAR_3)++) {
  char VAR_4 = VAR_2[*VAR_3];

  switch (VAR_4) {
  case '*':

   return 1;

  case '\0':

   return (*VAR_3 == VAR_1);

  default:





   if (*VAR_3 < VAR_1 && VAR_4 == VAR_0[*VAR_3])
    continue;
   return 0;
  }
 }
}
