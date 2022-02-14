
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gather {int* extra; } ;
struct TYPE_2__ {int h; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (struct gather*) ;
 int FUNC_3 (struct gather*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

void FUNC_9 (struct gather *VAR_1, int VAR_2) {
  int VAR_3 = FUNC_5 ();
  if (FUNC_0 (VAR_3)) {
    if (FUNC_2 (VAR_1) >= 0) {
      FUNC_8 (VAR_0->h);
      FUNC_4 (FUNC_6 (), 1);
      FUNC_7 ();
    }
    FUNC_1 (VAR_1->extra);
    FUNC_3 (VAR_1);
  } else {
    int *VAR_4 = VAR_1->extra;
    VAR_4[2] ++;
  }
}
