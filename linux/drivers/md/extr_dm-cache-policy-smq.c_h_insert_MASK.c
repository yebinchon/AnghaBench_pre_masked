
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int hash_bits; } ;
struct entry {int oblock; } ;


 int FUNC_0 (struct smq_hash_table*,unsigned int,struct entry*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct smq_hash_table *VAR_0, struct entry *VAR_1)
{
 unsigned VAR_2 = FUNC_2(FUNC_1(VAR_1->oblock), VAR_0->hash_bits);
 FUNC_0(VAR_0, VAR_2, VAR_1);
}
