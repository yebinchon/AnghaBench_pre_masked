
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;
 int* VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6 (void) {
  int VAR_6, VAR_7;
  for (VAR_7 = 0; VAR_7 < 11; VAR_7++) {
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
      if (VAR_4[VAR_6]) {
        int VAR_8 = 0;
        int VAR_9 = FUNC_5 (VAR_4[VAR_6], &VAR_8, VAR_2);
        if (VAR_9 == VAR_4[VAR_6]) {
          if (FUNC_0 (VAR_8) || FUNC_1 (VAR_8)) {
            VAR_4[VAR_6] = 0;
          } else {
            break;
          }
        } else if (VAR_9 == 0) {
          break;
        } else if (VAR_9 != -1 || VAR_3 != VAR_0) {
          VAR_4[VAR_6] = 0;
        } else {
          break;
        }
      }
    }
    if (VAR_6 == VAR_5) {
      break;
    }
    if (VAR_7 < 10) {
      FUNC_4 (100000);
    }
  }
  if (VAR_7 == 11) {
    int VAR_10 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
      if (VAR_4[VAR_6]) {
        ++VAR_10;
        FUNC_2 (VAR_4[VAR_6], VAR_1);
      }
    }
    FUNC_3 ("WARNING: %d children unfinished --> they are now killed\n", VAR_10);
  }
}
