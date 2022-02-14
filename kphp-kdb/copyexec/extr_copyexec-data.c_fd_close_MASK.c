
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (int *VAR_3) {
  if (*VAR_3 >= 0) {
    while (1) {
      if (FUNC_0 (*VAR_3) < 0) {
        if (VAR_1 == VAR_0) {
          continue;
        }
        FUNC_1 (2, "close (%d) failed. %m\n", *VAR_3);
        return;
      }
      FUNC_1 (VAR_2, "fd = %d: was successfully closed.\n", *VAR_3);
      *VAR_3 = -1;
      return;
    }
  }
  FUNC_1 (3, "skip closing negative fd = %d\n", *VAR_3);
}
