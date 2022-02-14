
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xive_q {int idx; int msk; int toggle; scalar_t__ qpage; } ;
struct xive_irq_data {int eoi_page; } ;
struct seq_file {int dummy; } ;
struct kvmppc_xive_vcpu {scalar_t__* esc_virq; struct xive_q* queues; } ;
struct TYPE_2__ {struct kvmppc_xive_vcpu* xive_vcpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct irq_data {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct xive_irq_data* FUNC_1 (struct irq_data*) ;
 struct irq_data* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct seq_file*,char*,char,...) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct xive_irq_data*,int ) ;

int FUNC_6(struct seq_file *VAR_4, struct kvm_vcpu *VAR_5)
{
 struct kvmppc_xive_vcpu *VAR_6 = VAR_5->arch.xive_vcpu;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct xive_q *VAR_8 = &VAR_6->queues[VAR_7];
  u32 VAR_9, VAR_10, VAR_11;

  if (!VAR_8->qpage && !VAR_6->esc_virq[VAR_7])
   continue;

  FUNC_3(VAR_4, " [q%d]: ", VAR_7);

  if (VAR_8->qpage) {
   VAR_11 = VAR_8->idx;
   VAR_9 = FUNC_0(VAR_8->qpage + VAR_11);
   VAR_11 = (VAR_11 + 1) & VAR_8->msk;
   VAR_10 = FUNC_0(VAR_8->qpage + VAR_11);
   FUNC_3(VAR_4, "T=%d %08x %08x...\n", VAR_8->toggle,
       VAR_9, VAR_10);
  }
  if (VAR_6->esc_virq[VAR_7]) {
   struct irq_data *VAR_12 = FUNC_2(VAR_6->esc_virq[VAR_7]);
   struct xive_irq_data *VAR_13 =
    FUNC_1(VAR_12);
   u64 VAR_14 = FUNC_5(VAR_13, VAR_1);

   FUNC_3(VAR_4, "E:%c%c I(%d:%llx:%llx)",
       (VAR_14 & VAR_2) ? 'P' : 'p',
       (VAR_14 & VAR_3) ? 'Q' : 'q',
       VAR_6->esc_virq[VAR_7], VAR_14, VAR_13->eoi_page);
   FUNC_4(VAR_4, "\n");
  }
 }
 return 0;
}
