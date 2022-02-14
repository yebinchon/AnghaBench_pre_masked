
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0 (void) {
  int *VAR_6 = VAR_2, *VAR_7 = VAR_2, VAR_8, VAR_9 = 0, VAR_10 = 0;
  while (*VAR_6 != -1 && VAR_10 != VAR_0) {
    VAR_8 = *VAR_6++;
    if (VAR_8 & VAR_4) {
      VAR_8 &= VAR_5;
      if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
        if (VAR_10 >= VAR_8) {
          continue;
        }
        VAR_10 |= VAR_8;
        VAR_9 = -1;
      } else {
        VAR_8 = (1 << (VAR_8 & 0x1f));
        if (VAR_9 & VAR_8) {
          continue;
        }
        if (VAR_8 == 1) {
          VAR_8 = -1;
        }
        VAR_9 |= VAR_8;
      }
      VAR_8 = VAR_6[-1];
    }
    *VAR_7++ = VAR_8;
  }
  *VAR_7 = -1;
  VAR_3 = VAR_7 - VAR_6;
  return VAR_3;
}
