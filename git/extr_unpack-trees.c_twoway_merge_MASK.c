
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int merge_size; int initial_checkout; scalar_t__ reset; struct cache_entry const* df_conflict_entry; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry const*,struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_3 (struct cache_entry const*,struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_4 (struct cache_entry const*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_5 (struct cache_entry const*,struct cache_entry const*) ;

int FUNC_6(const struct cache_entry * const *VAR_1,
   struct unpack_trees_options *VAR_2)
{
 const struct cache_entry *VAR_3 = VAR_1[0];
 const struct cache_entry *VAR_4 = VAR_1[1];
 const struct cache_entry *VAR_5 = VAR_1[2];

 if (VAR_2->merge_size != 2)
  return FUNC_1("Cannot do a twoway merge of %d trees",
        VAR_2->merge_size);

 if (VAR_4 == VAR_2->df_conflict_entry)
  VAR_4 = ((void*)0);
 if (VAR_5 == VAR_2->df_conflict_entry)
  VAR_5 = ((void*)0);

 if (VAR_3) {
  if (VAR_3->ce_flags & VAR_0) {
   if (FUNC_5(VAR_4, VAR_5) || VAR_2->reset) {
    if (!VAR_5)
     return FUNC_0(VAR_3, VAR_3, VAR_2);
    else
     return FUNC_3(VAR_5, VAR_3, VAR_2);
   }
   return FUNC_4(VAR_3, VAR_2);
  } else if ((!VAR_4 && !VAR_5) ||
    (!VAR_4 && VAR_5 &&
     FUNC_5(VAR_3, VAR_5)) ||
    (VAR_4 && VAR_5 &&
     FUNC_5(VAR_4, VAR_5)) ||
    (VAR_4 && VAR_5 &&
     !FUNC_5(VAR_4, VAR_5) &&
     FUNC_5(VAR_3, VAR_5))) {
   return FUNC_2(VAR_3, VAR_2);
  } else if (VAR_4 && !VAR_5 && FUNC_5(VAR_3, VAR_4)) {

   return FUNC_0(VAR_4, VAR_3, VAR_2);
  } else if (VAR_4 && VAR_5 &&
    FUNC_5(VAR_3, VAR_4) && !FUNC_5(VAR_3, VAR_5)) {

   return FUNC_3(VAR_5, VAR_3, VAR_2);
  } else
   return FUNC_4(VAR_3, VAR_2);
 }
 else if (VAR_5) {
  if (VAR_4 && !VAR_2->initial_checkout) {



   if (FUNC_5(VAR_4, VAR_5))
    return 1;
   return FUNC_4(VAR_4, VAR_2);
  }
  return FUNC_3(VAR_5, VAR_3, VAR_2);
 }
 return FUNC_0(VAR_4, VAR_3, VAR_2);
}
