
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,char*,int) ;

void FUNC_3 (int VAR_8) {
  long VAR_9;
  FUNC_2 (3, "scan_targ_aud_user(%d)\n", VAR_8);
  int VAR_10 = FUNC_0 (VAR_8, VAR_6, VAR_5, VAR_4, VAR_7);
  for (VAR_9 = 0; (int) VAR_9 < VAR_1; VAR_9++) {
    if (FUNC_1 (VAR_3[VAR_8], VAR_0[VAR_9], VAR_8)) {
      VAR_2[3*VAR_9 + 4]++;
      if (VAR_10) {
 VAR_2[3*VAR_9 + 5]++;
      }
    }
  }
  VAR_2[1]++;
  if (VAR_10) {
    VAR_2[2]++;
  }
}
