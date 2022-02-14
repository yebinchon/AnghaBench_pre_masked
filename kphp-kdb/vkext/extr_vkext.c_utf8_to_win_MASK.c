
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int) ;

int FUNC_4 (const char *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7;
  if (VAR_3 && VAR_2 > 3 * VAR_3) {
    VAR_2 = 3 * VAR_3;
  }
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    if (VAR_3 && VAR_0 > VAR_3) {
      break;
    }
    unsigned char VAR_8 = VAR_1[VAR_7];
    if (VAR_8 < 0x80) {
      if (VAR_5) {
        if (VAR_4) {
          return -1;
        }
        FUNC_1 ("?1?", 3);
      }
      FUNC_2 (VAR_8);
      VAR_5 = 0;
      continue;
    }
    if ((VAR_8 & 0xc0) == 0x80) {
      if (!VAR_5) {
        if (VAR_4) {
          return -1;
        }
        FUNC_1 ("?2?", 3);
        continue;
      }
      VAR_6 <<= 6;
      VAR_6 += VAR_8 - 0x80;
      if (!--VAR_5) {
        if (VAR_4 && VAR_6 < 0x80) {
          return -1;
        }
        if (VAR_6 < 0x80) {
          FUNC_1 ("?3?", 3);
        } else {
          int VAR_9 = FUNC_0 (VAR_6);
          if (VAR_9 != -1 && VAR_9) {
            FUNC_2 (VAR_9);
          } else {
            FUNC_2 ('&');
            FUNC_2 ('#');
            FUNC_3 (VAR_6);
            FUNC_2 (';');
          }
        }
      }
      continue;
    }
    if ((VAR_8 & 0xc0) == 0xc0) {
      if (VAR_5) {
        if (VAR_4) {
          return -1;
        }
        FUNC_1 ("?4?", 3);
      }
      VAR_8 -= 0xc0;
      VAR_5 = 0;
      if (VAR_8 < 32) {
        VAR_6 = VAR_8;
        VAR_5 = 1;
      } else if (VAR_8 < 48) {
        VAR_6 = VAR_8 - 32;
        VAR_5 = 2;
      } else if (VAR_8 < 56) {
        VAR_6 = VAR_8 - 48;
        VAR_5 = 3;
      } else {
        if (VAR_4) {
          return -1;
        }
        FUNC_1 ("?5?", 3);
      }
    }
  }
  if (VAR_5) {
    if (VAR_4) {
      return -1;
    }
    FUNC_1 ("?6?", 3);
  }
  return 1;
}
