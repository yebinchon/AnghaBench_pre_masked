
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct resize {scalar_t__ max_entries; int root; void const* value; scalar_t__ new_nr_entries_in_last_block; scalar_t__ new_nr_full_blocks; scalar_t__ old_nr_entries_in_last_block; scalar_t__ old_nr_full_blocks; int size_of_block; struct dm_array_info* info; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int tm; } ;
struct dm_array_info {TYPE_2__ value_type; TYPE_1__ btree_info; } ;
typedef int dm_block_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct resize*) ;
 int FUNC_4 (struct resize*) ;
 int FUNC_5 (struct resize*) ;

__attribute__((used)) static int FUNC_6(struct dm_array_info *VAR_0, dm_block_t VAR_1,
   uint32_t VAR_2, uint32_t VAR_3,
   const void *VAR_4, dm_block_t *VAR_5)
{
 int VAR_6;
 struct resize VAR_7;

 if (VAR_2 == VAR_3) {
  *VAR_5 = VAR_1;
  return 0;
 }

 VAR_7.info = VAR_0;
 VAR_7.root = VAR_1;
 VAR_7.size_of_block = FUNC_1(FUNC_2(VAR_0->btree_info.tm));
 VAR_7.max_entries = FUNC_0(VAR_0->value_type.size,
           VAR_7.size_of_block);

 VAR_7.old_nr_full_blocks = VAR_2 / VAR_7.max_entries;
 VAR_7.old_nr_entries_in_last_block = VAR_2 % VAR_7.max_entries;
 VAR_7.new_nr_full_blocks = VAR_3 / VAR_7.max_entries;
 VAR_7.new_nr_entries_in_last_block = VAR_3 % VAR_7.max_entries;
 VAR_7.value = VAR_4;

 VAR_6 = ((VAR_3 > VAR_2) ? FUNC_3 : FUNC_4)(&VAR_7);
 if (VAR_6)
  return VAR_6;

 *VAR_5 = VAR_7.root;
 return 0;
}
