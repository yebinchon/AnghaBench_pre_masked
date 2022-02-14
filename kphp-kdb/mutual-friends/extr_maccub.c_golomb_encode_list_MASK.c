
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int golomb ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int*) ;
 int FUNC_1 (int,int) ;

int FUNC_2 (int *VAR_1, int VAR_2, int VAR_3, unsigned char *VAR_4) {


  int VAR_5 = VAR_0, VAR_6 = 1 << (VAR_0 + 1);

  int VAR_7 = 0x80;
  unsigned char *VAR_8 = VAR_4;
  *VAR_8 = 0;

  int VAR_9 = VAR_2;
  while (VAR_5 >= 0) {
    if (!VAR_7) { *++VAR_8 = 0; VAR_7 = 0x80; }
    if ((VAR_9 >> VAR_5) & 1) { *VAR_8 += VAR_7;}
    VAR_7 >>= 1;
    VAR_5--;
  }

  int VAR_10 = FUNC_1 (VAR_3 + VAR_2, VAR_2);

  VAR_5 = 31, VAR_6 = 1;
  while (VAR_6 <= VAR_10) {
    VAR_6 += VAR_6;
    VAR_5--;
  }
  VAR_6 -= VAR_10;

  int VAR_11 = VAR_3 + VAR_2 + 1, VAR_12;

  while (VAR_2 > 0) {
    VAR_2--;
    VAR_12 = VAR_11 - *VAR_1;
    VAR_11 -= VAR_12;

    VAR_1++;







    while (VAR_12 >= VAR_10) {
      if (!VAR_7) { *++VAR_8 = 0x80; VAR_7 = 0x40; }
      else { *VAR_8 += VAR_7; VAR_7 >>= 1; }
      VAR_12 -= VAR_10;
    }
    if (!VAR_7) { *++VAR_8 = 0; VAR_7 = 0x40; }
    else { VAR_7 >>= 1; }
    if (VAR_12 < VAR_6) {
      VAR_12 = ((4*VAR_12 + 2) << VAR_5);
    } else {
      VAR_12 = ((2*(VAR_12 + VAR_6) + 1) << VAR_5);
    }
    while (VAR_12 != (-1 << 31)) {
      if (!VAR_7) { *++VAR_8 = 0; VAR_7 = 0x80; }
      if (VAR_12 < 0) { *VAR_8 += VAR_7; }
      VAR_12 <<= 1;
      VAR_7 >>= 1;
    }
  }
  if (VAR_7 != 0x80) { VAR_8++; }
  VAR_11 = VAR_8 - VAR_4;
  FUNC_0 ((golomb)VAR_4, VAR_3, VAR_11, VAR_1 - VAR_9);

  return VAR_11;
}
