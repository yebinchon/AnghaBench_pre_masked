
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {TYPE_2__* split_index; } ;
struct cache_entry {scalar_t__ index; } ;
struct TYPE_4__ {TYPE_1__* base; } ;
struct TYPE_3__ {scalar_t__ cache_nr; struct cache_entry** cache; } ;


 int FUNC_0 (struct cache_entry*) ;

void FUNC_1(struct index_state *VAR_0,
     struct cache_entry *VAR_1,
     struct cache_entry *VAR_2)
{
 if (VAR_1->index &&
     VAR_0->split_index &&
     VAR_0->split_index->base &&
     VAR_1->index <= VAR_0->split_index->base->cache_nr) {
  VAR_2->index = VAR_1->index;
  if (VAR_1 != VAR_0->split_index->base->cache[VAR_2->index - 1])
   FUNC_0(VAR_0->split_index->base->cache[VAR_2->index - 1]);
  VAR_0->split_index->base->cache[VAR_2->index - 1] = VAR_2;
 }
}
