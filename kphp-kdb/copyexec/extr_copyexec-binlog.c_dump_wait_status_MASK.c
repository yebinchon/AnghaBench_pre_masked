
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_0 ;

void FUNC_5 (int VAR_1) {
  if (FUNC_1(VAR_1)) {
    FUNC_4 (VAR_0, "exit:%d", FUNC_0(VAR_1));
  } else if (FUNC_2(VAR_1)) {
    FUNC_4 (VAR_0, "sig:%d", FUNC_3(VAR_1));
  } else {
    FUNC_4 (VAR_0, "%d", VAR_1);
  }
}
