
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {struct index_state* src_index; } ;
struct index_state {int cache_nr; struct cache_entry const** cache; } ;
typedef struct cache_entry {int name; } const cache_entry ;


 int FUNC_0 (struct unpack_trees_options*,struct cache_entry const*,int ,int ) ;
 int FUNC_1 (struct cache_entry const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct index_state*,int ,int) ;
 int FUNC_4 (struct cache_entry const*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(const struct cache_entry *VAR_0,
         struct unpack_trees_options *VAR_1)
{
 struct index_state *VAR_2 = VAR_1->src_index;
 int VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_3(VAR_2, VAR_0->name, VAR_3);

 if (0 <= VAR_4)
  FUNC_2("programming error in a caller of mark_ce_used_same_name");
 for (VAR_4 = -VAR_4 - 1; VAR_4 < VAR_2->cache_nr; VAR_4++) {
  struct cache_entry *VAR_5 = VAR_2->cache[VAR_4];
  if (VAR_3 != FUNC_1(VAR_5) ||
      FUNC_5(VAR_0->name, VAR_5->name, VAR_3))
   break;
  FUNC_0(VAR_1, VAR_5, 0, 0);
  FUNC_4(VAR_5, VAR_1);
 }
}
