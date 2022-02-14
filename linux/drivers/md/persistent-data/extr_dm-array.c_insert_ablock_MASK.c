
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_block {int dummy; } ;
struct dm_array_info {int btree_info; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_block*) ;
 int FUNC_3 (int *,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct dm_array_info *VAR_0, uint64_t VAR_1,
    struct dm_block *VAR_2, dm_block_t *VAR_3)
{
 __le64 VAR_4 = FUNC_1(FUNC_2(VAR_2));

 FUNC_0(VAR_4);
 return FUNC_3(&VAR_0->btree_info, *VAR_3, &VAR_1, &VAR_4, VAR_3);
}
