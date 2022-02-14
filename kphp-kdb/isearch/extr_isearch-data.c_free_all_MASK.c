
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tdata ;
typedef int rating ;
typedef int q_info ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void FUNC_5 (void) {
  if (VAR_19) {





    FUNC_1 (VAR_18, VAR_11 * sizeof (data));
    FUNC_1 (VAR_15, VAR_7 * sizeof (rating));
    FUNC_1 (VAR_8, VAR_7 * sizeof (int));
    FUNC_1 (VAR_17, VAR_7 * sizeof (int));
    FUNC_1 (VAR_9, VAR_10 * sizeof (char));
    FUNC_1 (VAR_12, (VAR_14 + VAR_0) * sizeof (q_info));
    FUNC_1 (VAR_13, VAR_14 * sizeof (int));

    FUNC_4 (&VAR_4);
    FUNC_4 (&VAR_3);
    FUNC_4 (&VAR_5);

    FUNC_1 (VAR_1, VAR_2);

    FUNC_3 (VAR_16, "Memory left: %ld\n", FUNC_2());
    FUNC_0 (FUNC_2() == 0);
  }
}
