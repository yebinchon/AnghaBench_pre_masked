
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;

int FUNC_5 (user *VAR_1, int VAR_2, int VAR_3, int VAR_4) {


  if (VAR_0) {
    return 1;
  }

  FUNC_0 (FUNC_4 (VAR_1));

  int VAR_5 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_5 == 0) {
    return 0;
  }

  if (VAR_3 != 0 && VAR_5 != FUNC_2 (VAR_1, VAR_3)) {
    return 0;
  }

  data *VAR_6 = FUNC_3 (VAR_1, VAR_5);
  if (VAR_6 == ((void*)0)) {
    return 0;
  }

  return FUNC_1 (VAR_6, VAR_2, VAR_3, VAR_4) > -1;
}
