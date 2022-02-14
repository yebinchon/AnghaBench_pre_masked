
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,unsigned long*,char const**) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, unsigned long *VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_1;
 unsigned long VAR_4 = *VAR_2;

 for (;;) {
  if (!*VAR_0)
   return 0;

  if (*VAR_0 == ';')
   break;

  if (*VAR_0 == 'x') {
   if (!FUNC_0(VAR_0 + 1, &VAR_3, &VAR_0))
    return 0;
  } else if (*VAR_0 == 'y') {
   if (!FUNC_0(VAR_0 + 1, &VAR_4, &VAR_0))
    return 0;
  } else {
   return 0;
  }
 }

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
 return 1;
}
