
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int cache_bottom; struct index_state* src_index; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;

__attribute__((used)) static struct cache_entry *FUNC_0(struct unpack_trees_options *VAR_1)
{
 const struct index_state *VAR_2 = VAR_1->src_index;
 int VAR_3 = VAR_1->cache_bottom;

 while (VAR_3 < VAR_2->cache_nr) {
  struct cache_entry *VAR_4 = VAR_2->cache[VAR_3];
  if (!(VAR_4->ce_flags & VAR_0))
   return VAR_4;
  VAR_3++;
 }
 return ((void*)0);
}
