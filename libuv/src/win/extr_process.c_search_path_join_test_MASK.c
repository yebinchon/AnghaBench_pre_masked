
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*,int const*,size_t) ;
 int * FUNC_5 (char*,int) ;

__attribute__((used)) static WCHAR* FUNC_6(const WCHAR* VAR_2,
                                    size_t VAR_3,
                                    const WCHAR* VAR_4,
                                    size_t VAR_5,
                                    const WCHAR* VAR_6,
                                    size_t VAR_7,
                                    const WCHAR* VAR_8,
                                    size_t VAR_9) {
  WCHAR *VAR_10, *VAR_11;
  DWORD VAR_12;
  if (VAR_3 > 2 && VAR_2[0] == L'\\' && VAR_2[1] == L'\\') {

    VAR_9 = 0;
  } else if (VAR_3 >= 1 && (VAR_2[0] == L'/' || VAR_2[0] == L'\\')) {

    VAR_9 = 2;
  } else if (VAR_3 >= 2 && VAR_2[1] == L':' &&
      (VAR_3 < 3 || (VAR_2[2] != L'/' && VAR_2[2] != L'\\'))) {




    if (VAR_9 < 2 || FUNC_1(VAR_8, VAR_2, 2) != 0) {
      VAR_9 = 0;
    } else {
      VAR_2 += 2;
      VAR_3 -= 2;
    }
  } else if (VAR_3 > 2 && VAR_2[1] == L':') {



    VAR_9 = 0;
  }


  VAR_10 = VAR_11 = (WCHAR*)FUNC_3(sizeof(WCHAR) *
      (VAR_9 + 1 + VAR_3 + 1 + VAR_5 + 1 + VAR_7 + 1));


  FUNC_4(VAR_11, VAR_8, VAR_9);
  VAR_11 += VAR_9;


  if (VAR_9 && FUNC_5(L"\\/:", VAR_11[-1]) == ((void*)0)) {
    VAR_11[0] = L'\\';
    VAR_11++;
  }


  FUNC_4(VAR_11, VAR_2, VAR_3);
  VAR_11 += VAR_3;


  if (VAR_3 && FUNC_5(L"\\/:", VAR_11[-1]) == ((void*)0)) {
    VAR_11[0] = L'\\';
    VAR_11++;
  }


  FUNC_4(VAR_11, VAR_4, VAR_5);
  VAR_11 += VAR_5;

  if (VAR_7) {

    if (VAR_5 && VAR_11[-1] != '.') {
      VAR_11[0] = L'.';
      VAR_11++;
    }


    FUNC_4(VAR_11, VAR_6, VAR_7);
    VAR_11 += VAR_7;
  }


  VAR_11[0] = L'\0';

  VAR_12 = FUNC_0(VAR_10);

  if (VAR_12 != VAR_1 &&
      !(VAR_12 & VAR_0)) {
    return VAR_10;
  }

  FUNC_2(VAR_10);
  return ((void*)0);
}
