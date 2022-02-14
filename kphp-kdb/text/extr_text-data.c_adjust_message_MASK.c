
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int,int) ;
 scalar_t__ VAR_0 ;

int FUNC_5 (int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  if (VAR_3 != -1 || VAR_4 != -1) {
    VAR_3 &= 0xffff;
    VAR_4 &= 0xffff;
    FUNC_1 (!(VAR_3 & VAR_4));
  }

  if (FUNC_2 (VAR_1) < 0 || VAR_2 <= 0) {
    return -1;
  }

  int VAR_6 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);

  if (VAR_5 || (VAR_6 & 1) || (VAR_6 >= 0 && VAR_0)) {
    user_t *VAR_7 = FUNC_3 (VAR_1);
    if (VAR_3 < 0) {
      FUNC_4 (VAR_7, VAR_2, 0, 0);
    } else if ((VAR_3 | VAR_4) == 0xffff) {
      FUNC_4 (VAR_7, VAR_2, VAR_4, 1);
    } else {
      if (VAR_3) {
 FUNC_1 (!VAR_4);
 FUNC_4 (VAR_7, VAR_2, VAR_3, 3);
      } else {
 FUNC_1 (!VAR_3);
 FUNC_4 (VAR_7, VAR_2, VAR_4, 2);
      }
    }
  }

  return VAR_6;
}
