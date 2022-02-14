
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,char*) ;

__attribute__((used)) static jv FUNC_8(jv VAR_1, jv VAR_2, int VAR_3) {
  if (FUNC_5(VAR_1) != VAR_0)
    return FUNC_7(VAR_1, VAR_2, "cannot be iterated over");
  if (FUNC_5(VAR_2) != VAR_0)
    return FUNC_7(VAR_1, VAR_2, "cannot be iterated over");
  if (FUNC_1(FUNC_3(VAR_1)) != FUNC_1(FUNC_3(VAR_2)))
    return FUNC_7(VAR_1, VAR_2, "have wrong length");

  if (FUNC_1(FUNC_3(VAR_1)) == 0) {
    FUNC_4(VAR_1);
    FUNC_4(VAR_2);
    return FUNC_6();
  }
  jv VAR_4 = FUNC_0(FUNC_3(VAR_1), 0);
  jv VAR_5 = FUNC_0(FUNC_3(VAR_2), 0);
  for (int VAR_6=1; VAR_6<FUNC_1(FUNC_3(VAR_1)); VAR_6++) {
    jv VAR_7 = FUNC_0(FUNC_3(VAR_2), VAR_6);
    int VAR_8 = FUNC_2(FUNC_3(VAR_7), FUNC_3(VAR_5));
    if ((VAR_8 < 0) == (VAR_3 == 1)) {
      FUNC_4(VAR_5);
      VAR_5 = VAR_7;
      FUNC_4(VAR_4);
      VAR_4 = FUNC_0(FUNC_3(VAR_1), VAR_6);
    } else {
      FUNC_4(VAR_7);
    }
  }
  FUNC_4(VAR_1);
  FUNC_4(VAR_2);
  FUNC_4(VAR_5);
  return VAR_4;
}
