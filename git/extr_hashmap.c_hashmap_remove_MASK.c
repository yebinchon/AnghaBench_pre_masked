
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {struct hashmap_entry* next; } ;
struct hashmap {scalar_t__ private_size; scalar_t__ shrink_at; int tablesize; scalar_t__ do_count_items; } ;


 int VAR_0 ;
 struct hashmap_entry** FUNC_0 (struct hashmap*,struct hashmap_entry const*,void const*) ;
 int FUNC_1 (struct hashmap*,int) ;

struct hashmap_entry *FUNC_2(struct hashmap *VAR_1,
     const struct hashmap_entry *VAR_2,
     const void *VAR_3)
{
 struct hashmap_entry *VAR_4;
 struct hashmap_entry **VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!*VAR_5)
  return ((void*)0);


 VAR_4 = *VAR_5;
 *VAR_5 = VAR_4->next;
 VAR_4->next = ((void*)0);


 if (VAR_1->do_count_items) {
  VAR_1->private_size--;
  if (VAR_1->private_size < VAR_1->shrink_at)
   FUNC_1(VAR_1, VAR_1->tablesize >> VAR_0);
 }

 return VAR_4;
}
