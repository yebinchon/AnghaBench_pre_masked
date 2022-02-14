
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int hash_bits; } ;
struct entry {int oblock; } ;


 struct entry* FUNC_0 (struct smq_hash_table*,unsigned int,int ,struct entry**) ;
 int FUNC_1 (struct smq_hash_table*,unsigned int,struct entry*,struct entry*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct smq_hash_table *VAR_0, struct entry *VAR_1)
{
 unsigned VAR_2 = FUNC_3(FUNC_2(VAR_1->oblock), VAR_0->hash_bits);
 struct entry *VAR_3;





 VAR_1 = FUNC_0(VAR_0, VAR_2, VAR_1->oblock, &VAR_3);
 if (VAR_1)
  FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3);
}
