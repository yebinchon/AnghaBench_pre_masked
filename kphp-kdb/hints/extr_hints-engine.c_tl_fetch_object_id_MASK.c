
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4 (void) {
  if (FUNC_1()) {
    return 0;
  }
  int VAR_1 = FUNC_2();
  if (!FUNC_0 (VAR_1)) {
    FUNC_3 (VAR_0, "Wrong object id %d", VAR_1);
  }
  return VAR_1;
}
