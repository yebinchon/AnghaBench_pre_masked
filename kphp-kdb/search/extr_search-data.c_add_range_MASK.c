
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int minr; int maxr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2 (int VAR_1, int VAR_2, int VAR_3) {
  int VAR_4 = FUNC_1 (VAR_1);
  FUNC_0 (VAR_4 >= 0);
  if (VAR_0[VAR_4].minr < VAR_2) {
    VAR_0[VAR_4].minr = VAR_2;
  }
  if (VAR_0[VAR_4].maxr > VAR_3) {
    VAR_0[VAR_4].maxr = VAR_3;
  }
}
