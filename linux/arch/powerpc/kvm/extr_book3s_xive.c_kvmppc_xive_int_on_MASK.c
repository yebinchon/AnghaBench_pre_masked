
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xive_src_block {int lock; struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {scalar_t__ act_priority; scalar_t__ saved_priority; } ;
struct kvmppc_xive {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct kvmppc_xive_src_block* FUNC_1 (struct kvmppc_xive*,int ,size_t*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct kvmppc_xive*,struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*,scalar_t__) ;
 int FUNC_4 (struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*) ;

int FUNC_5(struct kvm *VAR_3, u32 VAR_4)
{
 struct kvmppc_xive *VAR_5 = VAR_3->arch.xive;
 struct kvmppc_xive_src_block *VAR_6;
 struct kvmppc_xive_irq_state *VAR_7;
 u16 VAR_8;

 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_5, VAR_4, &VAR_8);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = &VAR_6->irq_state[VAR_8];

 FUNC_2("int_on(irq=0x%x)\n", VAR_4);




 if (VAR_7->act_priority == VAR_2) {
  FUNC_2("int_on on untargetted interrupt\n");
  return -VAR_0;
 }


 if (VAR_7->saved_priority == VAR_2)
  return 0;




 FUNC_4(VAR_6, VAR_7);
 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_7->saved_priority);
 FUNC_0(&VAR_6->lock);

 return 0;
}
