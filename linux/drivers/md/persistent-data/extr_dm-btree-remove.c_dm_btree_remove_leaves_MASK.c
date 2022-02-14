
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_btree_info {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_btree_info*,int ,int *,int ,int *,unsigned int*) ;

int FUNC_1(struct dm_btree_info *VAR_1, dm_block_t VAR_2,
      uint64_t *VAR_3, uint64_t VAR_4,
      dm_block_t *VAR_5, unsigned *VAR_6)
{
 int VAR_7;

 *VAR_6 = 0;
 do {
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_2, VAR_6);
  if (!VAR_7)
   (*VAR_6)++;
 } while (!VAR_7);

 *VAR_5 = VAR_2;
 return VAR_7 == -VAR_0 ? 0 : VAR_7;
}
