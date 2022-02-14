
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0 (const char *VAR_0, int VAR_1, char **VAR_2, int *VAR_3) {
  *VAR_2 = (char *)VAR_0;
  *VAR_3 = VAR_1;

  if ((*VAR_0 >= '0' && *VAR_0 <= '9') || (*VAR_0 == '-' && VAR_0[1] >= '0' && VAR_0[1] <= '9')) {
    VAR_0++;
    while (*VAR_0 >= '0' && *VAR_0 <= '9') {
      VAR_0++;
    }
    if (*VAR_0++ == '@') {
      *VAR_3 = VAR_0 + VAR_1 - *VAR_2;
      *VAR_2 = (char *)VAR_0;
    }
  }
}
