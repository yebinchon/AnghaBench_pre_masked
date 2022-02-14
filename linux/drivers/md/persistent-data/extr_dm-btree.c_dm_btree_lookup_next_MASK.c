
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ro_spine {int dummy; } ;
struct dm_btree_info {unsigned int levels; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct ro_spine*,int ,scalar_t__,int ,scalar_t__*,int *,int) ;
 int FUNC_1 (struct dm_btree_info*,int ,scalar_t__,scalar_t__*,void*) ;
 int FUNC_2 (struct ro_spine*) ;
 int FUNC_3 (struct ro_spine*,struct dm_btree_info*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

int FUNC_5(struct dm_btree_info *VAR_2, dm_block_t VAR_3,
    uint64_t *VAR_4, uint64_t *VAR_5, void *VAR_6)
{
 unsigned VAR_7;
 int VAR_8 = -VAR_0;
 __le64 VAR_9;
 struct ro_spine VAR_10;

 FUNC_3(&VAR_10, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_2->levels - 1u; VAR_7++) {
  VAR_8 = FUNC_0(&VAR_10, VAR_3, VAR_4[VAR_7],
         VAR_1, VAR_5,
         &VAR_9, sizeof(uint64_t));
  if (VAR_8)
   goto out;

  if (*VAR_5 != VAR_4[VAR_7]) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_3 = FUNC_4(VAR_9);
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4[VAR_7], VAR_5, VAR_6);
out:
 FUNC_2(&VAR_10);
 return VAR_8;
}
