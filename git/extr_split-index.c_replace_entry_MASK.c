
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_index {size_t nr_replacements; size_t saved_cache_nr; struct cache_entry** saved_cache; } ;
struct index_state {size_t cache_nr; struct cache_entry** cache; struct split_index* split_index; } ;
struct cache_entry {int ce_flags; size_t index; int ce_namelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct cache_entry*,struct cache_entry*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct cache_entry*) ;

__attribute__((used)) static void FUNC_4(size_t VAR_2, void *VAR_3)
{
 struct index_state *VAR_4 = VAR_3;
 struct split_index *VAR_5 = VAR_4->split_index;
 struct cache_entry *VAR_6, *VAR_7;

 if (VAR_2 >= VAR_4->cache_nr)
  FUNC_2("position for replacement %d exceeds base index size %d",
      (int)VAR_2, VAR_4->cache_nr);
 if (VAR_5->nr_replacements >= VAR_5->saved_cache_nr)
  FUNC_2("too many replacements (%d vs %d)",
      VAR_5->nr_replacements, VAR_5->saved_cache_nr);
 VAR_6 = VAR_4->cache[VAR_2];
 if (VAR_6->ce_flags & VAR_0)
  FUNC_2("entry %d is marked as both replaced and deleted",
      (int)VAR_2);
 VAR_7 = VAR_5->saved_cache[VAR_5->nr_replacements];
 if (FUNC_0(VAR_7))
  FUNC_2("corrupt link extension, entry %d should have "
      "zero length name", (int)VAR_2);
 VAR_7->index = VAR_2 + 1;
 VAR_7->ce_flags |= VAR_1;
 VAR_7->ce_namelen = VAR_6->ce_namelen;
 FUNC_1(VAR_6, VAR_7);
 FUNC_3(VAR_7);
 VAR_5->nr_replacements++;
}
