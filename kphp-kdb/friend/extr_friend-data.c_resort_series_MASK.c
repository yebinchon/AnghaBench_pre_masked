
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1 (void) {
  int VAR_3 = 0, VAR_4;

  while (VAR_0[VAR_3] != -1) {
    VAR_4 = VAR_3;
    while (VAR_0[VAR_3] > 0) { VAR_3++; }
    FUNC_0 (VAR_4, VAR_3-1, 0x60000000);
    VAR_4 = VAR_3;
    while (VAR_0[VAR_3] < -1) { VAR_3++; }
    FUNC_0 (VAR_4, VAR_3-1, 0x60000000);
  }

  while (1) {
    while (VAR_3 > 0 && VAR_0[VAR_3-1] < 0) { VAR_3--; }
    VAR_0[VAR_3] = -1;
    while (VAR_3 > 0 && !(VAR_0[VAR_3-1] & VAR_2)) { VAR_3--; }
    VAR_4 = VAR_3;
    while (VAR_0[VAR_3] != -1) {
      if (VAR_0[VAR_3] > 0) {
 VAR_0[VAR_4++] = VAR_0[VAR_3];
      }
      VAR_3++;
    }
    VAR_0[VAR_4] = -1;
    VAR_3 = VAR_4;
    if (!VAR_3) {
      break;
    }
    if (VAR_0[VAR_3-1] >= 0) {
      VAR_4 = VAR_3 - 1;
      while (VAR_4 > 0 && VAR_0[VAR_4-1] >= 0) { VAR_4--; }
      FUNC_0 (VAR_4, VAR_3-1, 0x60000000);
      break;
    }
  }

  VAR_1 = VAR_3;
  return VAR_3;
}
