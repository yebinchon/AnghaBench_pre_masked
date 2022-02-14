
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,char const*,int,int*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(const char* VAR_6) {
  WCHAR VAR_7[VAR_2];
  size_t VAR_8;
  WCHAR VAR_9, VAR_10[4];

  if (VAR_6 == ((void*)0)) {
    return VAR_3;
  }

  if (FUNC_2(VAR_0,
                          0,
                          VAR_6,
                          -1,
                          VAR_7,
                          VAR_2) == 0) {
    DWORD VAR_11 = FUNC_1();



    if (VAR_11 == VAR_1) {
      return VAR_5;
    } else {
      return FUNC_5(VAR_11);
    }
  }

  if (!FUNC_3(VAR_7)) {
    return FUNC_5(FUNC_1());
  }




  VAR_8 = FUNC_0(VAR_2, VAR_7);
  if (VAR_8 == 0) {
    return FUNC_5(FUNC_1());
  } else if (VAR_8 > VAR_2) {
    return VAR_4;
  }



  if (VAR_7[VAR_8 - 1] == L'\\' &&
      !(VAR_8 == 3 && VAR_7[1] == L':')) {
    VAR_8--;
    VAR_7[VAR_8] = L'\0';
  }

  if (VAR_8 < 2 || VAR_7[1] != L':') {


    VAR_9 = 0;
  } else if (VAR_7[0] >= L'A' && VAR_7[0] <= L'Z') {
    VAR_9 = VAR_7[0];
  } else if (VAR_7[0] >= L'a' && VAR_7[0] <= L'z') {

    VAR_9 = VAR_7[0] - L'a' + L'A';
  } else {

    VAR_9 = 0;
  }

  if (VAR_9 != 0) {

    VAR_10[0] = L'=';
    VAR_10[1] = VAR_9;
    VAR_10[2] = L':';
    VAR_10[3] = L'\0';

    if (!FUNC_4(VAR_10, VAR_7)) {
      return FUNC_5(FUNC_1());
    }
  }

  return 0;
}
