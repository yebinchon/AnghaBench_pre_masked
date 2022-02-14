
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;
 int** VAR_0 ;

int FUNC_1 (char *VAR_1) {
  char *VAR_2 = VAR_1;
  int VAR_3;
  VAR_1 += FUNC_0 (VAR_1, "GLOBAL_STAT:\n");
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
    if (VAR_0[VAR_3][0] || VAR_0[VAR_3][1] || VAR_0[VAR_3][2]) {
      VAR_1 += FUNC_0 (VAR_1, "type (%d) : del %d, add %d, change %d\n", VAR_3, VAR_0[VAR_3][0], VAR_0[VAR_3][1], VAR_0[VAR_3][2]);
    }
  }
  return VAR_1 - VAR_2;
}
