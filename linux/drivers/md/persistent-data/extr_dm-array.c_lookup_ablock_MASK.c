
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct dm_block {int dummy; } ;
struct dm_array_info {int btree_info; } ;
struct array_block {int dummy; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int FUNC_0 (int *,int ,unsigned int*,int *) ;
 int FUNC_1 (struct dm_array_info*,int ,struct dm_block**,struct array_block**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dm_array_info *VAR_0, dm_block_t VAR_1,
    unsigned VAR_2, struct dm_block **VAR_3,
    struct array_block **VAR_4)
{
 int VAR_5;
 uint64_t VAR_6 = VAR_2;
 __le64 VAR_7;

 VAR_5 = FUNC_0(&VAR_0->btree_info, VAR_1, &VAR_6, &VAR_7);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, FUNC_2(VAR_7), VAR_3, VAR_4);
}
