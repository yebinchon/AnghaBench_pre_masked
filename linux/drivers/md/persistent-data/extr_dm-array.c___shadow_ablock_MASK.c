
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_block {int dummy; } ;
struct TYPE_2__ {int tm; } ;
struct dm_array_info {TYPE_1__ btree_info; } ;
struct array_block {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 struct array_block* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ,int ,int *,struct dm_block**,int*) ;
 int FUNC_2 (struct dm_array_info*,struct array_block*) ;

__attribute__((used)) static int FUNC_3(struct dm_array_info *VAR_1, dm_block_t VAR_2,
      struct dm_block **VAR_3, struct array_block **VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_1(VAR_1->btree_info.tm, VAR_2,
       &VAR_0, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_4 = FUNC_0(*VAR_3);
 if (VAR_5)
  FUNC_2(VAR_1, *VAR_4);

 return 0;
}
