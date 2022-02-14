
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_disp_clock_voltage_mapping_table {scalar_t__* display_clock_frequency; size_t num_max_voltage_levels; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ ulMaximumSupportedCLK; } ;
typedef TYPE_1__ ATOM_CLK_VOLT_CAPABILITY ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_1,
        struct sumo_disp_clock_voltage_mapping_table *VAR_2,
        ATOM_CLK_VOLT_CAPABILITY *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3[VAR_4].ulMaximumSupportedCLK == 0)
   break;

  VAR_2->display_clock_frequency[VAR_4] =
   VAR_3[VAR_4].ulMaximumSupportedCLK;
 }

 VAR_2->num_max_voltage_levels = VAR_4;

 if (VAR_2->num_max_voltage_levels == 0) {
  VAR_2->display_clock_frequency[0] = 80000;
  VAR_2->num_max_voltage_levels = 1;
 }
}
