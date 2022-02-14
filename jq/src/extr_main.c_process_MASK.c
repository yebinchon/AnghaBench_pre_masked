
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 char* FUNC_20 (int ) ;
 int VAR_16 ;
 int FUNC_21 (char*,int,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_22(jq_state *VAR_19, jv VAR_20, int VAR_21, int VAR_22) {
  int VAR_23 = VAR_4;
  FUNC_7(VAR_19, VAR_20, VAR_21);
  jv VAR_24;
  while (FUNC_17(VAR_24 = FUNC_6(VAR_19))) {
    if ((VAR_16 & VAR_13) && FUNC_14(VAR_24) == VAR_9) {
      if (VAR_16 & VAR_0) {
        FUNC_12(FUNC_9(VAR_24), VAR_18, VAR_10);
      } else {
        FUNC_2(FUNC_20(VAR_24), 1, FUNC_19(FUNC_9(VAR_24)), VAR_18);
      }
      VAR_23 = VAR_3;
      FUNC_13(VAR_24);
    } else {
      if (FUNC_14(VAR_24) == VAR_6 || FUNC_14(VAR_24) == VAR_7)
        VAR_23 = VAR_5;
      else
        VAR_23 = VAR_3;
      if (VAR_16 & VAR_14)
        FUNC_21("\036", 1, VAR_18, VAR_22 & VAR_11);
      FUNC_10(VAR_24, VAR_22);
    }
    if (!(VAR_16 & VAR_12))
      FUNC_21("\n", 1, VAR_18, VAR_22 & VAR_11);
    if (VAR_16 & VAR_15)
      FUNC_0(VAR_18);
  }
  if (FUNC_5(VAR_19)) {

    VAR_16 |= VAR_1;
    jv VAR_25 = FUNC_4(VAR_19);
    if (!FUNC_17(VAR_25))
      VAR_23 = VAR_3;
    else if (FUNC_14(VAR_25) == VAR_8)
      VAR_23 = FUNC_18(VAR_25);
    else
      VAR_23 = VAR_2;
    FUNC_13(VAR_25);
    jv VAR_26 = FUNC_3(VAR_19);
    if (FUNC_14(VAR_26) == VAR_9) {
      FUNC_1(VAR_17, "jq: error: %s", FUNC_20(VAR_26));
    } else if (FUNC_14(VAR_26) == VAR_7) {

    } else if (FUNC_17(VAR_26)) {
      VAR_26 = FUNC_11(FUNC_9(VAR_26), 0);
      FUNC_1(VAR_17, "jq: error: %s\n", FUNC_20(VAR_26));
    }
    FUNC_0(VAR_17);
    FUNC_13(VAR_26);
  } else if (FUNC_16(FUNC_9(VAR_24))) {

    jv VAR_27 = FUNC_15(FUNC_9(VAR_24));
    jv VAR_28 = FUNC_8(VAR_19);
    if (FUNC_14(VAR_27) == VAR_9) {
      FUNC_1(VAR_17, "jq: error (at %s): %s\n",
              FUNC_20(VAR_28), FUNC_20(VAR_27));
    } else {
      VAR_27 = FUNC_11(VAR_27, 0);
      FUNC_1(VAR_17, "jq: error (at %s) (not a string): %s\n",
              FUNC_20(VAR_28), FUNC_20(VAR_27));
    }
    VAR_23 = VAR_2;
    FUNC_13(VAR_28);
    FUNC_13(VAR_27);
  }
  FUNC_13(VAR_24);
  return VAR_23;
}
