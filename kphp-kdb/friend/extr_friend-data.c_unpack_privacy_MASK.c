
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

int FUNC_1 (const int *VAR_5, int VAR_6) {
  const int *VAR_7 = VAR_5 + VAR_6;
  int *VAR_8 = VAR_1;
  FUNC_0 (VAR_6 <= VAR_0);
  while (VAR_5 < VAR_7) {
    int VAR_9 = *VAR_5++, VAR_10;
    FUNC_0 (VAR_8 < VAR_1 + VAR_0 - 32);
    if (!(VAR_9 & VAR_3)) {
      *VAR_8++ = VAR_9;
      continue;
    }
    VAR_10 = VAR_9 & ~VAR_4;
    switch (VAR_9 & VAR_4) {
    case 130:
    case 129:
      *VAR_8++ = VAR_9;
      continue;
    case 128:
      *VAR_8++ = VAR_10;
      continue;
    }
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < 30; VAR_11++) {
      if (VAR_9 & 1) {
        *VAR_8++ = VAR_10 + VAR_11 + 1;
      }
      VAR_9 >>= 1;
    }
  }
  *VAR_8 = -1;
  VAR_2 = VAR_8 - VAR_1;
  return VAR_2;
}
