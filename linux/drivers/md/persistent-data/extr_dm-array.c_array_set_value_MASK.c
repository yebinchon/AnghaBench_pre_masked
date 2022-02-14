
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct dm_btree_value_type {int size; int context; int (* inc ) (int ,void const*) ;int (* dec ) (int ,void*) ;int (* equal ) (int ,void*,void const*) ;} ;
struct dm_block {int dummy; } ;
struct TYPE_2__ {int tm; } ;
struct dm_array_info {struct dm_btree_value_type value_type; TYPE_1__ btree_info; } ;
struct array_block {int nr_entries; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct dm_array_info*,struct array_block*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (void*,void const*,int ) ;
 int FUNC_6 (struct dm_array_info*,int *,unsigned int,struct dm_block**,struct array_block**) ;
 int FUNC_7 (int ,void*,void const*) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (int ,void const*) ;
 int FUNC_10 (struct dm_array_info*,struct dm_block*) ;

__attribute__((used)) static int FUNC_11(struct dm_array_info *VAR_1, dm_block_t VAR_2,
      uint32_t VAR_3, const void *VAR_4, dm_block_t *VAR_5)
{
 int VAR_6;
 struct dm_block *VAR_7;
 struct array_block *VAR_8;
 size_t VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 void *VAR_12;
 struct dm_btree_value_type *VAR_13 = &VAR_1->value_type;

 VAR_9 = FUNC_1(FUNC_2(VAR_1->btree_info.tm));
 VAR_10 = FUNC_0(VAR_1->value_type.size, VAR_9);

 VAR_6 = FUNC_6(VAR_1, &VAR_2, VAR_3 / VAR_10, &VAR_7, &VAR_8);
 if (VAR_6)
  return VAR_6;
 *VAR_5 = VAR_2;

 VAR_11 = VAR_3 % VAR_10;
 if (VAR_11 >= FUNC_4(VAR_8->nr_entries)) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_3(VAR_1, VAR_8, VAR_11);
 if (VAR_13->dec &&
     (!VAR_13->equal || !VAR_13->equal(VAR_13->context, VAR_12, VAR_4))) {
  VAR_13->dec(VAR_13->context, VAR_12);
  if (VAR_13->inc)
   VAR_13->inc(VAR_13->context, VAR_4);
 }

 FUNC_5(VAR_12, VAR_4, VAR_1->value_type.size);

out:
 FUNC_10(VAR_1, VAR_7);
 return VAR_6;
}
