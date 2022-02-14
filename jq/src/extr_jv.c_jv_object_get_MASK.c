
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ) ;

jv FUNC_6(jv VAR_2, jv VAR_3) {
  FUNC_1(FUNC_0(VAR_2, VAR_0));
  FUNC_1(FUNC_0(VAR_3, VAR_1));
  jv* VAR_4 = FUNC_5(VAR_2, VAR_3);
  jv VAR_5;
  if (VAR_4) {
    VAR_5 = FUNC_2(*VAR_4);
  } else {
    VAR_5 = FUNC_4();
  }
  FUNC_3(VAR_2);
  FUNC_3(VAR_3);
  return VAR_5;
}
