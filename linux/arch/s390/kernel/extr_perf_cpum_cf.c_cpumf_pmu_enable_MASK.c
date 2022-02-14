
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_cf_events {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 struct cpu_cf_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pmu *VAR_2)
{
 struct cpu_cf_events *VAR_3 = FUNC_2(&VAR_1);
 int VAR_4;

 if (VAR_3->flags & VAR_0)
  return;

 VAR_4 = FUNC_0(VAR_3->state);
 if (VAR_4) {
  FUNC_1("Enabling the performance measuring unit "
         "failed with rc=%x\n", VAR_4);
  return;
 }

 VAR_3->flags |= VAR_0;
}
