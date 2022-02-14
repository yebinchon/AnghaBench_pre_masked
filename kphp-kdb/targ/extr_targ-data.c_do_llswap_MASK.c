
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (int *VAR_1, long VAR_2) {
  long VAR_3;
  if (VAR_0 == -2) {
    return;
  } else if (VAR_0 < 0) {
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
      int VAR_4 = VAR_1[2*VAR_3];
      VAR_1[2*VAR_3] = VAR_1[2*VAR_3+1];
      VAR_1[2*VAR_3+1] = VAR_4;
    }
  } else if (VAR_0 == 2) {
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
      VAR_1[2*VAR_3+1] = -VAR_1[2*VAR_3+1];
    }
  } else {
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
      int VAR_5 = VAR_1[2*VAR_3];
      VAR_1[2*VAR_3] = -VAR_1[2*VAR_3+1];
      VAR_1[2*VAR_3+1] = -VAR_5;
    }
  }
}
