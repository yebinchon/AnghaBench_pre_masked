
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static jv FUNC_6(jq_state *VAR_2, jv VAR_3) {
  if (FUNC_1(VAR_3) == VAR_0) {
    return VAR_3;
  }
  if (FUNC_1(VAR_3) == VAR_1) {
    jv VAR_4 = FUNC_3(FUNC_4(VAR_3));
    if (!FUNC_2(VAR_4) || FUNC_1(VAR_4) == VAR_0) {
      FUNC_0(VAR_3);
      return VAR_4;
    }
  }
  return FUNC_5(VAR_3, "cannot be parsed as a number");
}
