
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,char const*) ;
 int FUNC_9 (int ) ;
 char const* FUNC_10 (int ) ;

jv FUNC_11(jv VAR_1) {
  FUNC_0(FUNC_4(VAR_1) == VAR_0);
  const char *VAR_2 = FUNC_10(VAR_1);
  jv VAR_3 = VAR_1;
  if (FUNC_9(FUNC_2(VAR_1)) > 1 && VAR_2[0] == '~' && VAR_2[1] == '/') {
    jv VAR_4 = FUNC_1();
    if (FUNC_7(VAR_4)) {
      VAR_3 = FUNC_8("%s/%s",FUNC_10(VAR_4),VAR_2+2);
      FUNC_3(VAR_4);
    } else {
      jv VAR_5 = FUNC_5(VAR_4);
      VAR_3 = FUNC_6(FUNC_8("Could not expand %s. (%s)", VAR_2, FUNC_10(VAR_5)));
      FUNC_3(VAR_5);
    }
    FUNC_3(VAR_1);
  }
  return VAR_3;
}
