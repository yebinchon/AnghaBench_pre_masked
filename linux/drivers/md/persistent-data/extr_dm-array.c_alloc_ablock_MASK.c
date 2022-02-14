
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dm_block {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {int tm; } ;
struct dm_array_info {TYPE_1__ value_type; TYPE_2__ btree_info; } ;
struct array_block {void* value_size; void* nr_entries; void* max_entries; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct array_block* FUNC_1 (struct dm_block*) ;
 int FUNC_2 (int ,int *,struct dm_block**) ;

__attribute__((used)) static int FUNC_3(struct dm_array_info *VAR_1, size_t VAR_2,
   uint32_t VAR_3,
   struct dm_block **VAR_4, struct array_block **VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1->btree_info.tm, &VAR_0, VAR_4);
 if (VAR_6)
  return VAR_6;

 (*VAR_5) = FUNC_1(*VAR_4);
 (*VAR_5)->max_entries = FUNC_0(VAR_3);
 (*VAR_5)->nr_entries = FUNC_0(0);
 (*VAR_5)->value_size = FUNC_0(VAR_1->value_type.size);

 return 0;
}
