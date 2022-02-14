
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int * buckets; } ;
struct entry {int hash_next; } ;



__attribute__((used)) static void FUNC_0(struct smq_hash_table *VAR_0, unsigned VAR_1,
         struct entry *VAR_2, struct entry *VAR_3)
{
 if (VAR_3)
  VAR_3->hash_next = VAR_2->hash_next;
 else
  VAR_0->buckets[VAR_1] = VAR_2->hash_next;
}
