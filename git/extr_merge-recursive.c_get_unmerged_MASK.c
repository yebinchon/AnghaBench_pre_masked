
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {struct stage_data* util; } ;
struct string_list {int strdup_strings; } ;
struct stage_data {TYPE_1__* stages; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int oid; int ce_mode; int name; } ;
struct TYPE_2__ {int oid; int mode; } ;


 size_t FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int *,int *) ;
 struct string_list_item* FUNC_2 (struct string_list*,int ) ;
 struct string_list_item* FUNC_3 (struct string_list*,int ) ;
 void* FUNC_4 (int,int) ;

__attribute__((used)) static struct string_list *FUNC_5(struct index_state *VAR_0)
{
 struct string_list *VAR_1 = FUNC_4(1, sizeof(struct string_list));
 int VAR_2;

 VAR_1->strdup_strings = 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->cache_nr; VAR_2++) {
  struct string_list_item *VAR_3;
  struct stage_data *VAR_4;
  const struct cache_entry *VAR_5 = VAR_0->cache[VAR_2];
  if (!FUNC_0(VAR_5))
   continue;

  VAR_3 = FUNC_3(VAR_1, VAR_5->name);
  if (!VAR_3) {
   VAR_3 = FUNC_2(VAR_1, VAR_5->name);
   VAR_3->util = FUNC_4(1, sizeof(struct stage_data));
  }
  VAR_4 = VAR_3->util;
  VAR_4->stages[FUNC_0(VAR_5)].mode = VAR_5->ce_mode;
  FUNC_1(&VAR_4->stages[FUNC_0(VAR_5)].oid, &VAR_5->oid);
 }

 return VAR_1;
}
