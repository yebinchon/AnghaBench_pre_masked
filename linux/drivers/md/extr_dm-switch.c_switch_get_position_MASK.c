
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {unsigned long region_entries_per_slot_bits; int region_entries_per_slot; unsigned int region_table_entry_bits; } ;



__attribute__((used)) static void FUNC_0(struct switch_ctx *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2, unsigned *VAR_3)
{
 if (VAR_0->region_entries_per_slot_bits >= 0) {
  *VAR_2 = VAR_1 >> VAR_0->region_entries_per_slot_bits;
  *VAR_3 = VAR_1 & (VAR_0->region_entries_per_slot - 1);
 } else {
  *VAR_2 = VAR_1 / VAR_0->region_entries_per_slot;
  *VAR_3 = VAR_1 % VAR_0->region_entries_per_slot;
 }

 *VAR_3 *= VAR_0->region_table_entry_bits;
}
