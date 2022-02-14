
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int head_idx; int nontrivial_merge; struct cache_entry const* const df_conflict_entry; scalar_t__ aggressive; } ;
struct cache_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry const*,struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_3 (struct cache_entry const*,struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_4 (struct cache_entry const*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_5 (struct cache_entry const*,struct cache_entry const*) ;
 int FUNC_6 (int ,char*,struct cache_entry const* const) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (struct cache_entry const*,int ,struct unpack_trees_options*) ;
 scalar_t__ FUNC_8 (struct cache_entry const*,struct unpack_trees_options*) ;

int FUNC_9(const struct cache_entry * const *VAR_2,
     struct unpack_trees_options *VAR_3)
{
 const struct cache_entry *VAR_4;
 const struct cache_entry *VAR_5;
 const struct cache_entry *VAR_6 = VAR_2[VAR_3->head_idx + 1];
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 int VAR_10 = 0;
 int VAR_11 = 0;

 int VAR_12 = 0;
 int VAR_13 = 1;
 int VAR_14;

 for (VAR_14 = 1; VAR_14 < VAR_3->head_idx; VAR_14++) {
  if (!VAR_2[VAR_14] || VAR_2[VAR_14] == VAR_3->df_conflict_entry)
   VAR_12 = 1;
  else
   VAR_13 = 0;
 }

 VAR_4 = VAR_2[0];
 VAR_5 = VAR_2[VAR_3->head_idx];

 if (VAR_5 == VAR_3->df_conflict_entry) {
  VAR_10 = 1;
  VAR_5 = ((void*)0);
 }

 if (VAR_6 == VAR_3->df_conflict_entry) {
  VAR_11 = 1;
  VAR_6 = ((void*)0);
 }





 if (!FUNC_5(VAR_6, VAR_5)) {
  for (VAR_14 = 1; VAR_14 < VAR_3->head_idx; VAR_14++) {
   if (FUNC_5(VAR_2[VAR_14], VAR_5)) {
    VAR_8 = VAR_14;
   }
   if (FUNC_5(VAR_2[VAR_14], VAR_6)) {
    VAR_9 = VAR_14;
   }
  }
 }







 if (VAR_6 && !VAR_10 && VAR_8 && !VAR_9) {
  if (VAR_4 && !FUNC_5(VAR_4, VAR_6) && !FUNC_5(VAR_4, VAR_5))
   return FUNC_4(VAR_4, VAR_3);
  return FUNC_3(VAR_6, VAR_4, VAR_3);
 }




 if (VAR_4 && !FUNC_5(VAR_4, VAR_5))
  return FUNC_4(VAR_4, VAR_3);

 if (VAR_5) {

  if (FUNC_5(VAR_5, VAR_6))
   return FUNC_3(VAR_5, VAR_4, VAR_3);

  if (!VAR_11 && VAR_9 && !VAR_8)
   return FUNC_3(VAR_5, VAR_4, VAR_3);
 }


 if (!VAR_5 && !VAR_6 && VAR_12)
  return 0;





 if (VAR_3->aggressive) {
  int VAR_15 = !VAR_5;
  int VAR_16 = !VAR_6;
  const struct cache_entry *VAR_17 = ((void*)0);

  if (VAR_4)
   VAR_17 = VAR_4;
  else if (VAR_5)
   VAR_17 = VAR_5;
  else if (VAR_6)
   VAR_17 = VAR_6;
  else {
   for (VAR_14 = 1; VAR_14 < VAR_3->head_idx; VAR_14++) {
    if (VAR_2[VAR_14] && VAR_2[VAR_14] != VAR_3->df_conflict_entry) {
     VAR_17 = VAR_2[VAR_14];
     break;
    }
   }
  }





  if ((VAR_15 && VAR_16) ||
      (VAR_15 && VAR_6 && VAR_9) ||
      (VAR_16 && VAR_5 && VAR_8)) {
   if (VAR_4)
    return FUNC_0(VAR_4, VAR_4, VAR_3);
   if (VAR_17 && !VAR_15) {
    if (FUNC_7(VAR_17, VAR_0, VAR_3))
     return -1;
   }
   return 0;
  }



  if (VAR_13 && VAR_5 && VAR_6 && FUNC_5(VAR_5, VAR_6))
   return FUNC_3(VAR_5, VAR_4, VAR_3);

 }





 if (VAR_4) {
  if (FUNC_8(VAR_4, VAR_3))
   return -1;
 }

 VAR_3->nontrivial_merge = 1;


 VAR_7 = 0;
 if (!VAR_8 || !VAR_9) {
  for (VAR_14 = 1; VAR_14 < VAR_3->head_idx; VAR_14++) {
   if (VAR_2[VAR_14] && VAR_2[VAR_14] != VAR_3->df_conflict_entry) {
    FUNC_2(VAR_2[VAR_14], VAR_3);
    VAR_7++;
    break;
   }
  }
 }







 if (VAR_5) { VAR_7 += FUNC_2(VAR_5, VAR_3); }
 if (VAR_6) { VAR_7 += FUNC_2(VAR_6, VAR_3); }
 return VAR_7;
}
