
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int,char const*) ;

int FUNC_1 (const char *VAR_1) {
  int VAR_2 = 0, VAR_3 = 0;
  int VAR_4;
  while (VAR_2 <= 30 && VAR_3 <= 4) {
    VAR_4 = (unsigned char) *VAR_1;
    if (!VAR_4 || (VAR_0[VAR_4] & 0x3f)) {
      break;
    }
    if ((VAR_0[VAR_4] & 0x40)) {
      int VAR_5 = FUNC_0 (VAR_4, VAR_1 + 1);
      if (VAR_5 > 0 && VAR_5 < 127) {
        break;
      }
    }
    if (VAR_4 >= 0xc2 && VAR_4 <= 0xdf && (signed char) VAR_1[1] < -0x40) {
      VAR_4 = ((VAR_4 & 0x1f) << 6) | (VAR_1[1] & 0x3f);
      if (VAR_0[VAR_4] & 8) {
 break;
      }
      VAR_1 += 2;
      VAR_2 += 2;
      VAR_3++;
      continue;
    }
    if (VAR_4 == '<' && VAR_1[1] == 'b') {
      if (!VAR_1[2]) {

 return -1;
      } else if (VAR_1[2] == 'r') {
 if (VAR_1[3] == '>') {
   VAR_1 += 4;
   VAR_2 += 4;
   VAR_3++;
   continue;
 } else if (VAR_1[3] == '/' && VAR_1[4] == '>') {
   VAR_1 += 5;
   VAR_2 += 5;
   VAR_3++;
   continue;
 }
      }
    }
    VAR_1++;
    VAR_2++;
    VAR_3++;
  }
  return VAR_2;
}
