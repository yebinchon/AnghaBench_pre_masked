
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;

void FUNC_4 (int VAR_6) {

  if (VAR_2) {
    FUNC_1 (VAR_1, "writing %ld bytes to file %d\n", (long)(VAR_3[VAR_6] - VAR_4[VAR_6]), VAR_6);
  }
  if (VAR_3[VAR_6] != VAR_4[VAR_6]) {
    int VAR_7 = FUNC_3 (VAR_5[VAR_6], VAR_4[VAR_6], VAR_3[VAR_6] - VAR_4[VAR_6]);
    if (VAR_7 <= 0) {
      FUNC_1 (VAR_1, "error_code %d (%s)\n", VAR_7, FUNC_2 (VAR_0));
      FUNC_0 (2);
    }
    if (VAR_7 != VAR_3[VAR_6] - VAR_4[VAR_6]) {
      FUNC_1 (VAR_1, "written only part...\n");
      FUNC_0 (2);
    }
  }
  VAR_3[VAR_6] = VAR_4[VAR_6];
}
