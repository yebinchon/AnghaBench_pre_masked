
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;

int FUNC_0 (long long VAR_3) {
  int VAR_4 = -1;
  int VAR_5 = VAR_2;
  while (VAR_5 - VAR_4 > 1) {
    int VAR_6 = (VAR_5 + VAR_4)>>1;
    if (VAR_0[VAR_6] < VAR_3) {
      VAR_4 = VAR_6;
    } else {
      VAR_5 = VAR_6;
    }
  }
  VAR_4++;
  if (VAR_4 == VAR_2 || VAR_0[VAR_4] != VAR_3 || VAR_1[VAR_4]) {
    return VAR_2;
  } else {
    return VAR_4;
  }
}
