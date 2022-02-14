
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int hash_bits; } ;
struct entry {int dummy; } ;
typedef int dm_oblock_t ;


 int FUNC_0 (struct smq_hash_table*,unsigned int,struct entry*) ;
 struct entry* FUNC_1 (struct smq_hash_table*,unsigned int,int ,struct entry**) ;
 int FUNC_2 (struct smq_hash_table*,unsigned int,struct entry*,struct entry*) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct entry *FUNC_5(struct smq_hash_table *VAR_0, dm_oblock_t VAR_1)
{
 struct entry *VAR_2, *VAR_3;
 unsigned VAR_4 = FUNC_4(FUNC_3(VAR_1), VAR_0->hash_bits);

 VAR_2 = FUNC_1(VAR_0, VAR_4, VAR_1, &VAR_3);
 if (VAR_2 && VAR_3) {




  FUNC_2(VAR_0, VAR_4, VAR_2, VAR_3);
  FUNC_0(VAR_0, VAR_4, VAR_2);
 }

 return VAR_2;
}
