
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct TYPE_2__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;
struct ics_irq_state {int priority; int server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvmppc_ics* FUNC_0 (struct kvmppc_xics*,int ,size_t*) ;
 int FUNC_1 (struct kvmppc_xics*,struct kvmppc_ics*,struct ics_irq_state*,int ,int ,int ) ;

int FUNC_2(struct kvm *VAR_3, u32 VAR_4)
{
 struct kvmppc_xics *VAR_5 = VAR_3->arch.xics;
 struct kvmppc_ics *VAR_6;
 struct ics_irq_state *VAR_7;
 u16 VAR_8;

 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5, VAR_4, &VAR_8);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = &VAR_6->irq_state[VAR_8];

 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_7->server, VAR_2, VAR_7->priority);

 return 0;
}
