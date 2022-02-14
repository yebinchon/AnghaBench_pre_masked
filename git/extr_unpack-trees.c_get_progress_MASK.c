
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {unsigned int cache_nr; struct cache_entry** cache; } ;
struct unpack_trees_options {int verbose_update; int update; struct index_state result; } ;
struct progress {int dummy; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct progress* FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static struct progress *FUNC_2(struct unpack_trees_options *VAR_2)
{
 unsigned VAR_3 = 0, VAR_4 = 0;
 struct index_state *VAR_5 = &VAR_2->result;

 if (!VAR_2->update || !VAR_2->verbose_update)
  return ((void*)0);

 for (; VAR_3 < VAR_5->cache_nr; VAR_3++) {
  const struct cache_entry *VAR_6 = VAR_5->cache[VAR_3];
  if (VAR_6->ce_flags & (VAR_0 | VAR_1))
   VAR_4++;
 }

 return FUNC_1(FUNC_0("Updating files"), VAR_4);
}
