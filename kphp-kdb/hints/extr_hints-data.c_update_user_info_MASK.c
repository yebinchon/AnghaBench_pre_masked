
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int user_cnt; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_2 (void) {
  int VAR_3;
  for (VAR_3 = 1; VAR_3 <= VAR_0.user_cnt; VAR_3++) {
    if (FUNC_0 (VAR_2[VAR_3].flags) != 1) {
      VAR_2[VAR_3].flags = FUNC_1 (VAR_2[VAR_3].flags, -1);
    } else {
      VAR_1++;
    }
  }
}
