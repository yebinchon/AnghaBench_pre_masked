
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int) ;
 void* FUNC_3 (int) ;

void *FUNC_4 (void *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  if (!VAR_2) {
    if (VAR_0) { FUNC_2 (VAR_0, FUNC_1 (VAR_1) * VAR_3); }
    return 0;
  }
  void *VAR_4 = FUNC_3 ( FUNC_1 (VAR_2) * VAR_3);
  if (!VAR_4) { return 0; }
  if (VAR_0) {
    int VAR_5 = 0, VAR_6 = 0, VAR_7 = VAR_1 | VAR_2;
    while (VAR_7) {
      int VAR_8;
      VAR_7 ^= VAR_8 = VAR_7 & -VAR_7;
      if (VAR_8 & VAR_2) {
        if (VAR_8 & VAR_1) {
          FUNC_0 (VAR_4 + VAR_6, VAR_0 + VAR_5, VAR_3);
          VAR_5 += VAR_3;
        }
        VAR_6 += VAR_3;
      } else {
        VAR_5 += VAR_3;
      }
    }
    FUNC_2 (VAR_0, VAR_5);
  }
  return VAR_4;
}
