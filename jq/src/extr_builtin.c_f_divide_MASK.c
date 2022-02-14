
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (double) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static jv FUNC_6(jq_state *VAR_2, jv VAR_3, jv VAR_4, jv VAR_5) {
  FUNC_0(VAR_3);
  if (FUNC_1(VAR_4) == VAR_0 && FUNC_1(VAR_5) == VAR_0) {
    if (FUNC_3(VAR_5) == 0.0)
      return FUNC_5(VAR_4, VAR_5, "cannot be divided because the divisor is zero");
    jv VAR_6 = FUNC_2(FUNC_3(VAR_4) / FUNC_3(VAR_5));
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    return VAR_6;
  } else if (FUNC_1(VAR_4) == VAR_1 && FUNC_1(VAR_5) == VAR_1) {
    return FUNC_4(VAR_4, VAR_5);
  } else {
    return FUNC_5(VAR_4, VAR_5, "cannot be divided");
  }
}
