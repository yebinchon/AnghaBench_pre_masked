
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int WCHAR ;
struct TYPE_2__ {int wide; scalar_t__ len; int wide_eq; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,int,int*,int) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__,int*) ;
 int VAR_2 ;
 int FUNC_6 (int**,size_t,int,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (int) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int*,int ) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int*,int*,int) ;

int FUNC_14(char* VAR_5[], WCHAR** VAR_6) {
  WCHAR* VAR_7;
  WCHAR* VAR_8;
  char** VAR_9;
  size_t VAR_10 = 0;
  int VAR_11;
  size_t VAR_12;
  DWORD VAR_13;
  size_t VAR_14 = 1;
  WCHAR* VAR_15;
  WCHAR** VAR_16;
  WCHAR** VAR_17;
  DWORD* VAR_18 = FUNC_3(VAR_2 * sizeof(DWORD*));


  for (VAR_9 = VAR_5; *VAR_9; VAR_9++) {
    int VAR_19;
    if (FUNC_7(*VAR_9, '=')) {
      VAR_19 = FUNC_2(VAR_0,
                                0,
                                *VAR_9,
                                -1,
                                ((void*)0),
                                0);
      if (VAR_19 <= 0) {
        return FUNC_1();
      }
      VAR_10 += VAR_19;
      VAR_14++;
    }
  }


  VAR_15 = (WCHAR*)FUNC_9(VAR_10 * sizeof(WCHAR));
  if (VAR_15 == ((void*)0) && VAR_10 > 0) {
    return VAR_1;
  }
  VAR_17 = FUNC_3(VAR_14 * sizeof(WCHAR*));

  VAR_8 = VAR_15;
  VAR_16 = VAR_17;
  for (VAR_9 = VAR_5; *VAR_9; VAR_9++) {
    if (FUNC_7(*VAR_9, '=')) {
      VAR_11 = FUNC_2(VAR_0,
                                0,
                                *VAR_9,
                                -1,
                                VAR_8,
                                (int) (VAR_10 - (VAR_8 - VAR_15)));
      if (VAR_11 <= 0) {
        DWORD VAR_20 = FUNC_1();
        FUNC_8(VAR_15);
        return VAR_20;
      }
      *VAR_16++ = VAR_8;
      VAR_8 += VAR_11;
    }
  }
  *VAR_16 = ((void*)0);
  FUNC_4(VAR_10 == 0 || VAR_10 == (size_t) (VAR_8 - VAR_15));


  FUNC_6(VAR_17, VAR_14-1, sizeof(wchar_t*), VAR_3);


  for (VAR_16 = VAR_17, VAR_12 = 0; VAR_12 < VAR_2; ) {
    int VAR_21;
    if (!*VAR_16) {
      VAR_21 = -1;
    } else {
      VAR_21 = FUNC_5(VAR_4[VAR_12].wide_eq,
                       VAR_4[VAR_12].len,
                        *VAR_16);
    }
    if (VAR_21 < 0) {

      VAR_13 = FUNC_0(VAR_4[VAR_12].wide, ((void*)0), 0);
      VAR_18[VAR_12] = VAR_13;
      if (VAR_13 != 0) {
        VAR_10 += VAR_4[VAR_12].len;
        VAR_10 += VAR_13;
      }
      VAR_12++;
    } else {
      VAR_16++;
      if (VAR_21 == 0)
        VAR_12++;
    }
  }


  VAR_7 = FUNC_9((1+VAR_10) * sizeof(WCHAR));
  if (!VAR_7) {
    FUNC_8(VAR_15);
    return VAR_1;
  }

  for (VAR_8 = VAR_7, VAR_16 = VAR_17, VAR_12 = 0;
       *VAR_16 || VAR_12 < VAR_2;
       VAR_8 += VAR_11) {
    int VAR_22;
    if (VAR_12 >= VAR_2) {
      VAR_22 = 1;
    } else if (!*VAR_16) {
      VAR_22 = -1;
    } else {
      VAR_22 = FUNC_5(VAR_4[VAR_12].wide_eq,
                        VAR_4[VAR_12].len,
                        *VAR_16);
    }
    if (VAR_22 < 0) {

      VAR_11 = VAR_18[VAR_12];
      if (VAR_11) {
        FUNC_11(VAR_8, VAR_4[VAR_12].wide_eq);
        VAR_8 += VAR_4[VAR_12].len;
        VAR_13 = FUNC_0(VAR_4[VAR_12].wide,
                                           VAR_8,
                                           (int) (VAR_10 - (VAR_8 - VAR_7)));
        if (VAR_13 != (DWORD) (VAR_11 - 1)) {
          FUNC_10(FUNC_1(), "GetEnvironmentVariableW");
        }
      }
      VAR_12++;
    } else {

      VAR_11 = FUNC_12(*VAR_16) + 1;
      FUNC_13(VAR_8, *VAR_16, VAR_11);
      VAR_16++;
      if (VAR_22 == 0)
        VAR_12++;
    }
  }


  FUNC_4(VAR_10 == (size_t) (VAR_8 - VAR_7));
  *VAR_8 = L'\0';

  FUNC_8(VAR_15);
  *VAR_6 = VAR_7;
  return 0;
}
