
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;

void FUNC_2 (void) {
  int VAR_2 = FUNC_1 (0, 1);
  if (VAR_2 < 0) {
    FUNC_0 (VAR_1, "fatal: ceased reading binlog updates from %d.\n", VAR_0);
    VAR_0 = -1;
  }
}
