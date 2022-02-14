
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
 char* VAR_4 ;
 int FUNC_3 (char*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*) ;

void FUNC_5 (void) {
  int VAR_7;
  FUNC_2 (VAR_6);
  FUNC_2 (VAR_5);
  if ((VAR_7 = FUNC_3 ("/dev/null", VAR_2, 0)) != -1) {
    FUNC_1 (VAR_7, 0);
    FUNC_1 (VAR_7, 1);
    FUNC_1 (VAR_7, 2);
    if (VAR_7 > 2) {
      FUNC_0 (VAR_7);
    }
  }
  if (VAR_4 && (VAR_7 = FUNC_3 (VAR_4, VAR_3|VAR_0|VAR_1, 0640)) != -1) {
    FUNC_1 (VAR_7, 1);
    FUNC_1 (VAR_7, 2);
    if (VAR_7 > 2) {
      FUNC_0 (VAR_7);
    }
  }

  FUNC_4 (1, "logs reopened.\n");
}
