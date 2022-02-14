
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int olist_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *) ;

int FUNC_2 (int *VAR_3, int VAR_4, int VAR_5) {
  if (VAR_4 > VAR_5 || VAR_4 > VAR_2) {
    return 0;
  }
  int VAR_6;
  int *VAR_7 = VAR_3;
  int VAR_8 = FUNC_0 (VAR_4);
  int VAR_9 = FUNC_0 (VAR_5);
  if (VAR_8 <= VAR_9) {
    for (VAR_6 = VAR_8; VAR_6 <= VAR_9; VAR_6++) {
      VAR_3 += FUNC_1 (VAR_3, (olist_t *)&VAR_0[VAR_6]);
    }
  } else {
    for (VAR_6 = VAR_8; VAR_6 < VAR_1; VAR_6++) {
      VAR_3 += FUNC_1 (VAR_3, (olist_t *)&VAR_0[VAR_6]);
    }
    for (VAR_6 = 0; VAR_6 <= VAR_9; VAR_6++) {
      VAR_3 += FUNC_1 (VAR_3, (olist_t *)&VAR_0[VAR_6]);
    }
  }
  return VAR_3 - VAR_7;
}
