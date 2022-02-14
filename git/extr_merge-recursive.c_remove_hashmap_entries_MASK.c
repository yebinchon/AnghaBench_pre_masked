
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct hashmap {int dummy; } ;
struct dir_rename_entry {int ent; } ;
struct TYPE_2__ {struct dir_rename_entry* util; } ;


 int FUNC_0 (struct hashmap*,int *,int *) ;
 int FUNC_1 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_2(struct hashmap *VAR_0,
       struct string_list *VAR_1)
{
 int VAR_2;
 struct dir_rename_entry *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  VAR_3 = VAR_1->items[VAR_2].util;
  FUNC_0(VAR_0, &VAR_3->ent, ((void*)0));
 }
 FUNC_1(VAR_1, 0);
}
