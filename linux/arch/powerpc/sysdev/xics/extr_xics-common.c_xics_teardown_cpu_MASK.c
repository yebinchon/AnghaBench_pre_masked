
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xics_cppr {scalar_t__ index; } ;
struct TYPE_2__ {int (* teardown_cpu ) () ;int (* set_priority ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct xics_cppr* FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(void)
{
 struct xics_cppr *VAR_2 = FUNC_2(&VAR_1);





 VAR_2->index = 0;
 VAR_0->set_priority(0);
 VAR_0->teardown_cpu();
}
