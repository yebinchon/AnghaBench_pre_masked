
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xive_src_block {int lock; struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int saved_priority; } ;
struct kvmppc_xive {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct kvmppc_xive_src_block* FUNC_1 (struct kvmppc_xive*,int ,size_t*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct kvmppc_xive*,struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*) ;

int FUNC_4(struct kvm *VAR_2, u32 VAR_3)
{
 struct kvmppc_xive *VAR_4 = VAR_2->arch.xive;
 struct kvmppc_xive_src_block *VAR_5;
 struct kvmppc_xive_irq_state *VAR_6;
 u16 VAR_7;

 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_7);
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = &VAR_5->irq_state[VAR_7];

 FUNC_2("int_off(irq=0x%x)\n", VAR_3);




 VAR_6->saved_priority = FUNC_3(VAR_4, VAR_5, VAR_6);
 FUNC_0(&VAR_5->lock);

 return 0;
}
