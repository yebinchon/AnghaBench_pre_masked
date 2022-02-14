
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int dummy; } ;
struct entry {scalar_t__ oblock; } ;
typedef scalar_t__ dm_oblock_t ;


 struct entry* FUNC_0 (struct smq_hash_table*,unsigned int) ;
 struct entry* FUNC_1 (struct smq_hash_table*,struct entry*) ;

__attribute__((used)) static struct entry *FUNC_2(struct smq_hash_table *VAR_0, unsigned VAR_1, dm_oblock_t VAR_2,
    struct entry **VAR_3)
{
 struct entry *VAR_4;

 *VAR_3 = ((void*)0);
 for (VAR_4 = FUNC_0(VAR_0, VAR_1); VAR_4; VAR_4 = FUNC_1(VAR_0, VAR_4)) {
  if (VAR_4->oblock == VAR_2)
   return VAR_4;

  *VAR_3 = VAR_4;
 }

 return ((void*)0);
}
