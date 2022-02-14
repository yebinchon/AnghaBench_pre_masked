
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct dm_block {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {int tm; } ;
struct dm_array_info {TYPE_1__ value_type; TYPE_2__ btree_info; } ;
struct array_block {int nr_entries; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dm_array_info*,struct array_block*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct dm_array_info*,int ,unsigned int,struct dm_block**,struct array_block**) ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (struct dm_array_info*,struct dm_block*) ;

int FUNC_8(struct dm_array_info *VAR_1, dm_block_t VAR_2,
         uint32_t VAR_3, void *VAR_4)
{
 int VAR_5;
 struct dm_block *VAR_6;
 struct array_block *VAR_7;
 size_t VAR_8;
 unsigned VAR_9, VAR_10;

 VAR_8 = FUNC_1(FUNC_2(VAR_1->btree_info.tm));
 VAR_10 = FUNC_0(VAR_1->value_type.size, VAR_8);

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3 / VAR_10, &VAR_6, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_9 = VAR_3 % VAR_10;
 if (VAR_9 >= FUNC_4(VAR_7->nr_entries))
  VAR_5 = -VAR_0;
 else
  FUNC_6(VAR_4, FUNC_3(VAR_1, VAR_7, VAR_9),
         VAR_1->value_type.size);

 FUNC_7(VAR_1, VAR_6);
 return VAR_5;
}
