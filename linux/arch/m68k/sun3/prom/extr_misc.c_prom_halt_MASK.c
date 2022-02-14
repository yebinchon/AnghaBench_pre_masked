
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pv_halt ) () ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;

void
FUNC_3(void)
{
 unsigned long VAR_1;
again:
 FUNC_1(VAR_1);
 (*(VAR_0->pv_halt))();
 FUNC_0(VAR_1);
 goto again;
}
