
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 unsigned int* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_1 (char *VAR_5, int VAR_6) {
  static char VAR_7[16] = "0123456789abcdef";
  int VAR_8 = 0;
  while (VAR_4 > 0 && VAR_8 < VAR_6) {
    unsigned VAR_9 = VAR_1[VAR_2];
    VAR_1[VAR_2] = 0;
    *VAR_5++ = VAR_7[VAR_9 >> 4];
    *VAR_5++ = VAR_7[VAR_9 & 15];
    if (++VAR_2 == VAR_3) {
      VAR_2 = 0;
    }
    VAR_8 += 2;
    VAR_4--;
  }
  int VAR_10 = 0;
  while (VAR_8 < VAR_6 && VAR_10 < 65536) {
    unsigned VAR_11 = FUNC_0 (&VAR_0);
    *VAR_5++ = VAR_7[VAR_11 >> 4];
    *VAR_5++ = VAR_7[VAR_11 & 15];
    VAR_8 += 2;
    VAR_10++;
  }

  if (VAR_8 > VAR_6) {
    VAR_8 = VAR_6;
  }

  return VAR_8;
}
