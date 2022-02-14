
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_excl_cntrs {int core_id; scalar_t__ refcnt; } ;
struct cpu_hw_events {struct intel_excl_cntrs* constraint_list; struct intel_excl_cntrs* excl_cntrs; } ;


 int FUNC_0 (struct intel_excl_cntrs*) ;

__attribute__((used)) static void FUNC_1(struct cpu_hw_events *VAR_0)
{
 struct intel_excl_cntrs *VAR_1;

 VAR_1 = VAR_0->excl_cntrs;
 if (VAR_1) {
  if (VAR_1->core_id == -1 || --VAR_1->refcnt == 0)
   FUNC_0(VAR_1);
  VAR_0->excl_cntrs = ((void*)0);
 }

 FUNC_0(VAR_0->constraint_list);
 VAR_0->constraint_list = ((void*)0);
}
