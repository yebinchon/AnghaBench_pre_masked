
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0 (int VAR_4) {
  int *VAR_5 = VAR_0, *VAR_6 = VAR_0, VAR_7;
  while (*VAR_5 != -1) {
    VAR_7 = *VAR_5++;
    if (!(VAR_7 & VAR_2)) {
      VAR_7 &= VAR_3;
      if (!VAR_7 || VAR_7 == VAR_4) {
        continue;
      }
      int *VAR_8;
      for (VAR_8 = VAR_0; VAR_8 < VAR_6; VAR_8++) {
        if ((*VAR_8 & VAR_3) == VAR_7) {
          break;
        }
      }
      if (VAR_8 < VAR_6) {
        continue;
      }
      VAR_7 = VAR_5[-1];
    }
    *VAR_6++ = VAR_7;
  }
  *VAR_6 = -1;
  VAR_1 = VAR_6 - VAR_0;
  return VAR_1;
}
