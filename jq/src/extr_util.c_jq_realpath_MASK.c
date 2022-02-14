
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (int ,char*) ;

jv FUNC_8(jv VAR_2) {
  int VAR_3;
  char *VAR_4 = ((void*)0);



  VAR_3 = VAR_0;

  if (VAR_3 > 0) {
     VAR_4 = FUNC_3(VAR_3);
  }



  char *VAR_5 = FUNC_7(FUNC_5(VAR_2), VAR_4);

  if (VAR_5 == ((void*)0)) {
    FUNC_1(VAR_4);
    return VAR_2;
  }
  FUNC_2(VAR_2);
  VAR_2 = FUNC_4(VAR_5);
  FUNC_1(VAR_5);
  return VAR_2;
}
