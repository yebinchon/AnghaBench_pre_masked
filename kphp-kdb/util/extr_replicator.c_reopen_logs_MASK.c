
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 char* VAR_4 ;
 int FUNC_4 (char*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_5 (void) {
  int VAR_9;
  FUNC_2 (VAR_7);
  FUNC_2 (VAR_6);
  if ((VAR_9 = FUNC_4("/dev/null", VAR_2, 0)) != -1) {
    FUNC_1 (VAR_9, 0);
    FUNC_1 (VAR_9, 1);
    FUNC_1 (VAR_9, 2);
    if (VAR_9 > 2)
      FUNC_0 (VAR_9);
  }
  if (VAR_4 && (VAR_9 = FUNC_4 (VAR_4, VAR_3 | VAR_0 | VAR_1, 0640)) != -1) {
    FUNC_1 (VAR_9, 1);
    FUNC_1 (VAR_9, 2);
    if (VAR_9 > 2)
      FUNC_0 (VAR_9);
  }
  if (VAR_8 > 0 && !VAR_5) {
    FUNC_3 (VAR_6, "logs reopened.\n");
  }
}
