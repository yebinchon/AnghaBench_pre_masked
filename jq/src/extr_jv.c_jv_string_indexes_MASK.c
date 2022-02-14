
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,int,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;

jv FUNC_10(jv VAR_1, jv VAR_2) {
  FUNC_2(FUNC_0(VAR_1, VAR_0));
  FUNC_2(FUNC_0(VAR_2, VAR_0));
  const char *VAR_3 = FUNC_9(VAR_1);
  const char *VAR_4 = FUNC_9(VAR_2);
  const char *VAR_5;
  int VAR_6 = FUNC_8(FUNC_5(VAR_1));
  int VAR_7 = FUNC_8(FUNC_5(VAR_2));
  jv VAR_8 = FUNC_3();

  if (VAR_7 != 0) {
    VAR_5 = VAR_3;
    while ((VAR_5 = FUNC_1(VAR_5, (VAR_3 + VAR_6) - VAR_5, VAR_4, VAR_7)) != ((void*)0)) {
      VAR_8 = FUNC_4(VAR_8, FUNC_7(VAR_5 - VAR_3));
      VAR_5 += VAR_7;
    }
  }
  FUNC_6(VAR_1);
  FUNC_6(VAR_2);
  return VAR_8;
}
