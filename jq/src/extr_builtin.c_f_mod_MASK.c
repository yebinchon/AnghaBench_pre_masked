
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;
typedef scalar_t__ intmax_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static jv FUNC_5(jq_state *VAR_1, jv VAR_2, jv VAR_3, jv VAR_4) {
  FUNC_0(VAR_2);
  if (FUNC_1(VAR_3) == VAR_0 && FUNC_1(VAR_4) == VAR_0) {
    if ((intmax_t)FUNC_3(VAR_4) == 0)
      return FUNC_4(VAR_3, VAR_4, "cannot be divided (remainder) because the divisor is zero");
    jv VAR_5 = FUNC_2((intmax_t)FUNC_3(VAR_3) % (intmax_t)FUNC_3(VAR_4));
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    return VAR_5;
  } else {
    return FUNC_4(VAR_3, VAR_4, "cannot be divided (remainder)");
  }
}
