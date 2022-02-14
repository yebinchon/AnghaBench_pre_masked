
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_1 (int VAR_1) {
  if (VAR_1 < 60) {
    FUNC_0 (VAR_0, "%d", VAR_1);
  } else if (VAR_1 < 3600) {
    int VAR_2 = VAR_1 / 60;
    FUNC_0 (VAR_0, "%dm", VAR_2);
      FUNC_0 (VAR_0, "%ds", VAR_1 % 60);
  } else if (VAR_1 < 86400) {
    int VAR_3 = VAR_1 / 3600;
    FUNC_0 (VAR_0, "%dh", VAR_3);
      FUNC_0 (VAR_0, "%dm", (VAR_1 % 3600) / 60);
  } else if (VAR_1 < 31536000) {
    int VAR_4 = VAR_1 / 86400;
    FUNC_0 (VAR_0, "%dd", VAR_4);
      FUNC_0 (VAR_0, "%dh", (VAR_1 % 86400) / 3600);
  } else {
    FUNC_0 (VAR_0, ">year");
  }
}
