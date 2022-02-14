
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bitset_cursor {int current_bits; int bit_index; } ;


 int FUNC_0 (int ,unsigned long*) ;

bool FUNC_1(struct dm_bitset_cursor *VAR_0)
{
 return FUNC_0(VAR_0->bit_index, (unsigned long *) &VAR_0->current_bits);
}
