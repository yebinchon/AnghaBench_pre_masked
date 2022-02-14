
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int select_delay; int flags; } ;
struct TYPE_5__ {scalar_t__ reset; } ;
struct TYPE_4__ {int flags; int length; int kernel_data; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_8 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (void (*) ()) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(void)
{
 if (VAR_1->reset) {
  FUNC_8();
  return;
 }
 if (FUNC_11(FUNC_13))
  return;
 if (FUNC_4())
  return;

 FUNC_1(VAR_0->flags, "calling disk change from floppy_ready\n");
 if (!(VAR_8->flags & VAR_4) &&
     FUNC_2(VAR_7) && !VAR_0->select_delay)
  FUNC_12();
 if (VAR_8->flags & (VAR_3 | VAR_2)) {
  FUNC_6();
  FUNC_5();
  FUNC_9();
 } else {
  if ((VAR_8->flags & VAR_5) ||
      (VAR_8->flags & VAR_6))
   FUNC_5();
  FUNC_10();
 }
}
