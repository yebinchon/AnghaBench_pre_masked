
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pa_topmode; size_t pa_plugin; } ;
struct TYPE_3__ {int (* pl_init ) () ;int (* pl_shutdown ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void
FUNC_4(void)
{

 FUNC_0();


 if (VAR_1.pa_topmode == VAR_0) {
  if (VAR_2[VAR_1.pa_plugin].pl_shutdown != ((void*)0))
   VAR_2[VAR_1.pa_plugin].pl_shutdown(((void*)0));
  FUNC_1(0);
  if (VAR_2[VAR_1.pa_plugin].pl_init != ((void*)0))
   VAR_2[VAR_1.pa_plugin].pl_init();
 }
}
