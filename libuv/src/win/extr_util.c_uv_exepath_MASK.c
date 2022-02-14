
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int*,int,char*,int,int *,int *) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(char* VAR_3, size_t* VAR_4) {
  int VAR_5, VAR_6, VAR_7;
  WCHAR* VAR_8;
  int VAR_9;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || *VAR_4 == 0) {
    return VAR_1;
  }

  if (*VAR_4 > 32768) {

    VAR_6 = 32768;
  } else {
    VAR_6 = (int) *VAR_4;
  }

  VAR_8 = (WCHAR*) FUNC_4(sizeof(WCHAR) * VAR_6);
  if (!VAR_8) {
    return VAR_2;
  }


  VAR_7 = FUNC_1(((void*)0), VAR_8, VAR_6);
  if (VAR_7 <= 0) {
    VAR_9 = FUNC_0();
    goto error;
  }


  VAR_8[VAR_7] = L'\0';


  VAR_5 = FUNC_2(VAR_0,
                                 0,
                                 VAR_8,
                                 -1,
                                 VAR_3,
                                 (int) *VAR_4,
                                 ((void*)0),
                                 ((void*)0));
  if (VAR_5 == 0) {
    VAR_9 = FUNC_0();
    goto error;
  }

  FUNC_3(VAR_8);



  *VAR_4 = VAR_5 - 1;
  return 0;

 error:
  FUNC_3(VAR_8);
  return FUNC_5(VAR_9);
}
