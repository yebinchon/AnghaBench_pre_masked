
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2, VAR_3;
 for (VAR_2 = VAR_1; VAR_2; VAR_2--) {
  if (VAR_0[VAR_2-1] != ' ' && VAR_0[VAR_2-1] != '\t')
   break;
  VAR_3 = VAR_2;
  while (VAR_3 > 1 && VAR_0[VAR_3-2] == '\\')
   VAR_3--;
  if ((VAR_2 - VAR_3) % 2)
   break;
 }
 return VAR_1 - VAR_2;
}
