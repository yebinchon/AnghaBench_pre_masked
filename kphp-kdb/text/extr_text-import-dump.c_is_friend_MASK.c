
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0 (int VAR_2, int VAR_3) {
  int VAR_4 = -1, VAR_5 = ((VAR_1 - VAR_0) >> 3), VAR_6;
  int *VAR_7 = (int *) VAR_0;
  while (VAR_5 - VAR_4 > 1) {
    VAR_6 = ((VAR_4 + VAR_5) >> 1);
    if (VAR_7[2*VAR_6] < VAR_2 || (VAR_7[2*VAR_6] == VAR_2 && VAR_7[2*VAR_6+1] <= VAR_3)) {
      VAR_4 = VAR_6;
    } else {
      VAR_5 = VAR_6;
    }
  }
  return (VAR_4 >= 0 && VAR_7[2*VAR_4] == VAR_2 && VAR_7[2*VAR_4+1] == VAR_3);
}
