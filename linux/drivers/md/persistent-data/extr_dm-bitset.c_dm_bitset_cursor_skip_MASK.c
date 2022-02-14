
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dm_bitset_cursor {int bit_index; scalar_t__ entries_remaining; scalar_t__ array_index; int current_bits; int cursor; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct dm_bitset_cursor *VAR_1, uint32_t VAR_2)
{
 int VAR_3;
 __le64 *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6 = 64 - VAR_1->bit_index;

 if (VAR_1->entries_remaining < VAR_2)
  return -VAR_0;

 if (VAR_2 < VAR_6) {
  VAR_1->bit_index += VAR_2;
  VAR_1->entries_remaining -= VAR_2;
  return 0;

 } else {
  VAR_1->entries_remaining -= VAR_6;
  VAR_2 -= VAR_6;
 }

 VAR_5 = (VAR_2 / 64) + 1;
 VAR_3 = FUNC_1(&VAR_1->cursor, VAR_5);
 if (VAR_3)
  return VAR_3;

 FUNC_0(&VAR_1->cursor, (void **) &VAR_4);
 VAR_1->entries_remaining -= VAR_2;
 VAR_1->array_index += VAR_5;
 VAR_1->bit_index = VAR_2 & 63;
 VAR_1->current_bits = FUNC_2(*VAR_4);

 return 0;
}
