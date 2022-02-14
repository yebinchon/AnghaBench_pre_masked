
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0)
{
 int VAR_1, VAR_2;
 if (!VAR_0 || (*VAR_0 != '/' && *VAR_0 != '~'))
  return -1;
 VAR_1 = 1; VAR_2 = 0;
 VAR_0++;

 while (1) {
  char VAR_3 = *VAR_0++;
  if (VAR_1) {
   if (VAR_3 == '.')
    VAR_2++;
   else if (VAR_3 == '/') {
    if (VAR_2 < 3)

     return -1;
    VAR_2 = 0;
   }
   else if (VAR_3 == 0) {
    if (0 < VAR_2 && VAR_2 < 3)

     return -1;
    return 0;
   }
   else
    VAR_1 = VAR_2 = 0;
  }
  else if (VAR_3 == 0)
   return 0;
  else if (VAR_3 == '/') {
   VAR_1 = 1;
   VAR_2 = 0;
  }
 }
}
