
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_shared_regs {int core_id; scalar_t__ refcnt; } ;
struct cpu_hw_events {struct intel_shared_regs* shared_regs; } ;


 int FUNC_0 (struct cpu_hw_events*) ;
 int FUNC_1 (struct intel_shared_regs*) ;

void FUNC_2(struct cpu_hw_events *VAR_0)
{
 struct intel_shared_regs *VAR_1;

 VAR_1 = VAR_0->shared_regs;
 if (VAR_1) {
  if (VAR_1->core_id == -1 || --VAR_1->refcnt == 0)
   FUNC_1(VAR_1);
  VAR_0->shared_regs = ((void*)0);
 }

 FUNC_0(VAR_0);
}
