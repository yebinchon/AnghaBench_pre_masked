
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 scalar_t__ FUNC_1 () ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void FUNC_4 (int VAR_12) {
  if (VAR_11 >= VAR_10) {
    int VAR_13 = VAR_11 / 86400;
    int VAR_14 = VAR_7;
    if (VAR_12) {
      FUNC_3 ();
    } else {
      FUNC_2 (0);
    }
    int VAR_15 = ~VAR_5;
    long long VAR_16 = VAR_6;
    int VAR_17;
    for (VAR_17 = VAR_4 + 1; VAR_17 <= VAR_13; VAR_17++) {
      VAR_2 [VAR_17] = VAR_16;
      VAR_1[VAR_17] = VAR_15;
      VAR_3[VAR_17] = VAR_14;
    }
    VAR_4 = VAR_13;
    VAR_10 = (VAR_4 + 1) * 86400;
  } else if (VAR_0) {

    while (VAR_2[VAR_8] && FUNC_1 () >= VAR_2[VAR_8]) {
      FUNC_0 (FUNC_1 () == VAR_2[VAR_8]);
      FUNC_2 (0);
      FUNC_0 (~VAR_5 == VAR_1[VAR_8]);
      VAR_8 ++;
      VAR_9 = VAR_8 * 86400;
    }
  }
}
