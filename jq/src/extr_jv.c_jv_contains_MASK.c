
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(jv VAR_3, jv VAR_4) {
  int VAR_5 = 1;
  if (FUNC_5(VAR_3) != FUNC_5(VAR_4)) {
    VAR_5 = 0;
  } else if (FUNC_0(VAR_3, VAR_1)) {
    VAR_5 = FUNC_9(VAR_3, VAR_4);
  } else if (FUNC_0(VAR_3, VAR_0)) {
    VAR_5 = FUNC_8(VAR_3, VAR_4);
  } else if (FUNC_0(VAR_3, VAR_2)) {
    int VAR_6 = FUNC_6(FUNC_2(VAR_4));
    if (VAR_6 != 0) {
      VAR_5 = FUNC_1(FUNC_7(VAR_3), FUNC_6(FUNC_2(VAR_3)),
                     FUNC_7(VAR_4), VAR_6) != 0;
    } else {
      VAR_5 = 1;
    }
  } else {
    VAR_5 = FUNC_3(FUNC_2(VAR_3), FUNC_2(VAR_4));
  }
  FUNC_4(VAR_3);
  FUNC_4(VAR_4);
  return VAR_5;
}
