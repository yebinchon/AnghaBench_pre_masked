
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int data ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int) ;
 scalar_t__ VAR_0 ;

int FUNC_7 (user *VAR_1, int VAR_2) {
  if (VAR_0) {
    return 1;
  }

  int VAR_3 = FUNC_5 (VAR_1, VAR_2);
  if (VAR_3 == 0) {
    return 0;
  }
  data *VAR_4 = FUNC_6 (VAR_1, VAR_3);
  if (VAR_4 == ((void*)0)) {
    return 0;
  }
  if (FUNC_3 (VAR_4, VAR_2) == 0) {
    return 0;
  }
  if (FUNC_2 (VAR_4) >= FUNC_0 (VAR_3)) {
    return 0;
  }
  FUNC_1 (FUNC_4 (VAR_4, VAR_2) > -1);
  return 1;
}
