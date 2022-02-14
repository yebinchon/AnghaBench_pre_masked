
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct kvmppc_xive_src_block {TYPE_1__* irq_state; } ;
struct kvmppc_xive {size_t max_sbid; scalar_t__ saved_src_count; struct kvmppc_xive_src_block** src_blocks; } ;
struct TYPE_2__ {int in_queue; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvmppc_xive *VAR_1)
{
 u32 VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 <= VAR_1->max_sbid; VAR_2++) {
  struct kvmppc_xive_src_block *VAR_4 = VAR_1->src_blocks[VAR_2];
  if (!VAR_4)
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   VAR_4->irq_state[VAR_3].in_queue = 0;
 }


 VAR_1->saved_src_count = 0;
}
