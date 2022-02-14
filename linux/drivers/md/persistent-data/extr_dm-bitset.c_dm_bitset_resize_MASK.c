
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_disk_bitset {int array_info; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct dm_disk_bitset *VAR_1, dm_block_t VAR_2,
       uint32_t VAR_3, uint32_t VAR_4,
       bool VAR_5, dm_block_t *VAR_6)
{
 uint32_t VAR_7 = FUNC_3(VAR_3, VAR_0);
 uint32_t VAR_8 = FUNC_3(VAR_4, VAR_0);
 __le64 VAR_9 = VAR_5 ? FUNC_1(~0) : FUNC_1(0);

 FUNC_0(&VAR_9);
 return FUNC_2(&VAR_1->array_info, VAR_2, VAR_7, VAR_8,
          &VAR_9, VAR_6);
}
