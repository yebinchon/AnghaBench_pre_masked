
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int,int,int) ;
 int VAR_0 ;

inline int FUNC_7 (data *VAR_1, int VAR_2, int VAR_3, int VAR_4) {


  FUNC_0 (!VAR_0);

  if (FUNC_2 (VAR_1, VAR_2) != 0 || (VAR_3 != 0 && FUNC_2 (VAR_1, VAR_3) != 0)) {
    return 0;
  }

  int VAR_5, VAR_6;


  int VAR_7 = FUNC_3 (VAR_1, VAR_2);
  VAR_5 = FUNC_5 (VAR_1, VAR_7);
  if (VAR_5 < 0) {
    return VAR_5;
  }

  int VAR_8;
  if (VAR_3 != 0) {
    VAR_8 = FUNC_3 (VAR_1, VAR_3);
    VAR_6 = FUNC_5 (VAR_1, VAR_8);
    if (VAR_6 < 0) {
      return VAR_6;
    }
    if (VAR_4) {
      VAR_6--;
      VAR_8 = FUNC_4 (VAR_1, VAR_6);
    }

    if (VAR_5 > VAR_6) {
      VAR_6++;
    }
  } else {
    if (VAR_4) {
      VAR_6 = FUNC_1 (VAR_1) - 1;
      VAR_8 = FUNC_4 (VAR_1, VAR_6);
    } else {
      VAR_6 = 0;
      VAR_8 = -1;
    }
  }

  return FUNC_6 (VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);
}
