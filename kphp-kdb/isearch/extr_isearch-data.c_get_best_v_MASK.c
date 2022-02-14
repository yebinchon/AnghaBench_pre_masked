
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;

int *FUNC_2 (int VAR_7) {
  int *VAR_8 = (int *)VAR_4;
  VAR_8[0] = 0;

  int VAR_9 = 0;
  if (VAR_7 < 0) {
    VAR_7 = -VAR_7;
    VAR_9 = 1;
  }
  if (VAR_7 > VAR_0) {
    VAR_7 = VAR_0;
  }
  FUNC_0 ((VAR_7 + 1) * sizeof (int) < VAR_1);

  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_3 && VAR_7; VAR_10++) {
    if (VAR_9 || !FUNC_1 (VAR_6 + VAR_5[VAR_2[VAR_10]])) {
      VAR_8[++VAR_8[0]] = VAR_2[VAR_10];
      VAR_7--;
    }
  }
  return VAR_8;
}
