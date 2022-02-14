
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static jv FUNC_14(jv VAR_1, jv VAR_2, int VAR_3) {
  jv VAR_4 = FUNC_1();
  for (int VAR_5=0; VAR_5<FUNC_4(FUNC_6(VAR_2));) {
    int VAR_6 = VAR_5;
    FUNC_0(FUNC_4(FUNC_3(FUNC_6(VAR_2), VAR_5)) > VAR_3);
    int VAR_7 = FUNC_4(FUNC_3(FUNC_6(VAR_2), VAR_5)) == VAR_3 + 1;
    jv VAR_8 = FUNC_3(FUNC_3(FUNC_6(VAR_2), VAR_5), VAR_3);
    while (VAR_6 < FUNC_4(FUNC_6(VAR_2)) &&
           FUNC_8(FUNC_6(VAR_8), FUNC_3(FUNC_3(FUNC_6(VAR_2), VAR_6), VAR_3)))
      VAR_6++;

    if (VAR_7) {

      VAR_4 = FUNC_2(VAR_4, VAR_8);
    } else {

      jv VAR_9 = FUNC_10(FUNC_6(VAR_1), FUNC_6(VAR_8));
      if (!FUNC_12(VAR_9)) {
        FUNC_9(VAR_8);
        FUNC_9(VAR_1);
        VAR_1 = VAR_9;
        break;
      } else if (FUNC_11(VAR_9) == VAR_0) {
        FUNC_9(VAR_8);
        FUNC_9(VAR_9);
      } else {
        jv VAR_10 = FUNC_14(VAR_9, FUNC_5(FUNC_6(VAR_2), VAR_5, VAR_6), VAR_3+1);
        if (!FUNC_12(VAR_10)) {
          FUNC_9(VAR_8);
          FUNC_9(VAR_1);
          VAR_1 = VAR_10;
          break;
        }
        VAR_1 = FUNC_13(VAR_1, VAR_8, VAR_10);
      }
      if (!FUNC_12(VAR_1)) break;
    }
    VAR_5 = VAR_6;
  }
  FUNC_9(VAR_2);
  if (FUNC_12(VAR_1))
    VAR_1 = FUNC_7(VAR_1, VAR_4);
  else
    FUNC_9(VAR_4);
  return VAR_1;
}
