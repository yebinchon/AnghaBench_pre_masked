
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_lists; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_3 (int,int) ;

void FUNC_4 (void) {
  int VAR_3;
  if (!VAR_2) {
    FUNC_1 (!VAR_0.tot_lists);
    return;
  }
  FUNC_1 (VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_0.tot_lists; VAR_3++) {

    if (VAR_2[VAR_3]) {
      FUNC_1 (FUNC_3 (VAR_3, -1) >= 0);
    }
    if (VAR_2[VAR_3] && !(VAR_1 & 1)) {
      FUNC_2 (FUNC_0 (VAR_3));
    }

  }
}
