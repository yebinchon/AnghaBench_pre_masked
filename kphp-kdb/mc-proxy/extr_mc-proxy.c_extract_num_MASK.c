
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long long FUNC_0 (const char *VAR_0, int VAR_1, char **VAR_2) {
  const char *VAR_3 = VAR_0, *VAR_4 = VAR_0 + VAR_1, *VAR_5;
  unsigned long long VAR_6;
  while (VAR_3 < VAR_4 && (*VAR_3 < '0' || *VAR_3 > '9')) {
    VAR_3++;
  }
  if (VAR_3 == VAR_4) {
    if (VAR_2) {
      *VAR_2 = (char *)VAR_3;
    }
    return (unsigned long long) -1;
  }
  do {
    VAR_5 = VAR_3;
    VAR_6 = 0;
    while (VAR_3 < VAR_4 && *VAR_3 >= '0' && *VAR_3 <= '9') {
      if (VAR_6 >= 0x7fffffffffffffffLL / 10) {
        if (VAR_2) {
          *VAR_2 = (char *)VAR_3;
        }
        return (unsigned long long) -1;
      }
      VAR_6 = VAR_6*10 + (*VAR_3 - '0');
      VAR_3++;
    }
    if (VAR_3 == VAR_5) {
      if (VAR_2) {
        *VAR_2 = (char *)VAR_3;
      }
      return (unsigned long long) -1;
    }
  } while (VAR_5 == VAR_0 && VAR_3 < VAR_4 && *VAR_3++ == '~');
  if (VAR_2) {
    *VAR_2 = (char *)VAR_3;
  }
  return VAR_6;
}
