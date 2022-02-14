
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {TYPE_2__* split_index; } ;
struct cache_entry {int index; int ce_flags; } ;
struct TYPE_4__ {TYPE_1__* base; } ;
struct TYPE_3__ {int cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry*) ;

void FUNC_1(struct index_state *VAR_1, struct cache_entry *VAR_2)
{
 if (VAR_2->index &&
     VAR_1->split_index &&
     VAR_1->split_index->base &&
     VAR_2->index <= VAR_1->split_index->base->cache_nr &&
     VAR_2 == VAR_1->split_index->base->cache[VAR_2->index - 1])
  VAR_2->ce_flags |= VAR_0;
 else
  FUNC_0(VAR_2);
}
