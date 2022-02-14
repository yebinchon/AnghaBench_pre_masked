
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int,int **,int,int) ;

int FUNC_5 (int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  static listree_t *VAR_5;
  int VAR_6;
  static int VAR_7 = 0;

  VAR_0 = 0;

  int VAR_8 = FUNC_4 (VAR_1, VAR_2, VAR_3, &VAR_5, 1, 1);
  if (VAR_8 != -4) {
    return VAR_8;
  }

  VAR_6 = FUNC_2 (VAR_5);
  FUNC_0 (VAR_6 >= 0);
  if (!VAR_6) {
    return 0;
  }

  VAR_8 = FUNC_1 (VAR_5, VAR_4, 1);

  if (VAR_8 == -2) {
    if (!FUNC_3 (VAR_1)) {
      return -2;
    }
    FUNC_0 (++VAR_7 == 1);
    VAR_8 = FUNC_5 (VAR_1, VAR_2, VAR_3, VAR_4);
    --VAR_7;
    return VAR_8;
  }

  VAR_8++;

  FUNC_0 (VAR_8 >= 0 && VAR_8 <= VAR_6);
  return VAR_8;
}
