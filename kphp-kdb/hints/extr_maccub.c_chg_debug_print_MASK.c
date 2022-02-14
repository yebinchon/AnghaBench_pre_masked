
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; } ;
typedef TYPE_1__ treap ;
typedef int* changes ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2 (changes VAR_0, FILE *VAR_1) {
  if ((long)(VAR_0) < 0) {
    long VAR_2 = -(long)(VAR_0);
    FUNC_0 (VAR_1, " [1] : %+ld\n", (VAR_2 / 2) * (VAR_2 & 1 ? +1 : -1));
  } else if (VAR_0) {
    if (VAR_0[0] < 0) {
      FUNC_0 (VAR_1, "[%d] :", VAR_0[0]);
      FUNC_1 (((treap *)(VAR_0))->root, VAR_1);
      FUNC_0 (VAR_1, "\n");

    } else {
      FUNC_0 (VAR_1, " [%d] :", VAR_0[0]);
      int VAR_3;
      for (VAR_3 = 1; VAR_3 <= VAR_0[0]; VAR_3++) {
        FUNC_0 (VAR_1, " %+d", (VAR_0[VAR_3] / 2) * (VAR_0[VAR_3] & 1 ? +1 : -1));
      }
      FUNC_0 (VAR_1, "\n");
    }
  }
}
