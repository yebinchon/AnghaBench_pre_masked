
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0 (const int *VAR_0, const int *VAR_1) {
  while (*VAR_0 == *VAR_1 && *VAR_0 != ' ')
    VAR_0++, VAR_1++;
  return *VAR_0 == ' ';
}
