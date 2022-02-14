
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;



__attribute__((used)) static bool FUNC_0(int VAR_0, s32 *VAR_1)
{
 if (!VAR_1)
  return 0;
 while (*VAR_1 != -1) {
  if (*VAR_1 == VAR_0)
   return 1;
  VAR_1++;
 }
 return 0;
}
