
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int merge_size; scalar_t__ update; int src_index; scalar_t__ reset; struct cache_entry const* df_conflict_entry; } ;
struct stat {int dummy; } ;
struct cache_entry {int ce_mode; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct unpack_trees_options*,struct cache_entry const*,int,int ) ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (struct cache_entry const*,struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ,struct cache_entry const*,struct stat*,int) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (struct cache_entry const*,struct cache_entry const*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_9 (struct cache_entry const*,struct cache_entry const*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct cache_entry const*,struct unpack_trees_options*) ;

int FUNC_12(const struct cache_entry * const *VAR_4,
   struct unpack_trees_options *VAR_5)
{
 const struct cache_entry *VAR_6 = VAR_4[0];
 const struct cache_entry *VAR_7 = VAR_4[1];

 if (VAR_5->merge_size != 1)
  return FUNC_5("Cannot do a oneway merge of %d trees",
        VAR_5->merge_size);

 if (!VAR_7 || VAR_7 == VAR_5->df_conflict_entry)
  return FUNC_4(VAR_6, VAR_6, VAR_5);

 if (VAR_6 && FUNC_9(VAR_6, VAR_7)) {
  int VAR_8 = 0;
  if (VAR_5->reset && VAR_5->update && !FUNC_3(VAR_6) && !FUNC_2(VAR_6)) {
   struct stat VAR_9;
   if (FUNC_7(VAR_6->name, &VAR_9) ||
       FUNC_6(VAR_5->src_index, VAR_6, &VAR_9, VAR_1|VAR_0))
    VAR_8 |= VAR_3;
  }
  if (VAR_5->update && FUNC_0(VAR_6->ce_mode) &&
      FUNC_10() && !FUNC_11(VAR_6, VAR_5))
   VAR_8 |= VAR_3;
  FUNC_1(VAR_5, VAR_6, VAR_8, VAR_2);
  return 0;
 }
 return FUNC_8(VAR_7, VAR_6, VAR_5);
}
