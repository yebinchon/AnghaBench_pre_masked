
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int* VAR_0 ;
 int FUNC_1 (int,char const*) ;
 scalar_t__ VAR_1 ;

int FUNC_2 (const char *VAR_2) {
  if (VAR_1) {
    return FUNC_0 (VAR_2);
  }
  static int VAR_3 = 0;
  int VAR_4 = 0, VAR_5 = 0;
  int VAR_6 = (unsigned char) *VAR_2;
  if (VAR_0[VAR_6] & 0x40) {
    if (VAR_6 == '*') {
      VAR_3 = 1;
    }
    int VAR_7 = FUNC_1 (VAR_6, VAR_2 + 1);
    if (VAR_6 == '*') {
      VAR_3 = 0;
    }
    if (VAR_7 >= 0 && VAR_7 < 127) {
      return VAR_7 + 1;
    }
  }
  while (VAR_4 <= 120) {
    VAR_6 = (unsigned char) *VAR_2;
    if (VAR_0[VAR_6] & 8) {
      VAR_2++;
      if (++VAR_4 == 127) {
 break;
      }
    } else if (VAR_0[VAR_6] & 4) {
      if (VAR_5 == (VAR_3 ? 30 : 4)) {
 break;
      }
      VAR_2++;
      VAR_5++;
      VAR_4++;
    } else if (VAR_6 == '&') {
      if (VAR_2[1] == '#') {
 int VAR_8, VAR_9 = 0;
 for (VAR_8 = 2; VAR_8 <= 7 && VAR_2[VAR_8] <= '9' && VAR_2[VAR_8] >= '0'; VAR_8++) {
   VAR_9 *= 10;
   VAR_9 += VAR_2[VAR_8] - '0';
 }
 if (VAR_2[VAR_8] == ';' && VAR_9 && VAR_9 < 4096) {
   VAR_8++;
          if (!VAR_4 && VAR_9 < 128 && (VAR_0[VAR_9] & 0x40)) {
            int VAR_10 = FUNC_1 (VAR_9, VAR_2 + VAR_8);
            if (VAR_10 >= 0 && VAR_10 < 120) {
              return VAR_10 + VAR_8;
            }
          }
         if (VAR_9 >= 0xc0 && VAR_9 <= 0xff && VAR_9 != 0xd7 && VAR_9 != 0xf7) {
           VAR_2 += VAR_8;
           VAR_4 += VAR_8;
           continue;
         }
 }
      }
      break;
    } else {
      break;
    }
  }
  return VAR_4;
}
