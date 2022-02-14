
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_reader {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nb_reader*) ;

int FUNC_2 (struct nb_reader *VAR_0, int *VAR_1, int *VAR_2) {
  int VAR_3 = 0, VAR_4 = 0;
  *VAR_2 = FUNC_1 (VAR_0);
  if (*VAR_2 == '-') {
    VAR_3 = 1;
    *VAR_2 = FUNC_1 (VAR_0);
  }

  if (*VAR_2 < 0 || !FUNC_0(*VAR_2)) {
    return 0;
  }

  do {
    if (VAR_4 > 0x7fffffff / 10) {
      return 0;
    }
    VAR_4 = VAR_4 * 10 + (*VAR_2 - '0');
    if (VAR_4 < 0) {
      return 0;
    }
    *VAR_2 = FUNC_1 (VAR_0);
  } while (*VAR_2 >= 0 && FUNC_0(*VAR_2));

  if (VAR_3) {
    VAR_4 = -VAR_4;
  }
  *VAR_1 = VAR_4;
  return 1;
}
