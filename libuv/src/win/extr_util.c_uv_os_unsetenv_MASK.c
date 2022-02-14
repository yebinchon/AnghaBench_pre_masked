
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(const char* VAR_1) {
  wchar_t* VAR_2;
  int VAR_3;

  if (VAR_1 == ((void*)0))
    return VAR_0;

  VAR_3 = FUNC_2(VAR_1, -1, &VAR_2);

  if (VAR_3 != 0)
    return VAR_3;

  VAR_3 = FUNC_1(VAR_2, ((void*)0));
  FUNC_3(VAR_2);

  if (VAR_3 == 0)
    return FUNC_4(FUNC_0());

  return 0;
}
