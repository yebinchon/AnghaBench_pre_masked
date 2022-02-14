
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {int lock; struct ics_irq_state* irq_state; } ;
struct TYPE_2__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;
struct ics_irq_state {int priority; int server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct kvmppc_ics* FUNC_2 (struct kvmppc_xics*,int ,size_t*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

int FUNC_5(struct kvm *VAR_2, u32 VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct kvmppc_xics *VAR_6 = VAR_2->arch.xics;
 struct kvmppc_ics *VAR_7;
 struct ics_irq_state *VAR_8;
 u16 VAR_9;
 unsigned long VAR_10;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6, VAR_3, &VAR_9);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = &VAR_7->irq_state[VAR_9];

 FUNC_4(VAR_10);
 FUNC_0(&VAR_7->lock);
 *VAR_4 = VAR_8->server;
 *VAR_5 = VAR_8->priority;
 FUNC_1(&VAR_7->lock);
 FUNC_3(VAR_10);

 return 0;
}
