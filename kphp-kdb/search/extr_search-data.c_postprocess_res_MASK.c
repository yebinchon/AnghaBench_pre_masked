
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int ** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2 (void) {
  if (VAR_4) {
    FUNC_1 ();
    return;
  }

  int VAR_11, VAR_12;
  item_t *VAR_13;

  if (VAR_7 == VAR_3 && !(VAR_6 & (VAR_0 | VAR_1))) {
    if (VAR_6 & VAR_2) {
      VAR_12 = VAR_9 - 1;
      for (VAR_11 = 0; VAR_11 < VAR_12 - VAR_11; VAR_11++) {
        VAR_13 = VAR_8[VAR_12-VAR_11]; VAR_8[VAR_12-VAR_11] = VAR_8[VAR_11]; VAR_8[VAR_11] = VAR_13;
      }
      if (VAR_10 >= VAR_5) {
        VAR_12 = VAR_9 + VAR_5 - 1;
        for (VAR_11 = VAR_9; VAR_11 < VAR_12 - VAR_11; VAR_11++) {
          VAR_13 = VAR_8[VAR_12-VAR_11]; VAR_8[VAR_12-VAR_11] = VAR_8[VAR_11]; VAR_8[VAR_11] = VAR_13;
        }
        VAR_9 = VAR_5;
      }
    }
    return;
  }

  if (!VAR_9) { return; }
  FUNC_0 ();
}
