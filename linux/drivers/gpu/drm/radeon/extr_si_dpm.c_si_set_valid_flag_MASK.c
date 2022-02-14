
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct si_mc_reg_table {int last; int num_entries; int valid_flag; TYPE_1__* mc_reg_table_entry; } ;
struct TYPE_2__ {scalar_t__* mc_data; } ;



__attribute__((used)) static void FUNC_0(struct si_mc_reg_table *VAR_0)
{
 u8 VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->last; VAR_1++) {
  for (VAR_2 = 1; VAR_2 < VAR_0->num_entries; VAR_2++) {
   if (VAR_0->mc_reg_table_entry[VAR_2-1].mc_data[VAR_1] != VAR_0->mc_reg_table_entry[VAR_2].mc_data[VAR_1]) {
    VAR_0->valid_flag |= 1 << VAR_1;
    break;
   }
  }
 }
}
