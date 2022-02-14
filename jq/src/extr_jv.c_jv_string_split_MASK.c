
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,int,char const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*,int) ;
 char* FUNC_12 (int ) ;
 char* FUNC_13 (char const*,char const*,int*) ;

jv FUNC_14(jv VAR_1, jv VAR_2) {
  FUNC_2(FUNC_0(VAR_1, VAR_0));
  FUNC_2(FUNC_0(VAR_2, VAR_0));
  const char *VAR_3 = FUNC_12(VAR_1);
  const char *VAR_4 = VAR_3 + FUNC_10(FUNC_5(VAR_1));
  const char *VAR_5 = FUNC_12(VAR_2);
  const char *VAR_6, *VAR_7;
  int VAR_8 = FUNC_10(FUNC_5(VAR_2));
  jv VAR_9 = FUNC_3();

  FUNC_2(FUNC_7(VAR_9) == 1);

  if (VAR_8 == 0) {
    int VAR_10;
    while ((VAR_3 = FUNC_13(VAR_3, VAR_4, &VAR_10)))
      VAR_9 = FUNC_4(VAR_9, FUNC_9(FUNC_8(""), VAR_10));
  } else {
    for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6 = VAR_7 + VAR_8) {
      VAR_7 = FUNC_1(VAR_6, VAR_4 - VAR_6, VAR_5, VAR_8);
      if (VAR_7 == ((void*)0))
        VAR_7 = VAR_4;
      VAR_9 = FUNC_4(VAR_9, FUNC_11(VAR_6, VAR_7 - VAR_6));

      if (VAR_7 + VAR_8 == VAR_4 && VAR_8 != 0)
        VAR_9 = FUNC_4(VAR_9, FUNC_8(""));
    }
  }
  FUNC_6(VAR_1);
  FUNC_6(VAR_2);
  return VAR_9;
}
