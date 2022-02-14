
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,int) ;

jv FUNC_7(jv VAR_1, int VAR_2, jv VAR_3) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));

  if (VAR_2 < 0)
    VAR_2 = FUNC_5(VAR_1) + VAR_2;
  if (VAR_2 < 0) {
    FUNC_2(VAR_1);
    FUNC_2(VAR_3);
    return FUNC_3(FUNC_4("Out of bounds negative array index"));
  }

  jv* VAR_4 = FUNC_6(&VAR_1, VAR_2);
  FUNC_2(*VAR_4);
  *VAR_4 = VAR_3;
  return VAR_1;
}
