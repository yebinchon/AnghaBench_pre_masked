
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 () ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int*,int,char*,size_t,int *,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(char* VAR_6, size_t* VAR_7) {
  DWORD VAR_8;
  WCHAR VAR_9[VAR_2];
  int VAR_10;

  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
    return VAR_3;
  }

  VAR_8 = FUNC_0(VAR_2, VAR_9);
  if (VAR_8 == 0) {
    return FUNC_3(FUNC_1());
  } else if (VAR_8 > VAR_2) {


    return VAR_4;
  }


  VAR_9[VAR_8] = L'\0';



  if (VAR_9[VAR_8 - 1] == L'\\' &&
      !(VAR_8 == 3 && VAR_9[1] == L':')) {
    VAR_8--;
    VAR_9[VAR_8] = L'\0';
  }


  VAR_10 = FUNC_2(VAR_0,
                          0,
                          VAR_9,
                          -1,
                          ((void*)0),
                          0,
                          ((void*)0),
                          ((void*)0));
  if (VAR_10 == 0) {
    return FUNC_3(FUNC_1());
  } else if (VAR_10 > (int) *VAR_7) {
    *VAR_7 = VAR_10;
    return VAR_5;
  }


  VAR_10 = FUNC_2(VAR_0,
                          0,
                          VAR_9,
                          -1,
                          VAR_6,
                          *VAR_7 > VAR_1 ? VAR_1 : (int) *VAR_7,
                          ((void*)0),
                          ((void*)0));
  if (VAR_10 == 0) {
    return FUNC_3(FUNC_1());
  }

  *VAR_7 = VAR_10 - 1;
  return 0;
}
