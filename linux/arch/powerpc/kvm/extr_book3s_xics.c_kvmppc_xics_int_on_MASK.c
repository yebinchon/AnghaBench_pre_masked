
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct kvmppc_icp {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;
struct ics_irq_state {int saved_priority; int server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvmppc_xics*,struct kvmppc_icp*,int ,int) ;
 struct kvmppc_ics* FUNC_1 (struct kvmppc_xics*,int ,size_t*) ;
 struct kvmppc_icp* FUNC_2 (struct kvm*,int ) ;
 scalar_t__ FUNC_3 (struct kvmppc_xics*,struct kvmppc_ics*,struct ics_irq_state*,int ,int ,int ) ;

int FUNC_4(struct kvm *VAR_2, u32 VAR_3)
{
 struct kvmppc_xics *VAR_4 = VAR_2->arch.xics;
 struct kvmppc_icp *VAR_5;
 struct kvmppc_ics *VAR_6;
 struct ics_irq_state *VAR_7;
 u16 VAR_8;

 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4, VAR_3, &VAR_8);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = &VAR_6->irq_state[VAR_8];

 VAR_5 = FUNC_2(VAR_2, VAR_7->server);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_3(VAR_4, VAR_6, VAR_7, VAR_7->server, VAR_7->saved_priority,
         VAR_7->saved_priority))
  FUNC_0(VAR_4, VAR_5, VAR_3, 0);

 return 0;
}
