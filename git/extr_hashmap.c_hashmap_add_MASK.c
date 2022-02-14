
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {struct hashmap_entry* next; } ;
struct hashmap {scalar_t__ private_size; scalar_t__ grow_at; int tablesize; scalar_t__ do_count_items; struct hashmap_entry** table; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hashmap*,struct hashmap_entry*) ;
 int FUNC_1 (struct hashmap*,int) ;

void FUNC_2(struct hashmap *VAR_1, struct hashmap_entry *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1, VAR_2);


 VAR_2->next = VAR_1->table[VAR_3];
 VAR_1->table[VAR_3] = VAR_2;


 if (VAR_1->do_count_items) {
  VAR_1->private_size++;
  if (VAR_1->private_size > VAR_1->grow_at)
   FUNC_1(VAR_1, VAR_1->tablesize << VAR_0);
 }
}
