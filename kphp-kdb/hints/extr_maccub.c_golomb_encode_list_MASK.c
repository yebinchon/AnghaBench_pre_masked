
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int golomb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int,int*) ;

int FUNC_3 (int *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3) {
  FUNC_0 (VAR_1 > 0);

  int VAR_4 = -1, VAR_5 = 1;
  while (VAR_5 < VAR_2) {
    VAR_5 += VAR_5;
    VAR_4++;
  }

  int VAR_6 = 0x80;
  unsigned char *VAR_7 = VAR_3;
  *VAR_7 = 0;

  int VAR_8 = VAR_1 - 1;
  while (VAR_4 >= 0) {
    if (!VAR_6) { *++VAR_7 = 0; VAR_6 = 0x80; }
    if ((VAR_8 >> VAR_4) & 1) { *VAR_7 += VAR_6; }
    VAR_6 >>= 1;
    VAR_4--;
  }

  int VAR_9 = FUNC_1 (VAR_2, VAR_1);

  VAR_4 = 31, VAR_5 = 1;
  while (VAR_5 <= VAR_9) {
    VAR_5 += VAR_5;
    VAR_4--;
  }
  VAR_5 -= VAR_9;

  int VAR_10 = VAR_2 + 1, VAR_11;

  while (VAR_1 > 0) {
    VAR_1--;
    VAR_11 = VAR_10 - *VAR_0;
    VAR_10 -= VAR_11;

    VAR_0++;
    FUNC_0 (VAR_11 > 0);
    VAR_11--;




    while (VAR_11 >= VAR_9) {
      if (!VAR_6) { *++VAR_7 = 0x80; VAR_6 = 0x40; }
      else { *VAR_7 += VAR_6; VAR_6 >>= 1; }
      VAR_11 -= VAR_9;
    }
    if (!VAR_6) { *++VAR_7 = 0; VAR_6 = 0x40; }
    else { VAR_6 >>= 1; }
    if (VAR_11 < VAR_5) {
      VAR_11 = ((4*VAR_11 + 2) << VAR_4);
    } else {
      VAR_11 = ((2*(VAR_11 + VAR_5) + 1) << VAR_4);
    }
    while (VAR_11 != (-1 << 31)) {
      if (!VAR_6) { *++VAR_7 = 0; VAR_6 = 0x80; }
      if (VAR_11 < 0) { *VAR_7 += VAR_6; }
      VAR_11 <<= 1;
      VAR_6 >>= 1;
    }
  }
  if (VAR_6 != 0x80) { VAR_7++; }
  VAR_10 = VAR_7 - VAR_3;
  FUNC_2 ((golomb)VAR_3, VAR_2, VAR_10, VAR_0 - VAR_8 - 1);

  return VAR_10;
}
