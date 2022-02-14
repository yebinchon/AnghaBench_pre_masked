
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int,char*,int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_5 (int VAR_7) {
  FUNC_0 (0 <= VAR_7 && VAR_7 < VAR_3);

  if (VAR_4[VAR_0] != -1 && VAR_7) {
    FUNC_1 (VAR_0);
  }

  int VAR_8 = VAR_7;

  if (VAR_6 > 0) {
    FUNC_3 (VAR_5, "\nSwitching to dump %d\n", VAR_8);
  }

  FUNC_4 (VAR_1, 100, "dump%03d.%d", VAR_8, VAR_2);
  return FUNC_2 (VAR_0, VAR_1, -1) >= 0;
}
