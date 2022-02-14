
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,int*) ;

__attribute__((used)) static inline char *FUNC_1 (char *VAR_0, int VAR_1) {
  char *VAR_2 = VAR_0, *VAR_3 = VAR_0 + VAR_1, *VAR_4 = VAR_0;
  int VAR_5 = 5;

  while (VAR_2 < VAR_3) {
    if (FUNC_0 (*VAR_2, &VAR_5)) {
      return VAR_2;
    }
    if (!*VAR_2 || (VAR_5 == 2 && (unsigned char) *VAR_2 < 32 && *VAR_2 != 9)) {
      return 0;
    }
    ++VAR_2;
  }

  if (VAR_5 != 2) {
    VAR_4 = VAR_2;
  }

  return VAR_4;
}
