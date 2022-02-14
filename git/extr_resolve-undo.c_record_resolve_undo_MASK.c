
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct resolve_undo_info* util; } ;
struct string_list {int strdup_strings; } ;
struct resolve_undo_info {int * mode; int * oid; } ;
struct index_state {struct string_list* resolve_undo; } ;
struct cache_entry {int ce_mode; int oid; int name; } ;


 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (int *,int *) ;
 struct string_list_item* FUNC_2 (struct string_list*,int ) ;
 void* FUNC_3 (int,int) ;

void FUNC_4(struct index_state *VAR_0, struct cache_entry *VAR_1)
{
 struct string_list_item *VAR_2;
 struct resolve_undo_info *VAR_3;
 struct string_list *VAR_4;
 int VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5)
  return;

 if (!VAR_0->resolve_undo) {
  VAR_4 = FUNC_3(1, sizeof(*VAR_4));
  VAR_4->strdup_strings = 1;
  VAR_0->resolve_undo = VAR_4;
 }
 VAR_4 = VAR_0->resolve_undo;
 VAR_2 = FUNC_2(VAR_4, VAR_1->name);
 if (!VAR_2->util)
  VAR_2->util = FUNC_3(1, sizeof(*VAR_3));
 VAR_3 = VAR_2->util;
 FUNC_1(&VAR_3->oid[VAR_5 - 1], &VAR_1->oid);
 VAR_3->mode[VAR_5 - 1] = VAR_1->ce_mode;
}
