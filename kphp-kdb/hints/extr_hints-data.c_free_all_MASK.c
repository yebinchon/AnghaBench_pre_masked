
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rating ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int VAR_9 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,char*,long,...) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 scalar_t__* VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_11 () ;
 int VAR_30 ;
 int FUNC_12 () ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;

void FUNC_13 (void) {
  if (VAR_32) {
    while (FUNC_12() != -1) {
    }

    while (VAR_15 != VAR_17) {
      FUNC_3 (VAR_16[VAR_15]);
      VAR_16[VAR_15++] = 0;
      if (VAR_15 > VAR_1) {
        VAR_15 = 0;
      }
    }

    FUNC_4 (VAR_29, "Memory left : %ld\n", (long)(FUNC_7() - FUNC_11() - FUNC_8() - FUNC_9() -
             VAR_8 - FUNC_1()));
    FUNC_4 (VAR_29, "memory used = %ld, trp_memory = %ld, htbl_memory = %ld, changes_memory = %ld, mtf = %d, vct = %ld\n",
             FUNC_7(), (long)FUNC_11(), (long)FUNC_8(), (long)FUNC_6(), VAR_5, (long)FUNC_9());

    FUNC_0 ((long)(FUNC_7() - FUNC_11() - FUNC_8() - FUNC_9() -
                   VAR_8 - FUNC_1()) == 0);

    FUNC_2 (VAR_6, (VAR_0 + 1) * sizeof (int));

    if (VAR_19) {
      FUNC_2 (VAR_7, VAR_4);
      FUNC_2 (VAR_22, VAR_4);
      FUNC_2 (VAR_30, (VAR_0 + 1) * sizeof (long long));
      FUNC_2 (VAR_25, (VAR_0 + 1) * sizeof (rating) * VAR_3);
      FUNC_2 (VAR_26, (VAR_0 + 1) * sizeof (rating));
      FUNC_2 (VAR_12, VAR_4);







    } else {
      int VAR_34;
      for (VAR_34 = 0; VAR_34 <= VAR_2; VAR_34++) {
        FUNC_2 (VAR_10[VAR_34], (VAR_0 + 1) * sizeof (rating));
      }
      FUNC_2 (VAR_9, (VAR_0 + 1) * sizeof (rating));
      FUNC_2 (VAR_33, VAR_0 * sizeof (rating));

      FUNC_2 (VAR_14, (VAR_0 + 1) * sizeof (int));
      FUNC_2 (VAR_28, VAR_0 * sizeof (long long));
      FUNC_2 (VAR_27, VAR_0 * sizeof (int));




      FUNC_2 (VAR_11, (VAR_0 + 1) * sizeof (int));

    }

    FUNC_10 (&VAR_31);
    FUNC_5 (&VAR_13);
  }
}
