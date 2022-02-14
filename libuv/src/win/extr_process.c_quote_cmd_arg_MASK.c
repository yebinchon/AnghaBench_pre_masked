
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int*,int const*,size_t) ;
 int * FUNC_2 (int const*,char*) ;
 int FUNC_3 (int*) ;

WCHAR* FUNC_4(const WCHAR *VAR_0, WCHAR *VAR_1) {
  size_t VAR_2 = FUNC_0(VAR_0);
  size_t VAR_3;
  int VAR_4;
  WCHAR* VAR_5;

  if (VAR_2 == 0) {

    *(VAR_1++) = L'"';
    *(VAR_1++) = L'"';
    return VAR_1;
  }

  if (((void*)0) == FUNC_2(VAR_0, L" \t\"")) {

    FUNC_1(VAR_1, VAR_0, VAR_2);
    VAR_1 += VAR_2;
    return VAR_1;
  }

  if (((void*)0) == FUNC_2(VAR_0, L"\"\\")) {




    *(VAR_1++) = L'"';
    FUNC_1(VAR_1, VAR_0, VAR_2);
    VAR_1 += VAR_2;
    *(VAR_1++) = L'"';
    return VAR_1;
  }
  *(VAR_1++) = L'"';
  VAR_5 = VAR_1;
  VAR_4 = 1;

  for (VAR_3 = VAR_2; VAR_3 > 0; --VAR_3) {
    *(VAR_1++) = VAR_0[VAR_3 - 1];

    if (VAR_4 && VAR_0[VAR_3 - 1] == L'\\') {
      *(VAR_1++) = L'\\';
    } else if(VAR_0[VAR_3 - 1] == L'"') {
      VAR_4 = 1;
      *(VAR_1++) = L'\\';
    } else {
      VAR_4 = 0;
    }
  }
  VAR_1[0] = L'\0';
  FUNC_3(VAR_5);
  *(VAR_1++) = L'"';
  return VAR_1;
}
