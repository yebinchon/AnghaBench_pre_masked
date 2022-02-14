
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ jv_kind ;
typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,size_t) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,char*) ;

__attribute__((used)) static jv FUNC_11(jq_state *VAR_3, jv VAR_4, jv VAR_5, jv VAR_6) {
  jv_kind VAR_7 = FUNC_2(VAR_5);
  jv_kind VAR_8 = FUNC_2(VAR_6);
  FUNC_1(VAR_4);
  if (VAR_7 == VAR_0 && VAR_8 == VAR_0) {
    jv VAR_9 = FUNC_4(FUNC_5(VAR_5) * FUNC_5(VAR_6));
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    return VAR_9;
  } else if ((VAR_7 == VAR_2 && VAR_8 == VAR_0) ||
             (VAR_7 == VAR_0 && VAR_8 == VAR_2)) {
    jv VAR_10 = VAR_5;
    jv VAR_11 = VAR_6;
    if (VAR_7 == VAR_0) {
      VAR_10 = VAR_6;
      VAR_11 = VAR_5;
    }
    int VAR_12;
    size_t VAR_13 = FUNC_8(FUNC_0(VAR_10));
    jv VAR_14 = VAR_10;

    for (VAR_12 = FUNC_5(VAR_11) - 1; VAR_12 > 0; VAR_12--)
      VAR_14 = FUNC_7(VAR_14, FUNC_9(VAR_10), VAR_13);

    FUNC_1(VAR_11);
    if (VAR_12 < 0) {
      FUNC_1(VAR_10);
      return FUNC_3();
    }
    return VAR_14;
  } else if (VAR_7 == VAR_1 && VAR_8 == VAR_1) {
    return FUNC_6(VAR_5, VAR_6);
  } else {
    return FUNC_10(VAR_5, VAR_6, "cannot be multiplied");
  }
}
