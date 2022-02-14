
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;

int FUNC_3 (int VAR_1, int VAR_2[], int VAR_3) {
  user_t *VAR_4 = FUNC_2 (VAR_1);
  if (!VAR_4) {
    return 0;
  }
  if ((unsigned) VAR_3 > VAR_0) {
    return -1;
  }
  int VAR_5;
  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
    if (VAR_2[VAR_5] <= VAR_2[VAR_5-1]) {
      return -1;
    }
  }

  if (!VAR_3) {
    return FUNC_1 (VAR_1);
  }
  FUNC_1 (VAR_1);

  return FUNC_0 (VAR_1, VAR_2, VAR_3);
}
