
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct split_index {int saved_cache_nr; struct cache_entry** saved_cache; TYPE_1__* base; void* replace_bitmap; void* delete_bitmap; } ;
struct index_state {int cache_nr; int drop_cache_tree; struct cache_entry** cache; } ;
struct cache_entry {int index; int ce_flags; scalar_t__ ce_namelen; int oid; int name; } ;
struct TYPE_2__ {int cache_nr; struct cache_entry** cache; } ;


 int FUNC_0 (struct cache_entry**,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cache_entry*) ;
 scalar_t__ FUNC_4 (struct cache_entry*,struct cache_entry*) ;
 int FUNC_5 (struct cache_entry*) ;
 void* FUNC_6 () ;
 int FUNC_7 (void*,int) ;
 struct split_index* FUNC_8 (struct index_state*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct index_state*,struct cache_entry*) ;
 scalar_t__ FUNC_11 (int ,int ) ;

void FUNC_12(struct index_state *VAR_4)
{
 struct split_index *VAR_5 = FUNC_8(VAR_4);
 struct cache_entry **VAR_6 = ((void*)0), *VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10 = 0;

 VAR_5->delete_bitmap = FUNC_6();
 VAR_5->replace_bitmap = FUNC_6();

 if (VAR_5->base) {







  for (VAR_8 = 0; VAR_8 < VAR_4->cache_nr; VAR_8++) {
   struct cache_entry *VAR_11;
   VAR_7 = VAR_4->cache[VAR_8];
   if (!VAR_7->index) {
    continue;
   }
   if (VAR_7->index > VAR_5->base->cache_nr) {
    FUNC_1("ce refers to a shared ce at %d, which is beyond the shared index size %d",
        VAR_7->index, VAR_5->base->cache_nr);
   }
   VAR_7->ce_flags |= VAR_0;
   VAR_11 = VAR_5->base->cache[VAR_7->index - 1];
   if (VAR_7 == VAR_11) {

    if (VAR_7->ce_flags & VAR_3) {
    } else if (!FUNC_3(VAR_7) &&
        FUNC_10(VAR_4, VAR_7)) {







     VAR_7->ce_flags |= VAR_3;
    } else {






    }
    continue;
   }
   if (VAR_7->ce_namelen != VAR_11->ce_namelen ||
       FUNC_11(VAR_7->name, VAR_11->name)) {
    VAR_7->index = 0;
    continue;
   }





   if (VAR_7->ce_flags & VAR_3) {
   } else if (!FUNC_3(VAR_7) &&
       FUNC_10(VAR_4, VAR_7)) {






    VAR_7->ce_flags |= VAR_3;
   } else {
    if (FUNC_4(VAR_7, VAR_11))
     VAR_7->ce_flags |= VAR_3;
   }
   FUNC_5(VAR_11);
   VAR_5->base->cache[VAR_7->index - 1] = VAR_7;
  }
  for (VAR_8 = 0; VAR_8 < VAR_5->base->cache_nr; VAR_8++) {
   VAR_7 = VAR_5->base->cache[VAR_8];
   if ((VAR_7->ce_flags & VAR_1) ||
       !(VAR_7->ce_flags & VAR_0))
    FUNC_7(VAR_5->delete_bitmap, VAR_8);
   else if (VAR_7->ce_flags & VAR_3) {
    FUNC_7(VAR_5->replace_bitmap, VAR_8);
    VAR_7->ce_flags |= VAR_2;
    FUNC_0(VAR_6, VAR_9+1, VAR_10);
    VAR_6[VAR_9++] = VAR_7;
   }
   if (FUNC_9(&VAR_7->oid))
    VAR_4->drop_cache_tree = 1;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->cache_nr; VAR_8++) {
  VAR_7 = VAR_4->cache[VAR_8];
  if ((!VAR_5->base || !VAR_7->index) && !(VAR_7->ce_flags & VAR_1)) {
   FUNC_2(!(VAR_7->ce_flags & VAR_2));
   FUNC_0(VAR_6, VAR_9+1, VAR_10);
   VAR_6[VAR_9++] = VAR_7;
  }
  VAR_7->ce_flags &= ~VAR_0;
 }





 VAR_5->saved_cache = VAR_4->cache;
 VAR_5->saved_cache_nr = VAR_4->cache_nr;
 VAR_4->cache = VAR_6;
 VAR_4->cache_nr = VAR_9;
}
