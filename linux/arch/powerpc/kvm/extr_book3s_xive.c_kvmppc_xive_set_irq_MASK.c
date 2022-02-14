
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xive_src_block {struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int asserted; int ipi_data; scalar_t__ lsi; scalar_t__ pt_number; int valid; } ;
struct kvmppc_xive {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kvmppc_xive_src_block* FUNC_0 (struct kvmppc_xive*,int ,size_t*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct kvm *VAR_4, int VAR_5, u32 VAR_6, int VAR_7,
   bool VAR_8)
{
 struct kvmppc_xive *VAR_9 = VAR_4->arch.xive;
 struct kvmppc_xive_src_block *VAR_10;
 struct kvmppc_xive_irq_state *VAR_11;
 u16 VAR_12;

 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_9, VAR_6, &VAR_12);
 if (!VAR_10)
  return -VAR_0;


 VAR_11 = &VAR_10->irq_state[VAR_12];
 if (!VAR_11->valid)
  return -VAR_0;


 if (VAR_11->pt_number)
  return -VAR_0;

 if ((VAR_7 == 1 && VAR_11->lsi) || VAR_7 == VAR_2)
  VAR_11->asserted = 1;
 else if (VAR_7 == 0 || VAR_7 == VAR_3) {
  VAR_11->asserted = 0;
  return 0;
 }


 FUNC_1(&VAR_11->ipi_data);

 return 0;
}
