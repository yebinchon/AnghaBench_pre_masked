
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static jv FUNC_9(jq_state *VAR_5, jv VAR_6) {
  if (FUNC_3(VAR_6) == VAR_0) {
    return FUNC_4(FUNC_1(VAR_6));
  } else if (FUNC_3(VAR_6) == VAR_3) {
    return FUNC_4(FUNC_6(VAR_6));
  } else if (FUNC_3(VAR_6) == VAR_4) {
    return FUNC_4(FUNC_7(VAR_6));
  } else if (FUNC_3(VAR_6) == VAR_2) {
    jv VAR_7 = FUNC_4(FUNC_0(FUNC_5(VAR_6)));
    FUNC_2(VAR_6);
    return VAR_7;
  } else if (FUNC_3(VAR_6) == VAR_1) {
    FUNC_2(VAR_6);
    return FUNC_4(0);
  } else {
    return FUNC_8(VAR_6, "has no length");
  }
}
