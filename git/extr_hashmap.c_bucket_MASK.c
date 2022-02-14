
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {int hash; } ;
struct hashmap {int tablesize; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct hashmap *VAR_0,
  const struct hashmap_entry *VAR_1)
{
 return VAR_1->hash & (VAR_0->tablesize - 1);
}
