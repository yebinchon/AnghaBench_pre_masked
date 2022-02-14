
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {struct hashmap_entry* next; } ;
struct hashmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct hashmap const*,struct hashmap_entry const*,struct hashmap_entry*,int *) ;

struct hashmap_entry *FUNC_1(const struct hashmap *VAR_0,
   const struct hashmap_entry *VAR_1)
{
 struct hashmap_entry *VAR_2 = VAR_1->next;
 for (; VAR_2; VAR_2 = VAR_2->next)
  if (FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0)))
   return VAR_2;
 return ((void*)0);
}
