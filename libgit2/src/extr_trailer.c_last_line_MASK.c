
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(size_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 *VAR_0 = 0;

 if (VAR_2 == 0)
  return 0;
 if (VAR_2 == 1)
  return 1;






 VAR_3 = VAR_2 - 2;

 for (; VAR_3 > 0; VAR_3--) {
  if (VAR_1[VAR_3] == '\n') {
   *VAR_0 = VAR_3 + 1;
   return 1;
  }
 }
 return 1;
}
