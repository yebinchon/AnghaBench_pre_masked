
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t DWORD ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 size_t FUNC_2 (size_t,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (int ,int ,int*,int,char*,size_t,int *,int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(char* VAR_5, size_t* VAR_6) {
  wchar_t VAR_7[VAR_1 + 2];
  DWORD VAR_8;
  size_t VAR_9;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || *VAR_6 == 0)
    return VAR_2;

  VAR_9 = FUNC_2(FUNC_0(VAR_7), VAR_7);

  if (VAR_9 == 0) {
    return FUNC_4(FUNC_1());
  } else if (VAR_9 > FUNC_0(VAR_7)) {

    return VAR_3;
  }



  if (VAR_7[VAR_9 - 1] == L'\\' &&
      !(VAR_9 == 3 && VAR_7[1] == L':')) {
    VAR_9--;
    VAR_7[VAR_9] = L'\0';
  }


  VAR_8 = FUNC_3(VAR_0, 0, VAR_7, -1, ((void*)0), 0, ((void*)0), ((void*)0));

  if (VAR_8 == 0) {
    return FUNC_4(FUNC_1());
  } else if (VAR_8 > *VAR_6) {
    *VAR_6 = VAR_8;
    return VAR_4;
  }


  VAR_8 = FUNC_3(VAR_0,
                                0,
                                VAR_7,
                                -1,
                                VAR_5,
                                *VAR_6,
                                ((void*)0),
                                ((void*)0));

  if (VAR_8 == 0)
    return FUNC_4(FUNC_1());

  *VAR_6 = VAR_8 - 1;
  return 0;
}
