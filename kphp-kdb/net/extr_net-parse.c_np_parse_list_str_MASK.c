
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;

int FUNC_2 (int *VAR_0, const int VAR_1, const int VAR_2, const char *VAR_3, const int VAR_4) {
  const char *VAR_5 = VAR_3 + VAR_4;
  int VAR_6 = 0, VAR_7 = 0, VAR_8, VAR_9;

  while (VAR_3 < VAR_5) {
    VAR_8 = 0;
    VAR_9 = 0;

    if (*VAR_3 == '-') {
      VAR_3++;
      VAR_9 = 1;
    }

    if (!FUNC_1 (*VAR_3)) {
      return -1;
    }

    while (VAR_3 < VAR_5 && FUNC_1 (*VAR_3)) {
      if (VAR_8 > 0x7fffffff / 10) {
        return -1;
      }
      VAR_8 = VAR_8*10 + (*VAR_3++ - '0');
      if (VAR_8 < 0) {
        return -1;
      }
    }
    if (VAR_9) {
      VAR_8 = -VAR_8;
    }
    if (++VAR_7 == VAR_2) {
      VAR_7 = 0;
    }
    if (VAR_6 >= VAR_1 || (VAR_3 < VAR_5 && *VAR_3 != (VAR_7 ? '_' : ','))) {
      return -1;
    }
    VAR_0[VAR_6++] = VAR_8;
    if (VAR_3 == VAR_5) {
      return VAR_7 ? -1 : VAR_6 / VAR_2;
    }
    FUNC_0 (*VAR_3 == (VAR_7 ? '_' : ','));
    VAR_3++;
  };

  FUNC_0 (VAR_3 == VAR_5);
  return VAR_7 ? -1 : VAR_6 / VAR_2;
}
