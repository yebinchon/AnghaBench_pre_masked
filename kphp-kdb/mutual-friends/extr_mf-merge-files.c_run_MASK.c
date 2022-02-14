
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int* VAR_7 ;
 size_t* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 int FUNC_1 (int,int) ;
 int* VAR_14 ;
 int FUNC_2 (int) ;
 int* VAR_15 ;
 scalar_t__ FUNC_3 (int,int,int*) ;
 int VAR_16 ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_9 (void) {
  int VAR_21, VAR_22;
  for (VAR_22 = 0; VAR_22 <= VAR_19 && VAR_22 * VAR_12 + VAR_18 <= VAR_20; VAR_22++) {
    VAR_6 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
      if (VAR_13[VAR_21] >= 0) {
        VAR_6 += FUNC_3 (VAR_21, VAR_22, VAR_5 + VAR_6);
      }
    }
    FUNC_0 (VAR_6 < VAR_16);
    int VAR_23;

    VAR_11 = 0;

    for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
      VAR_23 = (VAR_5[VAR_21] & 1) * 3 + 1;
      VAR_5[VAR_21] /= 2;
      VAR_10[VAR_11] = FUNC_1 (VAR_5[VAR_21], VAR_23);
      if (VAR_10[VAR_11] != -1) {
        VAR_11++;
      }
    }

    int VAR_24 = VAR_22 * VAR_12 + VAR_18;

    while (VAR_0 <= VAR_24) {
      if (VAR_0 == VAR_24) {
        if (VAR_2 >= 0) {
          FUNC_2 (VAR_2 & ((1 << 30) - 1));
        }
      }
      if (!FUNC_5()) {
        break;
      }
    }

    while (VAR_1 <= VAR_24) {
      if (VAR_1 == VAR_24) {
        if (VAR_3 >= 0) {
          FUNC_2 (VAR_3 & ((1 << 30) - 1));
        }
      }
      if (!FUNC_6()) {
        break;
      }
    }

    int VAR_25 = 0, VAR_26 = 0;

    for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++) {
      int VAR_27 = VAR_10[VAR_21];
      if (VAR_15[VAR_27]) {
        VAR_5[VAR_25] = VAR_14[VAR_27];
        VAR_7[VAR_25] = VAR_15[VAR_27];
        if (VAR_26 < VAR_7[VAR_25]) {
          VAR_26 = VAR_7[VAR_25];
        }
        VAR_25++;
      }
      VAR_14[VAR_27] = 0;
      VAR_15[VAR_27] = 0;
    }


    FUNC_4 (VAR_9, 0, sizeof (int) * (VAR_26 + 1));
    for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
      VAR_9[VAR_7[VAR_21]]++;
    }
    int VAR_28 = 0;
    for (VAR_21 = 1; VAR_21 <= VAR_26; VAR_21++) {
      int VAR_29 = VAR_9[VAR_21];
      VAR_9[VAR_21] = VAR_9[VAR_21 - 1] + VAR_28;
      VAR_28 = VAR_29;
    }

    for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
      VAR_8[VAR_9[VAR_7[VAR_21]]++] = VAR_21;
    }

    int VAR_30 = VAR_25;
    if (VAR_30 > VAR_4) {
      VAR_30 = VAR_4;
    }

    FUNC_7 (&VAR_24, sizeof (int));
    FUNC_7 (&VAR_30, sizeof (int));
    for (VAR_21 = 1; VAR_21 <= VAR_30; VAR_21++) {
      FUNC_7 (&VAR_7[VAR_8[VAR_25 - VAR_21]], sizeof (int));
      FUNC_7 (&VAR_5[VAR_8[VAR_25 - VAR_21]], sizeof (int));
    }

    if (VAR_17) {
      FUNC_8 ("%d %d", VAR_24, VAR_30);

      for (VAR_21 = 1; VAR_21 <= VAR_30; VAR_21++) {
        FUNC_8 (" (%d;%d)", VAR_7[VAR_8[VAR_25 - VAR_21]], VAR_5[VAR_8[VAR_25 - VAR_21]]);
      }
      FUNC_8 ("\n");
    }
  }
}
