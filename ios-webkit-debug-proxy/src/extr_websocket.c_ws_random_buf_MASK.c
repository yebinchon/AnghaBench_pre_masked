
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(char *VAR_0, size_t VAR_1) {



  static bool VAR_2 = 0;
  if (!VAR_2) {
    VAR_2 = 1;

    FUNC_2(FUNC_3(((void*)0)));
  }
  size_t VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    VAR_0[VAR_3] = (char)FUNC_1();
  }

}
