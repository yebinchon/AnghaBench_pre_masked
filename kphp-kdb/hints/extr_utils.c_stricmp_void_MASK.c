
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const int *VAR_2 = *(const int **)VAR_0;
  const int *VAR_3 = *(const int **)VAR_1;
  while (*VAR_2 == *VAR_3 && *VAR_2 != ' ')
    VAR_2++, VAR_3++;
  return *VAR_2 - *VAR_3;
}
