
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

int FUNC_1(char *VAR_0, size_t *VAR_1, const char *VAR_2) {
  if (!VAR_0 || !VAR_1 || !VAR_2) {
    return -1;
  }
  *VAR_1 = 0;
  const char *VAR_3 = VAR_2;
  char *VAR_4 = VAR_0;
  while (*VAR_3) {
    for (; *VAR_3 == ' '; VAR_3++) {
    }
    while (*VAR_3 != ' ' && *VAR_3 != '\n') {
      int VAR_5 = (*VAR_3 ? FUNC_0(*VAR_3++) : -1);
      int VAR_6 = (*VAR_3 ? FUNC_0(*VAR_3++) : -1);
      char VAR_7 = (*VAR_3 ? *VAR_3++ : '\0');
      if (VAR_5 < 0 || VAR_6 < 0 || VAR_7 != ' ') {
        return -1;
      }
      *VAR_4++ = (VAR_5 << 4) | VAR_6;
      *VAR_1 += 1;
    }
    if (*VAR_3 == ' ') {
      while (*++VAR_3 && *VAR_3 != '\n') {
      }
    }
    if (*VAR_3 && *VAR_3++ != '\n') {
      return -1;
    }
  }
  return 0;
}
