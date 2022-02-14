
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int WCHAR ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int,char**,int *) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(HANDLE VAR_7, char** VAR_8) {
  int VAR_9;
  DWORD VAR_10;
  WCHAR* VAR_11 = ((void*)0);
  WCHAR* VAR_12;

  VAR_10 = FUNC_0(VAR_7, ((void*)0), 0, VAR_6);
  if (VAR_10 == 0) {
    return -1;
  }

  VAR_12 = FUNC_4((VAR_10 + 1) * sizeof(WCHAR));
  if (VAR_12 == ((void*)0)) {
    FUNC_1(VAR_1);
    return -1;
  }
  VAR_11 = VAR_12;

  if (FUNC_0(
          VAR_7, VAR_11, VAR_10, VAR_6) == 0) {
    FUNC_3(VAR_12);
    FUNC_1(VAR_0);
    return -1;
  }


  if (FUNC_5(VAR_11,
              VAR_4,
              VAR_5) == 0) {
    VAR_11 += 6;
    *VAR_11 = L'\\';
    VAR_10 -= 6;
  } else if (FUNC_5(VAR_11,
                      VAR_2,
                      VAR_3) == 0) {
    VAR_11 += 4;
    VAR_10 -= 4;
  } else {
    FUNC_3(VAR_12);
    FUNC_1(VAR_0);
    return -1;
  }

  VAR_9 = FUNC_2(VAR_11, VAR_10, VAR_8, ((void*)0));
  FUNC_3(VAR_12);
  return VAR_9;
}
