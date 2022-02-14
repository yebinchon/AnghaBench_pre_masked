
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_xive_src_block {int id; TYPE_1__* irq_state; } ;
struct kvmppc_xive {int max_sbid; struct kvmppc_xive_src_block** src_blocks; int lock; } ;
struct TYPE_2__ {int number; void* act_priority; void* saved_priority; void* guest_priority; scalar_t__ eisn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct kvmppc_xive_src_block* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

struct kvmppc_xive_src_block *FUNC_4(
 struct kvmppc_xive *VAR_4, int VAR_5)
{
 struct kvmppc_xive_src_block *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = VAR_5 >> VAR_1;

 FUNC_1(&VAR_4->lock);


 if (VAR_4->src_blocks[VAR_8])
  goto out;


 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  goto out;

 VAR_6->id = VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6->irq_state[VAR_7].number = (VAR_8 << VAR_1) | VAR_7;
  VAR_6->irq_state[VAR_7].eisn = 0;
  VAR_6->irq_state[VAR_7].guest_priority = VAR_3;
  VAR_6->irq_state[VAR_7].saved_priority = VAR_3;
  VAR_6->irq_state[VAR_7].act_priority = VAR_3;
 }
 FUNC_3();
 VAR_4->src_blocks[VAR_8] = VAR_6;

 if (VAR_8 > VAR_4->max_sbid)
  VAR_4->max_sbid = VAR_8;

out:
 FUNC_2(&VAR_4->lock);
 return VAR_4->src_blocks[VAR_8];
}
