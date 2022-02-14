
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

inline void FUNC_0 (char **VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
  if (VAR_4 < 0) {
    VAR_4 = VAR_0;
  }

  *--*VAR_1 = ' ';
  *--*VAR_1 = ']';

  do {
    *--*VAR_1 = VAR_4 % 10 + '0';
    VAR_4 /= 10;
  } while (VAR_4 > 0);

  *--*VAR_1 = ' ';

  while (--VAR_3 >= 0) {
    *--*VAR_1 = VAR_2[VAR_3];
  }

  *--*VAR_1 = '[';
}
