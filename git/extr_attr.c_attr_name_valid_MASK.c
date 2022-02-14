
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, size_t VAR_1)
{




 if (VAR_1 <= 0 || *VAR_0 == '-')
  return 0;
 while (VAR_1--) {
  char VAR_2 = *VAR_0++;
  if (! (VAR_2 == '-' || VAR_2 == '.' || VAR_2 == '_' ||
         ('0' <= VAR_2 && VAR_2 <= '9') ||
         ('a' <= VAR_2 && VAR_2 <= 'z') ||
         ('A' <= VAR_2 && VAR_2 <= 'Z')) )
   return 0;
 }
 return 1;
}
