
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashmap_iter {scalar_t__ tablepos; TYPE_1__* map; struct hashmap_entry* next; } ;
struct hashmap_entry {struct hashmap_entry* next; } ;
struct TYPE_2__ {scalar_t__ tablesize; struct hashmap_entry** table; } ;



struct hashmap_entry *FUNC_0(struct hashmap_iter *VAR_0)
{
 struct hashmap_entry *VAR_1 = VAR_0->next;
 for (;;) {
  if (VAR_1) {
   VAR_0->next = VAR_1->next;
   return VAR_1;
  }

  if (VAR_0->tablepos >= VAR_0->map->tablesize)
   return ((void*)0);

  VAR_1 = VAR_0->map->table[VAR_0->tablepos++];
 }
}
