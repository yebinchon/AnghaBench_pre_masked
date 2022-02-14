
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kvmppc_xive_src_block {int lock; struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int old_q; int saved_q; int old_p; int saved_p; int saved_scan_prio; int valid; } ;
struct kvmppc_xive {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvmppc_xive*,struct kvmppc_xive_src_block*,struct kvmppc_xive_irq_state*) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_xive *VAR_0,
       struct kvmppc_xive_src_block *VAR_1,
       u32 VAR_2)
{
 struct kvmppc_xive_irq_state *VAR_3 = &VAR_1->irq_state[VAR_2];

 if (!VAR_3->valid)
  return;


 VAR_3->saved_scan_prio = FUNC_1(VAR_0, VAR_1, VAR_3);


 VAR_3->saved_p = VAR_3->old_p;
 VAR_3->saved_q = VAR_3->old_q;


 FUNC_0(&VAR_1->lock);
}
