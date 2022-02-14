
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct split_index {TYPE_1__* base; } ;
struct index_state {int cache_nr; int cache; int * ce_mem_pool; int timestamp; int version; struct split_index* split_index; } ;
struct TYPE_6__ {int ce_flags; } ;
struct TYPE_5__ {int cache_nr; TYPE_3__** cache; int * ce_mem_pool; int cache_alloc; int timestamp; int version; } ;


 int FUNC_0 (TYPE_3__**,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__**,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ) ;
 TYPE_1__* FUNC_5 (int,int) ;

void FUNC_6(struct index_state *VAR_1)
{
 struct split_index *VAR_2 = VAR_1->split_index;
 int VAR_3;





 if (VAR_2->base &&
  VAR_2->base->ce_mem_pool) {

  if (!VAR_1->ce_mem_pool)
   FUNC_4(&VAR_1->ce_mem_pool, 0);

  FUNC_3(VAR_1->ce_mem_pool, VAR_1->split_index->base->ce_mem_pool);
 }

 VAR_2->base = FUNC_5(1, sizeof(*VAR_2->base));
 VAR_2->base->version = VAR_1->version;

 VAR_2->base->timestamp = VAR_1->timestamp;
 FUNC_0(VAR_2->base->cache, VAR_1->cache_nr, VAR_2->base->cache_alloc);
 VAR_2->base->cache_nr = VAR_1->cache_nr;




 VAR_2->base->ce_mem_pool = VAR_1->ce_mem_pool;
 VAR_1->ce_mem_pool = ((void*)0);

 FUNC_1(VAR_2->base->cache, VAR_1->cache, VAR_1->cache_nr);
 FUNC_2(VAR_2->base);
 for (VAR_3 = 0; VAR_3 < VAR_2->base->cache_nr; VAR_3++)
  VAR_2->base->cache[VAR_3]->ce_flags &= ~VAR_0;
}
