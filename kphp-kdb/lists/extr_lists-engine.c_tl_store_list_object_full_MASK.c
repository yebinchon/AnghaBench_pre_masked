
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (void*,int) ;

void FUNC_4 (const int *VAR_3, const int *VAR_4, int VAR_5, int VAR_6) {
  const int *VAR_7 = VAR_3;
  int VAR_8 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
    if (VAR_5 & (1 << 15)) {
      FUNC_3 ((void *)VAR_7, 4 * VAR_2);
    }
    VAR_7 += VAR_2;
    if (VAR_5 & 64) { FUNC_0 (*(VAR_7 ++)); }
    if (VAR_5 & 128) { FUNC_0 (*(VAR_7 ++)); }
    if (VAR_5 & 256) {
      FUNC_1 (*VAR_7);
      VAR_7 ++;
    }
    if (VAR_5 & 512) {
      if (VAR_1 == 2) {
        FUNC_1 (*(long long *)VAR_7);
        VAR_7 += 2;
      } else {
        FUNC_1 (*VAR_7);
        VAR_7 ++;
      }
    }
    if (VAR_5 & 1024) {
      char *VAR_9 = *(char **)VAR_7;
      VAR_7 += VAR_0;
      int VAR_10 = *(VAR_7 ++);
      FUNC_2 (VAR_9, VAR_10);
    }
  }
}
