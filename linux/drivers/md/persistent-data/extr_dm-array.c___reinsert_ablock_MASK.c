
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_block {int dummy; } ;
struct TYPE_2__ {int tm; } ;
struct dm_array_info {TYPE_1__ btree_info; } ;
typedef scalar_t__ dm_block_t ;


 scalar_t__ FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct dm_array_info*,unsigned int,struct dm_block*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct dm_array_info *VAR_0, unsigned VAR_1,
        struct dm_block *VAR_2, dm_block_t VAR_3,
        dm_block_t *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(VAR_2) != VAR_3) {






  FUNC_1(VAR_0->btree_info.tm, VAR_3);
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
 }

 return VAR_5;
}
