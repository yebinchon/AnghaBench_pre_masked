
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

int FUNC_1 (int VAR_0, const int *VAR_1, int VAR_2, const int *VAR_3, int VAR_4) {
  int VAR_5;
  int VAR_6 = FUNC_0 (VAR_0, VAR_2);
  for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_5++) {
    if (VAR_1[VAR_5] < VAR_3[VAR_5]) {
      return -(VAR_5 + 1);
    } else if (VAR_1[VAR_5] > VAR_3[VAR_5]) {
      return (VAR_5 + 1);
    }
  }
  if (VAR_0 < VAR_2) {
    return -(VAR_5 + 1);
  } else if (VAR_0 > VAR_2) {
    return (VAR_5 + 1);
  } else {
    return 0;
  }
}
