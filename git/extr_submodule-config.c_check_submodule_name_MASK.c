
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0)
{

 if (!*VAR_0)
  return -1;






 goto in_component;
 while (*VAR_0) {
  char VAR_1 = *VAR_0++;
  if (VAR_1 == '/' || VAR_1 == '\\') {
in_component:
   if (VAR_0[0] == '.' && VAR_0[1] == '.' &&
       (!VAR_0[2] || VAR_0[2] == '/' || VAR_0[2] == '\\'))
    return -1;
  }
 }

 return 0;
}
