
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

char *FUNC_1 (unsigned long long VAR_0) {
  static char VAR_1[100];
  char *VAR_2 = VAR_1;
  *VAR_2++ = 'w';
  *VAR_2++ = '_';
  while (VAR_0) {
    int VAR_3 = VAR_0 % 62;
    VAR_0 /= 62;
    if (VAR_3 < 26) {
      *VAR_2++ = VAR_3 + 'A';
    } else {
      VAR_3 -= 26;
      if (VAR_3 < 26) {
        *VAR_2++ = VAR_3 + 'a';
      } else {
        VAR_3 -= 26;
        if (VAR_3 < 10) {
          *VAR_2++ = VAR_3 + '0';
        } else {
          FUNC_0 (0);
        }
      }
    }
  }
  *VAR_2++ = 0;

  return VAR_1;
}
