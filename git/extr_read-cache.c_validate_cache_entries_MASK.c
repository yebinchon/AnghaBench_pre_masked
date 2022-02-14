
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__* split_index; int * cache; int ce_mem_pool; int initialized; } ;
struct TYPE_2__ {struct index_state* base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

void FUNC_3(const struct index_state *VAR_0)
{
 int VAR_1;

 if (!FUNC_2() ||!VAR_0 || !VAR_0->initialized)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->cache_nr; VAR_1++) {
  if (!VAR_0) {
   FUNC_0("cache entry is not allocated from expected memory pool");
  } else if (!VAR_0->ce_mem_pool ||
   !FUNC_1(VAR_0->ce_mem_pool, VAR_0->cache[VAR_1])) {
   if (!VAR_0->split_index ||
    !VAR_0->split_index->base ||
    !VAR_0->split_index->base->ce_mem_pool ||
    !FUNC_1(VAR_0->split_index->base->ce_mem_pool, VAR_0->cache[VAR_1])) {
    FUNC_0("cache entry is not allocated from expected memory pool");
   }
  }
 }

 if (VAR_0->split_index)
  FUNC_3(VAR_0->split_index->base);
}
