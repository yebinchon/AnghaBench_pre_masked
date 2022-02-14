
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aas_lreachability_t ;
struct TYPE_2__ {int numreachabilityareas; int numareas; int savefile; scalar_t__ reachabilitysize; int loaded; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__ VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_4(void)
{
 if (!VAR_0.loaded) return;

 if (VAR_0.reachabilitysize)
 {

  if (!((int)FUNC_3("forcereachability")))
  {
   VAR_0.numreachabilityareas = VAR_0.numareas + 2;
   return;
  }




 }

 VAR_2 = FUNC_3("grapplereach");

 VAR_0.savefile = VAR_3;

 VAR_0.numreachabilityareas = 1;


 FUNC_1();

 VAR_1 = (aas_lreachability_t **) FUNC_2(
         VAR_0.numareas * sizeof(aas_lreachability_t *));

 FUNC_0();
}
