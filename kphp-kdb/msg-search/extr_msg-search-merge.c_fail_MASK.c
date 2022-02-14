
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_0 ;
 char** VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

void FUNC_4 (void) {
  int VAR_3;
  FUNC_2 (VAR_2, "fatal error, deleting all output files...\n");
  for (VAR_3 = 2; VAR_3 <= 4; VAR_3++) {
    if (VAR_0[VAR_3] >= 0) { FUNC_0 (VAR_0[2]); }
    if (VAR_1[VAR_3]) {
      FUNC_2 (VAR_2, "deleting %s\n", VAR_1[VAR_3]);
      FUNC_3 (VAR_1[VAR_3]);
    }
  }
  FUNC_1 (2);
}
