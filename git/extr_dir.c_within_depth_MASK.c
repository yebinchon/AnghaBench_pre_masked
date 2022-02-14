
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, int VAR_1,
   int VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_0, *VAR_5 = VAR_0 + VAR_1;

 while (VAR_4 < VAR_5) {
  if (*VAR_4++ != '/')
   continue;
  VAR_2++;
  if (VAR_2 > VAR_3)
   return 0;
 }
 return 1;
}
