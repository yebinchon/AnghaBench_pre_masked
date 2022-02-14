
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_1 (int *,char*,long long) ;
 scalar_t__ FUNC_2 (int *,char*,long long*) ;
 scalar_t__ VAR_4 ;

void FUNC_3 (void) {
  while (VAR_4) {
    long long VAR_5 = 0;

    int VAR_6;
    for (VAR_6 = VAR_1; VAR_6 < VAR_2; VAR_6++) {
      if (VAR_3[VAR_6] != ((void*)0)) {
        long long VAR_7;
        if (FUNC_2 (VAR_3[VAR_6], "%lld", &VAR_7) <= 0) {
          VAR_4--;
        } else {
          VAR_5 += VAR_7;
        }
      }
    }

    FUNC_0 (VAR_4 == 0 || VAR_4 == VAR_2 - VAR_1);
    if (VAR_4 != 0) {
      FUNC_1 (VAR_3[VAR_0], "%lld\n", VAR_5);
    }
  }
}
