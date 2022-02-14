
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {size_t num_entries; int valid_flag; size_t last; TYPE_2__* mc_reg_table_entry; } ;
struct evergreen_power_info {TYPE_1__ mc_reg_table; } ;
struct atom_memory_clock_range_table {size_t num_entries; int * mclk; } ;
struct TYPE_4__ {scalar_t__* mc_data; int mclk_max; } ;


 int FUNC_0 (struct radeon_device*,TYPE_2__*) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
            struct atom_memory_clock_range_table *VAR_1)
{
 struct evergreen_power_info *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_entries; VAR_3++) {
  VAR_2->mc_reg_table.mc_reg_table_entry[VAR_3].mclk_max =
   VAR_1->mclk[VAR_3];
  FUNC_2(VAR_0, VAR_1->mclk[VAR_3]);
  FUNC_0(VAR_0,
        &VAR_2->mc_reg_table.mc_reg_table_entry[VAR_3]);
 }

 VAR_2->mc_reg_table.num_entries = VAR_1->num_entries;
 VAR_2->mc_reg_table.valid_flag = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->mc_reg_table.last; VAR_3++) {
  for (VAR_4 = 1; VAR_4 < VAR_1->num_entries; VAR_4++) {
   if (VAR_2->mc_reg_table.mc_reg_table_entry[VAR_4-1].mc_data[VAR_3] !=
       VAR_2->mc_reg_table.mc_reg_table_entry[VAR_4].mc_data[VAR_3]) {
    VAR_2->mc_reg_table.valid_flag |= (1 << VAR_3);
    break;
   }
  }
 }
}
