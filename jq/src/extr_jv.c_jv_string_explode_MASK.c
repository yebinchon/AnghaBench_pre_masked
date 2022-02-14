
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char const*,char const*,int*) ;

jv FUNC_10(jv VAR_1) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));
  const char* VAR_2 = FUNC_8(VAR_1);
  int VAR_3 = FUNC_7(FUNC_4(VAR_1));
  const char* VAR_4 = VAR_2 + VAR_3;
  jv VAR_5 = FUNC_3(VAR_3);
  int VAR_6;
  while ((VAR_2 = FUNC_9(VAR_2, VAR_4, &VAR_6)))
    VAR_5 = FUNC_2(VAR_5, FUNC_6(VAR_6));
  FUNC_5(VAR_1);
  return VAR_5;
}
