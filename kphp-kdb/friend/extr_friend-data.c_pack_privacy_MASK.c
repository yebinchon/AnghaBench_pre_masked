
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_1 (void) {
  int *VAR_9 = VAR_2, *VAR_10 = VAR_5;
  while (*VAR_9 != -1) {
    int VAR_11 = *VAR_9++;
    if ((VAR_11 & VAR_3) && (VAR_11 & VAR_4) < VAR_0) {
      if (!(VAR_11 & 0x1f)) {
        *VAR_10++ = (VAR_11 & ~VAR_4) | VAR_1;
        continue;
      }
      int VAR_12 = 0, VAR_13 = VAR_11;
      while (1) {
        VAR_12 |= (1 << ((VAR_11 & 0x1f) - 1));
        VAR_11 = *VAR_9;
        if (VAR_11 == -1 || ((VAR_13 ^ VAR_11) < 0) || !(VAR_11 & VAR_3) || (VAR_11 & VAR_4) >= VAR_0 || !(VAR_11 & 0x1f)) {
          break;
        }
        VAR_9++;
      }
      VAR_11 = VAR_13 & ~VAR_4;
      VAR_12 &= VAR_4;
      if (VAR_12 >= VAR_1) {
        *VAR_10++ = VAR_11 + (VAR_12 & 0xffff);
        VAR_12 &= -0x10000;
      }
      VAR_11 |= VAR_12;
    }
    *VAR_10++ = VAR_11;
  }
  VAR_6 = VAR_10 - VAR_5;

  if (VAR_8 > 2) {
    int VAR_14;
    FUNC_0 (VAR_7, "packed privacy: ");
    for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
      FUNC_0 (VAR_7, " %08x", VAR_5[VAR_14]);
    }
    FUNC_0 (VAR_7, "\n");
  }

  return VAR_6;
}
