
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {int* region_table; int region_table_entry_bits; } ;
typedef int region_table_slot_t ;


 int FUNC_0 (struct switch_ctx*,unsigned long,unsigned long*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(struct switch_ctx *VAR_0, unsigned long VAR_1,
          unsigned VAR_2)
{
 unsigned long VAR_3;
 unsigned VAR_4;
 region_table_slot_t VAR_5;

 FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_4);

 VAR_5 = VAR_0->region_table[VAR_3];
 VAR_5 &= ~((((region_table_slot_t)1 << VAR_0->region_table_entry_bits) - 1) << VAR_4);
 VAR_5 |= (region_table_slot_t)VAR_2 << VAR_4;
 VAR_0->region_table[VAR_3] = VAR_5;
}
