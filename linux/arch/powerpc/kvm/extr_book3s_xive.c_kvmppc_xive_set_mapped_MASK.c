
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct kvmppc_xive_src_block {int lock; struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int old_p; int old_q; unsigned int pt_number; int guest_priority; int pt_data; int number; int act_priority; int act_server; int ipi_data; } ;
struct kvmppc_xive {TYPE_2__* ops; } ;
struct TYPE_3__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;
struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;
struct TYPE_4__ {int (* reset_mapped ) (struct kvm*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (struct irq_desc*) ;
 struct irq_data* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (unsigned int,struct kvmppc_xive_irq_state*) ;
 scalar_t__ FUNC_5 (struct irq_data*) ;
 struct kvmppc_xive_src_block* FUNC_6 (struct kvmppc_xive*,unsigned long,size_t*) ;
 int FUNC_7 (struct kvmppc_xive*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,unsigned long,int,...) ;
 int FUNC_10 (char*,unsigned int) ;
 int FUNC_11 (struct kvm*,unsigned long) ;
 int FUNC_12 (struct kvmppc_xive*,struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*) ;
 int FUNC_13 (unsigned int,int ,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (unsigned int,int ) ;

int FUNC_16(struct kvm *VAR_4, unsigned long VAR_5,
      struct irq_desc *VAR_6)
{
 struct kvmppc_xive *VAR_7 = VAR_4->arch.xive;
 struct kvmppc_xive_src_block *VAR_8;
 struct kvmppc_xive_irq_state *VAR_9;
 struct irq_data *VAR_10 = FUNC_3(VAR_6);
 unsigned int VAR_11 = FUNC_2(VAR_6);
 unsigned int VAR_12 = (unsigned int)FUNC_5(VAR_10);
 u16 VAR_13;
 u8 VAR_14;
 int VAR_15;

 if (!VAR_7)
  return -VAR_1;

 FUNC_9("set_mapped girq 0x%lx host HW irq 0x%x...\n",VAR_5, VAR_12);

 VAR_8 = FUNC_6(VAR_7, VAR_5, &VAR_13);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = &VAR_8->irq_state[VAR_13];
 VAR_15 = FUNC_4(VAR_11, VAR_9);
 if (VAR_15) {
  FUNC_10("Failed to set VCPU affinity for irq %d\n", VAR_11);
  return VAR_15;
 }






 VAR_14 = FUNC_12(VAR_7, VAR_8, VAR_9);
 FUNC_9(" old IPI prio %02x P:%d Q:%d\n", VAR_14,
   VAR_9->old_p, VAR_9->old_q);


 FUNC_14(&VAR_9->ipi_data, VAR_3);





 if (VAR_7->ops && VAR_7->ops->reset_mapped)
  VAR_7->ops->reset_mapped(VAR_4, VAR_5);


 VAR_9->pt_number = VAR_12;
 VAR_9->pt_data = FUNC_1(VAR_10);







 FUNC_13(VAR_12,
      FUNC_7(VAR_7, VAR_9->act_server),
      VAR_9->act_priority, VAR_9->number);
 if (VAR_14 != VAR_2 && !VAR_9->old_p)
  FUNC_15(VAR_12, VAR_9->pt_data);


 VAR_9->old_p = VAR_9->old_q = 0;


 FUNC_8();
 VAR_9->guest_priority = VAR_14;
 FUNC_0(&VAR_8->lock);

 return 0;
}
