
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static jv FUNC_10(jq_state *VAR_1, jv VAR_2, jv VAR_3) {
  if (FUNC_3(VAR_2) != VAR_0 || FUNC_3(VAR_3) != VAR_0)
    return FUNC_9(VAR_2, VAR_3, FUNC_4("startswith() requires string inputs"));
  int VAR_4 = FUNC_5(FUNC_0(VAR_2));
  int VAR_5 = FUNC_5(FUNC_0(VAR_3));
  jv VAR_6;

  if (VAR_5 <= VAR_4 && FUNC_8(FUNC_6(VAR_2), FUNC_6(VAR_3), VAR_5) == 0)
    VAR_6 = FUNC_7();
  else
    VAR_6 = FUNC_1();
  FUNC_2(VAR_2);
  FUNC_2(VAR_3);
  return VAR_6;
}
