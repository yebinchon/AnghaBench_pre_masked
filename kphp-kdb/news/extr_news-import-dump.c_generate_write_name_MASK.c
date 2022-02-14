
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,char*,int) ;

void FUNC_1 (int VAR_3) {
  int VAR_4 = 2;
  if (VAR_1 > 100) {
    VAR_4 = 3;
  }
  if (VAR_1 > 1000) {
    VAR_4 = 4;
  }
  if (VAR_4 == 2) {
    FUNC_0 (VAR_0, "%s%02d.bin", VAR_2, VAR_3);
  } else if (VAR_4 == 3) {
    FUNC_0 (VAR_0, "%s%03d.bin", VAR_2, VAR_3);
  } else if (VAR_4 == 4) {
    FUNC_0 (VAR_0, "%s%04d.bin", VAR_2, VAR_3);
  }
}
