
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xive_src_block {int lock; struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int guest_priority; int act_server; } ;
struct kvmppc_xive {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct kvmppc_xive_src_block* FUNC_2 (struct kvmppc_xive*,int ,size_t*) ;

int FUNC_3(struct kvm *VAR_2, u32 VAR_3, u32 *VAR_4,
    u32 *VAR_5)
{
 struct kvmppc_xive *VAR_6 = VAR_2->arch.xive;
 struct kvmppc_xive_src_block *VAR_7;
 struct kvmppc_xive_irq_state *VAR_8;
 u16 VAR_9;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6, VAR_3, &VAR_9);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = &VAR_7->irq_state[VAR_9];
 FUNC_0(&VAR_7->lock);
 *VAR_4 = VAR_8->act_server;
 *VAR_5 = VAR_8->guest_priority;
 FUNC_1(&VAR_7->lock);

 return 0;
}
