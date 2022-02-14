
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int value_fn ;
typedef unsigned int uint32_t ;
struct dm_block {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int tm; } ;
struct dm_array_info {TYPE_2__ value_type; TYPE_1__ btree_info; } ;
struct array_block {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_array_info*,unsigned int,unsigned int,struct dm_block**,struct array_block**) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct dm_array_info*,int *) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dm_array_info*,unsigned int,struct dm_block*,int *) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (struct dm_array_info*,struct array_block*,int ,void*,unsigned int,int ) ;
 int FUNC_9 (struct dm_array_info*,struct dm_block*) ;

int FUNC_10(struct dm_array_info *VAR_0, dm_block_t *VAR_1,
   uint32_t VAR_2, value_fn VAR_3, void *VAR_4)
{
 int VAR_5;
 struct dm_block *VAR_6;
 struct array_block *VAR_7;
 unsigned VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = FUNC_2(VAR_0, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_10 = FUNC_3(FUNC_5(VAR_0->btree_info.tm));
 VAR_11 = FUNC_1(VAR_0->value_type.size, VAR_10);
 VAR_9 = FUNC_4(VAR_2, VAR_11);

 for (VAR_8 = 0; VAR_8 != VAR_9; VAR_8++) {
  VAR_5 = FUNC_0(VAR_0, VAR_10, VAR_11, &VAR_6, &VAR_7);
  if (VAR_5)
   break;

  VAR_5 = FUNC_8(VAR_0, VAR_7, VAR_3, VAR_4,
      VAR_8 * VAR_11,
      FUNC_7(VAR_11, VAR_2));
  if (VAR_5) {
   FUNC_9(VAR_0, VAR_6);
   break;
  }

  VAR_5 = FUNC_6(VAR_0, VAR_8, VAR_6, VAR_1);
  FUNC_9(VAR_0, VAR_6);
  if (VAR_5)
   break;

  VAR_2 -= VAR_11;
 }

 return VAR_5;
}
