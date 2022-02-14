
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int ** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1 (void) {
  int VAR_8, VAR_9;
  item_t *VAR_10;
  if (VAR_4 == VAR_1) {
    if (VAR_3 & VAR_0) {
      VAR_9 = VAR_6 - 1;
      for (VAR_8 = 0; VAR_8 < VAR_9 - VAR_8; VAR_8++) {
        VAR_10 = VAR_5[VAR_9-VAR_8]; VAR_5[VAR_9-VAR_8] = VAR_5[VAR_8]; VAR_5[VAR_8] = VAR_10;
      }
      if (VAR_7 >= VAR_2) {
        VAR_9 = VAR_6 + VAR_2 - 1;
        for (VAR_8 = VAR_6; VAR_8 < VAR_9 - VAR_8; VAR_8++) {
          VAR_10 = VAR_5[VAR_9-VAR_8]; VAR_5[VAR_9-VAR_8] = VAR_5[VAR_8]; VAR_5[VAR_8] = VAR_10;
        }
        VAR_6 = VAR_2;
      }
    }
    return;
  }

  if (!VAR_6) { return; }
  FUNC_0 ();
}
