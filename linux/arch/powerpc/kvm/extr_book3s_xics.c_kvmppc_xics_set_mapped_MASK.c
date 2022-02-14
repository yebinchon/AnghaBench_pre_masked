
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {TYPE_2__* irq_state; } ;
struct TYPE_3__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_4__ {unsigned long host_irq; int intr_cpu; } ;


 struct kvmppc_ics* FUNC_0 (struct kvmppc_xics*,unsigned long,size_t*) ;

void FUNC_1(struct kvm *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct kvmppc_xics *VAR_3 = VAR_0->arch.xics;
 struct kvmppc_ics *VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_5);
 if (!VAR_4)
  return;

 VAR_4->irq_state[VAR_5].host_irq = VAR_2;
 VAR_4->irq_state[VAR_5].intr_cpu = -1;
}
