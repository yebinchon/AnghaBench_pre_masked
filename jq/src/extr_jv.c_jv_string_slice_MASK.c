
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*,int) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int,int*,int*) ;
 char* FUNC_11 (char const*,char const*,int*) ;

jv FUNC_12(jv VAR_1, int VAR_2, int VAR_3) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));
  const char *VAR_4 = FUNC_9(VAR_1);
  int VAR_5 = FUNC_7(FUNC_2(VAR_1));
  int VAR_6;
  const char *VAR_7, *VAR_8;
  int VAR_9;
  jv VAR_10;

  FUNC_10(VAR_5, &VAR_2, &VAR_3);
  FUNC_1(0 <= VAR_2 && VAR_2 <= VAR_3 && VAR_3 <= VAR_5);


  for (VAR_7 = VAR_4, VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    VAR_7 = FUNC_11(VAR_7, VAR_4 + VAR_5, &VAR_9);
    if (VAR_7 == ((void*)0)) {
      FUNC_3(VAR_1);
      return FUNC_6(16);
    }
    if (VAR_9 == -1) {
      FUNC_3(VAR_1);
      return FUNC_4(FUNC_5("Invalid UTF-8 string"));
    }
  }

  for (VAR_8 = VAR_7; VAR_8 != ((void*)0) && VAR_6 < VAR_3; VAR_6++) {
    VAR_8 = FUNC_11(VAR_8, VAR_4 + VAR_5, &VAR_9);
    if (VAR_8 == ((void*)0)) {
      VAR_8 = VAR_4 + VAR_5;
      break;
    }
    if (VAR_9 == -1) {
      FUNC_3(VAR_1);
      return FUNC_4(FUNC_5("Invalid UTF-8 string"));
    }
  }
  VAR_10 = FUNC_8(VAR_7, VAR_8 - VAR_7);
  FUNC_3(VAR_1);
  return VAR_10;
}
