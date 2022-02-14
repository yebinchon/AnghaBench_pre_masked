
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wt_status_change_data {int stagemask; int oid_index; int mode_index; int index_status; } ;
struct wt_status {int committable; int change; int pathspec; TYPE_1__* repo; } ;
struct string_list_item {struct wt_status_change_data* util; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int oid; int ce_mode; int name; } ;
struct TYPE_2__ {struct index_state* index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct index_state*,struct cache_entry const*,int *,int *) ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (int *,int *) ;
 struct string_list_item* FUNC_4 (int *,int ) ;
 struct wt_status_change_data* FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct wt_status *VAR_2)
{
 struct index_state *VAR_3 = VAR_2->repo->index;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->cache_nr; VAR_4++) {
  struct string_list_item *VAR_5;
  struct wt_status_change_data *VAR_6;
  const struct cache_entry *VAR_7 = VAR_3->cache[VAR_4];

  if (!FUNC_1(VAR_3, VAR_7, &VAR_2->pathspec, ((void*)0)))
   continue;
  if (FUNC_0(VAR_7))
   continue;
  VAR_5 = FUNC_4(&VAR_2->change, VAR_7->name);
  VAR_6 = VAR_5->util;
  if (!VAR_6) {
   VAR_6 = FUNC_5(1, sizeof(*VAR_6));
   VAR_5->util = VAR_6;
  }
  if (FUNC_2(VAR_7)) {
   VAR_6->index_status = VAR_1;
   VAR_6->stagemask |= (1 << (FUNC_2(VAR_7) - 1));





   VAR_2->committable = 1;
  } else {
   VAR_6->index_status = VAR_0;

   VAR_6->mode_index = VAR_7->ce_mode;
   FUNC_3(&VAR_6->oid_index, &VAR_7->oid);
   VAR_2->committable = 1;
  }
 }
}
