
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;

void FUNC_6 (int VAR_3) {
  if (VAR_2 > 2) {
    FUNC_3 (VAR_1, "test user unload %d\n", VAR_3);
  }

  user *VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4 == ((void*)0)) {
    return;
  }

  if (FUNC_5 (VAR_4)) {
    FUNC_2 (VAR_4);
    FUNC_4 (VAR_4);
    VAR_0--;
  }

  FUNC_0 (!FUNC_5 (VAR_4));
}
