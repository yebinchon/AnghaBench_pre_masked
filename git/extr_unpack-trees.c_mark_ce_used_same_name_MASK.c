
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {struct index_state* src_index; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct cache_entry*,struct unpack_trees_options*) ;
 int FUNC_2 (struct cache_entry*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct cache_entry *VAR_0,
       struct unpack_trees_options *VAR_1)
{
 struct index_state *VAR_2 = VAR_1->src_index;
 int VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = FUNC_1(VAR_0, VAR_1); VAR_4 < VAR_2->cache_nr; VAR_4++) {
  struct cache_entry *VAR_5 = VAR_2->cache[VAR_4];
  if (VAR_3 != FUNC_0(VAR_5) ||
      FUNC_3(VAR_0->name, VAR_5->name, VAR_3))
   break;
  FUNC_2(VAR_5, VAR_1);
 }
}
