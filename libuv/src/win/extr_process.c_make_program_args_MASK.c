
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 size_t FUNC_1 (int ,int ,char*,int,int *,int) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(char** VAR_2, int VAR_3, WCHAR** VAR_4) {
  char** VAR_5;
  WCHAR* VAR_6 = ((void*)0);
  WCHAR* VAR_7 = ((void*)0);
  size_t VAR_8 = 0;
  size_t VAR_9 = 0;
  WCHAR* VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;


  for (VAR_5 = VAR_2; *VAR_5; VAR_5++) {
    DWORD VAR_13;

    VAR_13 = FUNC_1(VAR_0,
                                  0,
                                  *VAR_5,
                                  -1,
                                  ((void*)0),
                                  0);
    if (VAR_13 == 0) {
      return FUNC_0();
    }

    VAR_8 += VAR_13;

    if (VAR_13 > VAR_9)
      VAR_9 = VAR_13;

    VAR_11++;
  }



  VAR_8 = VAR_8 * 2 + VAR_11 * 2;


  VAR_6 = (WCHAR*) FUNC_4(VAR_8 * sizeof(WCHAR));
  if (VAR_6 == ((void*)0)) {
    VAR_12 = VAR_1;
    goto error;
  }


  VAR_7 = (WCHAR*) FUNC_4(VAR_9 * sizeof(WCHAR));
  if (VAR_7 == ((void*)0)) {
    VAR_12 = VAR_1;
    goto error;
  }

  VAR_10 = VAR_6;
  for (VAR_5 = VAR_2; *VAR_5; VAR_5++) {
    DWORD VAR_14;


    VAR_14 = FUNC_1(VAR_0,
                                  0,
                                  *VAR_5,
                                  -1,
                                  VAR_7,
                                  (int) (VAR_6 + VAR_8 - VAR_10));
    if (VAR_14 == 0) {
      VAR_12 = FUNC_0();
      goto error;
    }

    if (VAR_3) {

      FUNC_5(VAR_10, VAR_7);
      VAR_10 += VAR_14 - 1;
    } else {

      VAR_10 = FUNC_2(VAR_7, VAR_10);
    }

    *VAR_10++ = *(VAR_5 + 1) ? L' ' : L'\0';
  }

  FUNC_3(VAR_7);

  *VAR_4 = VAR_6;
  return 0;

error:
  FUNC_3(VAR_6);
  FUNC_3(VAR_7);
  return VAR_12;
}
