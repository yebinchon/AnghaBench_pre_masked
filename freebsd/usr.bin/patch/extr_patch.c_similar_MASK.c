
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 while (VAR_2) {
  if (FUNC_0((unsigned char)*VAR_1)) {
   if (!FUNC_0((unsigned char)*VAR_0))
    return 0;
   while (VAR_2 && FUNC_0((unsigned char)*VAR_1) && *VAR_1 != '\n')
    VAR_1++, VAR_2--;
   while (FUNC_0((unsigned char)*VAR_0) && *VAR_0 != '\n')
    VAR_0++;
   if (*VAR_0 == '\n' || *VAR_1 == '\n')
    return (*VAR_0 == *VAR_1);
  } else if (*VAR_0++ != *VAR_1++)
   return 0;
  else
   VAR_2--;
 }
 return 1;

}
