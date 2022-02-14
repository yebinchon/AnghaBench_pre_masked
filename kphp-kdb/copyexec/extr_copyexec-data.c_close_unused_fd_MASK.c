
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (int VAR_1) {
  int VAR_2, VAR_3 = 0;
  for (VAR_2 = 3; VAR_2 <= VAR_0; VAR_2++) {
    if (VAR_2 == VAR_1) {
      continue;
    }
    VAR_3 += FUNC_0 (VAR_2);
  }

  for ( ; VAR_2 < VAR_1; VAR_2++) {
    if (FUNC_0 (VAR_2) > 0) {
      FUNC_1 (1, "close_unused_fd: found resourse leakage (fd:%d).\n", VAR_2);
      VAR_3++;
    }
  }

  FUNC_1 (3, "close_unused_fd: close %d fd(s)\n", VAR_3);
}
