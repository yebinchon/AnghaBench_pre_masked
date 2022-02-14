
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*) ;

jv FUNC_11(jv VAR_1, jv VAR_2, jv VAR_3) {
  if (FUNC_6(VAR_2) != VAR_0) {
    FUNC_4(VAR_3);
    FUNC_4(VAR_1);
    FUNC_4(VAR_2);
    return FUNC_7(FUNC_10("Path must be specified as an array"));
  }
  if (!FUNC_8(VAR_1)){
    FUNC_4(VAR_3);
    FUNC_4(VAR_2);
    return VAR_1;
  }
  if (FUNC_1(FUNC_3(VAR_2)) == 0) {
    FUNC_4(VAR_2);
    FUNC_4(VAR_1);
    return VAR_3;
  }
  jv VAR_4 = FUNC_0(FUNC_3(VAR_2), 0);
  jv VAR_5 = FUNC_2(VAR_2, 1, FUNC_1(FUNC_3(VAR_2)));
  return FUNC_9(VAR_1, VAR_4,
                FUNC_11(FUNC_5(FUNC_3(VAR_1), FUNC_3(VAR_4)), VAR_5, VAR_3));
}
