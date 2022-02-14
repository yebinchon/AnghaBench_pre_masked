
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;

jv FUNC_9(jv VAR_2) {
  FUNC_1(FUNC_0(VAR_2, VAR_0));
  int VAR_3 = FUNC_3(FUNC_4(VAR_2));
  jv VAR_4 = FUNC_8(VAR_3);
  int VAR_5;

  FUNC_1(VAR_3 >= 0);

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    jv VAR_6 = FUNC_2(FUNC_4(VAR_2), VAR_5);
    FUNC_1(FUNC_0(VAR_6, VAR_1));
    int VAR_7 = FUNC_6(VAR_6);
    FUNC_5(VAR_6);
    if (VAR_7 > 0x10FFFF)
      VAR_7 = 0xFFFD;
    VAR_4 = FUNC_7(VAR_4, VAR_7);
  }

  FUNC_5(VAR_2);
  return VAR_4;
}
