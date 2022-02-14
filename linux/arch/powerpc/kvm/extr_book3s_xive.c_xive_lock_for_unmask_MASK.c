
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xive_src_block {int lock; } ;
struct kvmppc_xive_irq_state {int in_eoi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_xive_src_block *VAR_0,
     struct kvmppc_xive_irq_state *VAR_1)
{



 for (;;) {
  FUNC_0(&VAR_0->lock);
  if (!VAR_1->in_eoi)
   break;
  FUNC_1(&VAR_0->lock);
 }
}
