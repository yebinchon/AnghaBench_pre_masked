
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct targ_extra {int dummy; } ;
struct gather {struct targ_extra* extra; } ;
struct TYPE_2__ {int h; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct gather*) ;
 int FUNC_2 (struct gather*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct targ_extra*,int) ;

void FUNC_9 (struct gather *VAR_1, int VAR_2) {
  int VAR_3 = FUNC_4 ();
  if (FUNC_0 (VAR_3)) {
    if (FUNC_1 (VAR_1) >= 0) {
      FUNC_7 (VAR_0->h);
      FUNC_3 (FUNC_5 (), 1);
      FUNC_6 ();
    }
    struct targ_extra *VAR_4 = VAR_1->extra;
    FUNC_8 (VAR_4, sizeof (*VAR_4));
    FUNC_2 (VAR_1);
  }
}
