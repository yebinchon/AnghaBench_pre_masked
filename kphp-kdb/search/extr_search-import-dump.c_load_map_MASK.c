
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_5 (int VAR_8) {
  if (!VAR_3) {
    if (!VAR_8) {
      FUNC_2 (VAR_6, "warning: no map file specified\n");
    } else {
      FUNC_2 (VAR_6, "fatal: no map file specified\n");
      FUNC_1 (2);
    }
    return;
  }
  VAR_4 = FUNC_3 (VAR_3, VAR_2);
  if (VAR_4 < 0) {
    FUNC_2 (VAR_6, "cannot open map file %s: %m", VAR_3);
    if (VAR_8) {
      FUNC_1 (2);
    }
    return;
  }
  VAR_5 = FUNC_4 (VAR_4, VAR_1, VAR_0);
  FUNC_0 (VAR_4);
  if (VAR_5 < 0) {
    VAR_5 = 0;
  }
  if (VAR_7 > 0) {
    FUNC_2 (VAR_6, "read %ld bytes from map file %s\n", VAR_5, VAR_3);
  }
}
