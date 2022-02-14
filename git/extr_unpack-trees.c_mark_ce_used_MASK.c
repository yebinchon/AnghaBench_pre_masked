
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {size_t cache_bottom; TYPE_1__* src_index; } ;
struct cache_entry {int ce_flags; } ;
struct TYPE_2__ {size_t cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cache_entry *VAR_1, struct unpack_trees_options *VAR_2)
{
 VAR_1->ce_flags |= VAR_0;

 if (VAR_2->cache_bottom < VAR_2->src_index->cache_nr &&
     VAR_2->src_index->cache[VAR_2->cache_bottom] == VAR_1) {
  int VAR_3 = VAR_2->cache_bottom;
  while (VAR_3 < VAR_2->src_index->cache_nr &&
         VAR_2->src_index->cache[VAR_3]->ce_flags & VAR_0)
   VAR_3++;
  VAR_2->cache_bottom = VAR_3;
 }
}
