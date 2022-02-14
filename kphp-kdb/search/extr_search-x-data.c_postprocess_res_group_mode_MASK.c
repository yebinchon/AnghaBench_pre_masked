
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ h; int filled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

void FUNC_4 (void) {
  if (VAR_1 <= 0) {
    if (VAR_6.h == 0 && VAR_2 > 0) {
      FUNC_2 (VAR_2);
      FUNC_0 ();
    }
    VAR_3 = VAR_6.filled + VAR_4;
    if (VAR_3 > VAR_0) { VAR_3 = -1; }
    return;
  }
  if (!VAR_2) { return; }
  FUNC_1 (&VAR_5);
  FUNC_3 ();
}
