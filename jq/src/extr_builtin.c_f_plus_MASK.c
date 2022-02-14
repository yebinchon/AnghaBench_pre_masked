
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,char*) ;

__attribute__((used)) static jv FUNC_8(jq_state *VAR_5, jv VAR_6, jv VAR_7, jv VAR_8) {
  FUNC_1(VAR_6);
  if (FUNC_2(VAR_7) == VAR_1) {
    FUNC_1(VAR_7);
    return VAR_8;
  } else if (FUNC_2(VAR_8) == VAR_1) {
    FUNC_1(VAR_8);
    return VAR_7;
  } else if (FUNC_2(VAR_7) == VAR_2 && FUNC_2(VAR_8) == VAR_2) {
    jv VAR_9 = FUNC_3(FUNC_4(VAR_7) +
                     FUNC_4(VAR_8));
    FUNC_1(VAR_7);
    FUNC_1(VAR_8);
    return VAR_9;
  } else if (FUNC_2(VAR_7) == VAR_4 && FUNC_2(VAR_8) == VAR_4) {
    return FUNC_6(VAR_7, VAR_8);
  } else if (FUNC_2(VAR_7) == VAR_0 && FUNC_2(VAR_8) == VAR_0) {
    return FUNC_0(VAR_7, VAR_8);
  } else if (FUNC_2(VAR_7) == VAR_3 && FUNC_2(VAR_8) == VAR_3) {
    return FUNC_5(VAR_7, VAR_8);
  } else {
    return FUNC_7(VAR_7, VAR_8, "cannot be added");
  }
}
