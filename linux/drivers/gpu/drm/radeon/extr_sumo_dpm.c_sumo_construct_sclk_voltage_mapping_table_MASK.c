
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_sclk_voltage_mapping_table {size_t num_max_dpm_entries; TYPE_1__* entries; } ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {size_t ulSupportedSCLK; int usVoltageIndex; } ;
struct TYPE_4__ {size_t sclk_frequency; int vid_2bit; } ;
typedef TYPE_2__ ATOM_AVAILABLE_SCLK_LIST ;


 size_t VAR_0 ;

void FUNC_0(struct radeon_device *VAR_1,
            struct sumo_sclk_voltage_mapping_table *VAR_2,
            ATOM_AVAILABLE_SCLK_LIST *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3[VAR_4].ulSupportedSCLK > VAR_6) {
   VAR_2->entries[VAR_5].sclk_frequency =
    VAR_3[VAR_4].ulSupportedSCLK;
   VAR_2->entries[VAR_5].vid_2bit =
    VAR_3[VAR_4].usVoltageIndex;
   VAR_6 = VAR_3[VAR_4].ulSupportedSCLK;
   VAR_5++;
  }
 }

 VAR_2->num_max_dpm_entries = VAR_5;
}
