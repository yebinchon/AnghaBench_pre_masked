
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int reset; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
 if (FUNC_6(VAR_6, &VAR_1->flags)) {

  FUNC_3(VAR_4);
  FUNC_3(FUNC_0(VAR_8));
  if (FUNC_4() != 1) {
   VAR_2->reset = 1;
   return;
  }
  FUNC_1(VAR_6, &VAR_1->flags);
  FUNC_1(VAR_5, &VAR_1->flags);
  FUNC_2(VAR_0->flags,
     "checking whether disk is write protected\n");
  FUNC_2(VAR_0->flags, "wp=%x\n", VAR_7 & 0x40);
  if (!(VAR_7 & 0x40))
   FUNC_5(VAR_3, &VAR_1->flags);
  else
   FUNC_1(VAR_3, &VAR_1->flags);
 }
}
