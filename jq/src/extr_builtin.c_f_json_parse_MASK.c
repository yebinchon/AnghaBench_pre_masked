
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static jv FUNC_7(jq_state *VAR_1, jv VAR_2) {
  if (FUNC_2(VAR_2) != VAR_0)
    return FUNC_6(VAR_2, "only strings can be parsed");
  jv VAR_3 = FUNC_3(FUNC_5(VAR_2),
                          FUNC_4(FUNC_0(VAR_2)));
  FUNC_1(VAR_2);
  return VAR_3;
}
