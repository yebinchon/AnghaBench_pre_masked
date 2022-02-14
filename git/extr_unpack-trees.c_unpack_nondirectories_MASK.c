
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int merge; int head_idx; struct cache_entry* df_conflict_entry; int result; } ;
struct traverse_info {unsigned long df_conflicts; struct unpack_trees_options* data; } ;
struct name_entry {int dummy; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry const* const*,struct unpack_trees_options*) ;
 struct cache_entry* FUNC_1 (struct traverse_info const*,struct name_entry const*,int,int *,int) ;
 int FUNC_2 (struct cache_entry*) ;
 scalar_t__ FUNC_3 (struct unpack_trees_options*,struct cache_entry*,int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_0, unsigned long VAR_1,
     unsigned long VAR_2,
     struct cache_entry **VAR_3,
     const struct name_entry *VAR_4,
     const struct traverse_info *VAR_5)
{
 int VAR_6;
 struct unpack_trees_options *VAR_7 = VAR_5->data;
 unsigned long VAR_8 = VAR_5->df_conflicts | VAR_2;


 if (VAR_1 == VAR_2 && !VAR_3[0])
  return 0;





 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  int VAR_9;
  unsigned int VAR_10 = 1ul << VAR_6;
  if (VAR_8 & VAR_10) {
   VAR_3[VAR_6 + VAR_7->merge] = VAR_7->df_conflict_entry;
   continue;
  }
  if (!(VAR_1 & VAR_10))
   continue;
  if (!VAR_7->merge)
   VAR_9 = 0;
  else if (VAR_6 + 1 < VAR_7->head_idx)
   VAR_9 = 1;
  else if (VAR_6 + 1 > VAR_7->head_idx)
   VAR_9 = 3;
  else
   VAR_9 = 2;
  VAR_3[VAR_6 + VAR_7->merge] = FUNC_1(VAR_5, VAR_4 + VAR_6, VAR_9, &VAR_7->result, VAR_7->merge);
 }

 if (VAR_7->merge) {
  int VAR_11 = FUNC_0((const struct cache_entry * const *)VAR_3,
     VAR_7);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   struct cache_entry *VAR_12 = VAR_3[VAR_6 + VAR_7->merge];
   if (VAR_12 != VAR_7->df_conflict_entry)
    FUNC_2(VAR_12);
  }
  return VAR_11;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_3[VAR_6] && VAR_3[VAR_6] != VAR_7->df_conflict_entry)
   if (FUNC_3(VAR_7, VAR_3[VAR_6], 0, 0))
    return -1;

 return 0;
}
