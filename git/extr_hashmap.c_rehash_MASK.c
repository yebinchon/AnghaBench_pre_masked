
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {struct hashmap_entry* next; } ;
struct hashmap {unsigned int tablesize; struct hashmap_entry** table; } ;


 int FUNC_0 (struct hashmap*,unsigned int) ;
 unsigned int FUNC_1 (struct hashmap*,struct hashmap_entry*) ;
 int FUNC_2 (struct hashmap_entry**) ;

__attribute__((used)) static void FUNC_3(struct hashmap *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3 = VAR_0->tablesize;
 struct hashmap_entry **VAR_4 = VAR_0->table;

 FUNC_0(VAR_0, VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct hashmap_entry *VAR_5 = VAR_4[VAR_2];
  while (VAR_5) {
   struct hashmap_entry *VAR_6 = VAR_5->next;
   unsigned int VAR_7 = FUNC_1(VAR_0, VAR_5);
   VAR_5->next = VAR_0->table[VAR_7];
   VAR_0->table[VAR_7] = VAR_5;
   VAR_5 = VAR_6;
  }
 }
 FUNC_2(VAR_4);
}
