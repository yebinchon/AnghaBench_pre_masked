
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int es; } ;
struct entry {int hash_next; } ;


 struct entry* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct entry *FUNC_1(struct smq_hash_table *VAR_0, struct entry *VAR_1)
{
 return FUNC_0(VAR_0->es, VAR_1->hash_next);
}
