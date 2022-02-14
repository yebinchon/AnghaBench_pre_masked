
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {int cache_changed; TYPE_2__* split_index; int ce_mem_pool; } ;
struct TYPE_4__ {TYPE_1__* base; } ;
struct TYPE_3__ {scalar_t__ cache_nr; int ce_mem_pool; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct index_state *VAR_1)
{
 if (VAR_1->split_index) {
  if (VAR_1->split_index->base) {







   FUNC_1(VAR_1->ce_mem_pool,
      VAR_1->split_index->base->ce_mem_pool);
   VAR_1->split_index->base->cache_nr = 0;
  }






  FUNC_0(VAR_1);

  VAR_1->cache_changed |= VAR_0;
 }
}
