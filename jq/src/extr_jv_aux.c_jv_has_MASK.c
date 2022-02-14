
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;

jv FUNC_12(jv VAR_5, jv VAR_6) {
  FUNC_0(FUNC_7(VAR_5));
  FUNC_0(FUNC_7(VAR_6));
  jv VAR_7;
  if (FUNC_5(VAR_5) == VAR_1) {
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
    VAR_7 = FUNC_3();
  } else if (FUNC_5(VAR_5) == VAR_3 &&
             FUNC_5(VAR_6) == VAR_4) {
    jv VAR_8 = FUNC_10(VAR_5, VAR_6);
    VAR_7 = FUNC_2(FUNC_7(VAR_8));
    FUNC_4(VAR_8);
  } else if (FUNC_5(VAR_5) == VAR_0 &&
             FUNC_5(VAR_6) == VAR_2) {
    jv VAR_9 = FUNC_1(VAR_5, (int)FUNC_9(VAR_6));
    VAR_7 = FUNC_2(FUNC_7(VAR_9));
    FUNC_4(VAR_6);
    FUNC_4(VAR_9);
  } else {
    VAR_7 = FUNC_6(FUNC_11("Cannot check whether %s has a %s key",
                                            FUNC_8(FUNC_5(VAR_5)),
                                            FUNC_8(FUNC_5(VAR_6))));
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
  }
  return VAR_7;
}
