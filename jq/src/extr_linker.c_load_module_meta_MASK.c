
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int dummy; } ;
typedef int jv ;
typedef int jq_state ;
typedef int block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct locfile*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct locfile*) ;
 struct locfile* FUNC_19 (int *,int ,int ,int ) ;
 int FUNC_20 (int ) ;

jv FUNC_21(jq_state *VAR_1, jv VAR_2) {

  jv VAR_3 = FUNC_3(VAR_1, FUNC_20(VAR_2), FUNC_5(VAR_1), ".jq", FUNC_4(VAR_1), FUNC_12());
  if (!FUNC_10(VAR_3))
    return VAR_3;
  jv VAR_4 = FUNC_12();
  jv VAR_5 = FUNC_11(FUNC_17(VAR_3), 1);
  if (FUNC_10(VAR_5)) {
    block VAR_6;
    struct locfile* VAR_7 = FUNC_19(VAR_1, FUNC_17(VAR_3), FUNC_17(VAR_5), FUNC_16(FUNC_7(VAR_5)));
    int VAR_8 = FUNC_6(VAR_7, &VAR_6);
    if (VAR_8 == 0) {
      VAR_4 = FUNC_1(VAR_6);
      if (FUNC_9(VAR_4) == VAR_0)
        VAR_4 = FUNC_13();
      VAR_4 = FUNC_14(VAR_4, FUNC_15("deps"), FUNC_2(&VAR_6));
    }
    FUNC_18(VAR_7);
    FUNC_0(VAR_6);
  }
  FUNC_8(VAR_3);
  FUNC_8(VAR_5);
  return VAR_4;
}
