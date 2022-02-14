
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int event ;
struct TYPE_3__ {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 () ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 size_t VAR_15 ;
 scalar_t__* VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 scalar_t__* VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* VAR_30 ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;

void FUNC_11 (void) {
  if (VAR_31 > 0 || VAR_26) {
    FUNC_10 (VAR_19);
    FUNC_10 (VAR_20);
    FUNC_10 (VAR_18);

    FUNC_10 (VAR_28);
    FUNC_10 (VAR_29);
    FUNC_10 (VAR_27);

    while (VAR_15 != VAR_17) {
      FUNC_3 (VAR_16[VAR_15]);
      VAR_16[VAR_15++] = 0;
      if (VAR_15 > VAR_3) {
        VAR_15 = 0;
      }
    }

    while (VAR_12) {
      FUNC_4();
    }
    FUNC_0 (VAR_14 == 0);

    if (!VAR_32) {
      FUNC_1 (VAR_13, VAR_2);
      FUNC_1 (VAR_11, sizeof (event *) * VAR_1);
      FUNC_1 (VAR_5, sizeof (int) * VAR_1);
    }

    int VAR_33;
    for (VAR_33 = 0; VAR_33 < VAR_0; VAR_33 += 1 + VAR_24[VAR_33]) {
      if (VAR_24[VAR_33]) {
        FUNC_8 (&VAR_7[VAR_33]);
        FUNC_8 (&VAR_23[VAR_33]);
      } else {
        FUNC_7 (&VAR_6[VAR_33]);
        FUNC_7 (&VAR_22[VAR_33]);
      }
    }

    for (VAR_33 = 0; VAR_33 < VAR_4; VAR_33++) {
      if (VAR_30[VAR_33].name != ((void*)0)) {
        FUNC_9 (&VAR_30[VAR_33]);
      }
    }

    FUNC_8 (&VAR_21);

    if (VAR_9 && VAR_10 != ((void*)0)) {
      FUNC_5 (&VAR_8);
    }

    FUNC_6 (VAR_25, "Memory left: %ld\n", FUNC_2());

    FUNC_0 (FUNC_2() == 0);
  }
}
