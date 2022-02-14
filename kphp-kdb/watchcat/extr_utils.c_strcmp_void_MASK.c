
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const char *VAR_2 = *(const char **)VAR_0;
  const char *VAR_3 = *(const char **)VAR_1;
  while (*VAR_2 == *VAR_3 && *VAR_2 != ' ')
    VAR_2++, VAR_3++;
  return *VAR_2-*VAR_3;
}
