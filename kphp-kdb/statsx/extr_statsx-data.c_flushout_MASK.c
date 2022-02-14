
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,scalar_t__,int) ;

void FUNC_4 (void) {
  if (VAR_1 < VAR_6) {
    int VAR_7 = VAR_6 - VAR_1;
    int VAR_8 = FUNC_3 (VAR_3, VAR_1, VAR_7);
    int VAR_9 = VAR_2;
    if (VAR_5) {
      FUNC_1 (VAR_4, "(s,w,BUFFSIZE) = (%d %d %d)\n", VAR_7, VAR_8, VAR_0);
    }
    if (VAR_8 == -1) {
      FUNC_1 (VAR_4, "errno = %d (%s)\n", VAR_9, FUNC_2 (VAR_9));
    }
    FUNC_0 (VAR_8 == VAR_7);
  }
  VAR_6 = VAR_1;
}
