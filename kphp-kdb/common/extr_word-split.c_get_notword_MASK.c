
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
  int VAR_3 = 0, VAR_4 = 0;
  int VAR_5;
  while (VAR_3 <= 30 && VAR_4 <= 4) {
    VAR_5 = (unsigned char) *VAR_2;
    if (!VAR_5 || (VAR_0[VAR_5] & 0x3f)) {
      break;
    }
    if ((VAR_0[VAR_5] & 0x40)) {
      int VAR_6 = FUNC_1 (VAR_5, VAR_2 + 1);
      if (VAR_6 > 0 && VAR_6 < 127) {
        break;
      }
    }
    if (VAR_5 == '<' && VAR_2[1] == 'b') {
      if (!VAR_2[2]) {

 return -1;
      } else if (VAR_2[2] == 'r') {
 if (VAR_2[3] == '>') {
   VAR_2 += 4;
   VAR_3 += 4;
   VAR_4++;
   continue;
 } else if (VAR_2[3] == '/' && VAR_2[4] == '>') {
   VAR_2 += 5;
   VAR_3 += 5;
   VAR_4++;
   continue;
 }
      }
    } else if (VAR_5 == '&') {
      if (VAR_2[1] == '#') {
 int VAR_7, VAR_8 = 0;
 for (VAR_7 = 2; VAR_7 <= 7 && VAR_2[VAR_7] <= '9' && VAR_2[VAR_7] >= '0'; VAR_7++) {
   VAR_8 *= 10;
   VAR_8 += VAR_2[VAR_7] - '0';
 }
 if (VAR_2[VAR_7] == ';' && VAR_8 && VAR_8 < 4096) {
   VAR_7++;
          if (VAR_8 < 128 && (VAR_0[VAR_8] & 0x40) && VAR_3) {
            int VAR_9 = FUNC_1 (VAR_5, VAR_2 + VAR_7);
            if (VAR_9 >= 0 && VAR_9 < 127) {
              break;
            }
          }
         if (VAR_8 >= 0xc0 && VAR_8 <= 0xff && VAR_8 != 0xd7 && VAR_8 != 0xf7) {
           break;
         }
   VAR_3 += VAR_7;
   VAR_2 += VAR_7;
   VAR_4++;
   continue;
 }
      } else {
 int VAR_10;
 for (VAR_10 = 1; VAR_10 <= 10 && VAR_2[VAR_10] >= 'a' && VAR_2[VAR_10] <= 'z'; VAR_10++) ;
 if (VAR_10 > 1 && VAR_2[VAR_10] == ';') {
   VAR_10++;
   VAR_3 += VAR_10;
   VAR_2 += VAR_10;
   VAR_4++;
   continue;
 }
      }
    }
    VAR_2++;
    VAR_3++;
    VAR_4++;
  }
  return VAR_3;
}
