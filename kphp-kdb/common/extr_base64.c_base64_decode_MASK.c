
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char const* const) ;
 scalar_t__* VAR_0 ;

int FUNC_3 (const char *const VAR_1, unsigned char *VAR_2, int VAR_3) {
  static int VAR_4 = 0;
  static char VAR_5[256];
  int VAR_6 = FUNC_2 (VAR_1);
  int VAR_7, VAR_8 = 0;
  if (!VAR_4) {
    FUNC_1 (VAR_5, 0xff, 256);
    for (VAR_7 = 0; VAR_7 <= 64; VAR_7++) {
      VAR_5[(int) VAR_0[VAR_7]] = VAR_7;
    }
    VAR_4 = 1;
  }
  if (VAR_6 & 3) {
    return -2;
  }
  char VAR_9[3];
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 4) {
    int VAR_10 = 0, VAR_11 = 3, VAR_12 = 0;
    do {
      int VAR_13 = VAR_5[(unsigned char) VAR_1[VAR_7+VAR_12]];
      if (VAR_13 < 0) {
        return -3;
      }
      if (VAR_13 == 64) {
        switch (VAR_12) {
          case 0:
          case 1:
            return -4;
          case 2:
            if (VAR_5[(unsigned char) VAR_1[VAR_7+3]] != 64) {
              return -5;
            }
            VAR_10 <<= 12;
            VAR_11 = 1;
            break;
          case 3:
            VAR_10 <<= 6;
            VAR_11 = 2;
            break;
        }
        break;
      }
      VAR_10 <<= 6;
      VAR_10 |= VAR_13;
    } while (++VAR_12 < 4);
    VAR_12 = 2;
    do {
      VAR_9[VAR_12] = VAR_10 & 255;
      VAR_10 >>= 8;
    } while (--VAR_12 >= 0);
    if (VAR_8 + VAR_11 > VAR_3) {
      return -1;
    }
    FUNC_0 (&VAR_2[VAR_8], VAR_9, VAR_11);
    VAR_8 += VAR_11;
  }
  return VAR_8;
}
