
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 size_t* VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_1() {
  if (VAR_2[VAR_0] == VAR_0) {
    return 0;
  }
  VAR_3 = 0;
  int VAR_4 = VAR_2[VAR_0];
  while (VAR_4 != VAR_0) {
    if (FUNC_0 (VAR_4) == 0) {
      VAR_1++;
      return 1;
    } else {
      VAR_3 ++;
      VAR_4 = VAR_2 [VAR_4];
    }
  }
  return 0;
}
