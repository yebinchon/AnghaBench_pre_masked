
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kvmppc_xive_src_block {int lock; struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {scalar_t__ saved_scan_prio; int valid; } ;
struct kvmppc_xive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvmppc_xive*,struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*,scalar_t__) ;
 int FUNC_2 (struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*) ;

__attribute__((used)) static void FUNC_3(struct kvmppc_xive *VAR_1,
         struct kvmppc_xive_src_block *VAR_2,
         u32 VAR_3)
{
 struct kvmppc_xive_irq_state *VAR_4 = &VAR_2->irq_state[VAR_3];

 if (!VAR_4->valid)
  return;






 FUNC_2(VAR_2, VAR_4);


 if (VAR_4->saved_scan_prio != VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_4, VAR_4->saved_scan_prio);


 FUNC_0(&VAR_2->lock);
}
