
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {struct hashmap_entry* next; } ;
struct hashmap {struct hashmap_entry** table; } ;


 size_t FUNC_0 (struct hashmap const*,struct hashmap_entry const*) ;
 int FUNC_1 (struct hashmap const*,struct hashmap_entry*,struct hashmap_entry const*,void const*) ;

__attribute__((used)) static inline struct hashmap_entry **FUNC_2(const struct hashmap *VAR_0,
  const struct hashmap_entry *VAR_1, const void *VAR_2)
{
 struct hashmap_entry **VAR_3 = &VAR_0->table[FUNC_0(VAR_0, VAR_1)];
 while (*VAR_3 && !FUNC_1(VAR_0, *VAR_3, VAR_1, VAR_2))
  VAR_3 = &(*VAR_3)->next;
 return VAR_3;
}
