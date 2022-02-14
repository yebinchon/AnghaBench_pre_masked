
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_hash_table {int * buckets; int hash_bits; struct entry_space* es; } ;
struct entry_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct smq_hash_table *VAR_2, struct entry_space *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5, VAR_6;

 VAR_2->es = VAR_3;
 VAR_6 = FUNC_3(FUNC_2(VAR_4 / 4u, 16u));
 VAR_2->hash_bits = FUNC_0(VAR_6);

 VAR_2->buckets = FUNC_4(FUNC_1(VAR_6, sizeof(*VAR_2->buckets)));
 if (!VAR_2->buckets)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_2->buckets[VAR_5] = VAR_1;

 return 0;
}
