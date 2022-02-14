
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int predicate ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

int FUNC_4 (user *VAR_1, int VAR_2, int VAR_3, int VAR_4, predicate *VAR_5) {
  FUNC_0 (FUNC_3 (VAR_1));

  if (VAR_3 < 0) {
    VAR_3 = 0;
  }

  if (VAR_3 > VAR_0) {
    VAR_3 = VAR_0;
  }

  if (VAR_4 <= 0) {
    return 0;
  }

  if (VAR_4 > VAR_0) {
    VAR_4 = VAR_0;
  }

  data *VAR_6 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_6 == ((void*)0)) {
    return -1;
  }
  return FUNC_1 (VAR_6, VAR_4, VAR_3, VAR_5);
}
