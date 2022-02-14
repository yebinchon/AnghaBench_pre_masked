
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int es; int * buckets; } ;
struct entry {int hash_next; } ;


 int FUNC_0 (int ,struct entry*) ;

__attribute__((used)) static void FUNC_1(struct smq_hash_table *VAR_0, unsigned VAR_1, struct entry *VAR_2)
{
 VAR_2->hash_next = VAR_0->buckets[VAR_1];
 VAR_0->buckets[VAR_1] = FUNC_0(VAR_0->es, VAR_2);
}
