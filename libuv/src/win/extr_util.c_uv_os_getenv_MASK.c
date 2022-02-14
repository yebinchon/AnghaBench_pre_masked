
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (int ,int ,int *,int,char*,size_t,int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

int FUNC_8(const char* VAR_5, char* VAR_6, size_t* VAR_7) {
  wchar_t VAR_8[VAR_2];
  wchar_t* VAR_9;
  DWORD VAR_10;
  size_t VAR_11;
  int VAR_12;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || *VAR_7 == 0)
    return VAR_3;

  VAR_12 = FUNC_5(VAR_5, -1, &VAR_9);

  if (VAR_12 != 0)
    return VAR_12;

  FUNC_2(VAR_1);
  VAR_11 = FUNC_0(VAR_9, VAR_8, VAR_2);
  FUNC_6(VAR_9);
  FUNC_4(VAR_11 < VAR_2);

  if (VAR_11 == 0) {
    VAR_12 = FUNC_1();
    if (VAR_12 != VAR_1)
      return FUNC_7(VAR_12);
  }


  VAR_10 = FUNC_3(VAR_0, 0, VAR_8, -1, ((void*)0), 0, ((void*)0), ((void*)0));

  if (VAR_10 == 0) {
    return FUNC_7(FUNC_1());
  } else if (VAR_10 > *VAR_7) {
    *VAR_7 = VAR_10;
    return VAR_4;
  }


  VAR_10 = FUNC_3(VAR_0,
                                0,
                                VAR_8,
                                -1,
                                VAR_6,
                                *VAR_7,
                                ((void*)0),
                                ((void*)0));

  if (VAR_10 == 0)
    return FUNC_7(FUNC_1());

  *VAR_7 = VAR_10 - 1;
  return 0;
}
