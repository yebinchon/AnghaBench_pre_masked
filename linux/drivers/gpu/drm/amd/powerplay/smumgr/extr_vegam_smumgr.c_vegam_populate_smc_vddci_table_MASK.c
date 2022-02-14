
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ count; int mask_low; TYPE_3__* entries; } ;
struct smu7_hwmgr {scalar_t__ vddci_control; TYPE_4__ vddci_voltage_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_6__ {TYPE_1__* Pattern; } ;
struct SMU75_Discrete_DpmTable {int SmioMask1; int * Smio; TYPE_2__ SmioTable1; } ;
struct TYPE_7__ {int value; int smio_low; } ;
struct TYPE_5__ {scalar_t__ Smio; int Voltage; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3,
     struct SMU75_Discrete_DpmTable *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 struct smu7_hwmgr *VAR_7 = (struct smu7_hwmgr *)(VAR_3->backend);

 VAR_5 = VAR_7->vddci_voltage_table.count;

 if (VAR_0 == VAR_7->vddci_control) {
  if (VAR_5 > VAR_1)
   VAR_5 = VAR_1;
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   VAR_4->SmioTable1.Pattern[VAR_6].Voltage = FUNC_0(
     VAR_7->vddci_voltage_table.entries[VAR_6].value * VAR_2);
   VAR_4->SmioTable1.Pattern[VAR_6].Smio = (uint8_t) VAR_6;

   VAR_4->Smio[VAR_6] |= VAR_7->vddci_voltage_table.entries[VAR_6].smio_low;
  }
 }

 VAR_4->SmioMask1 = VAR_7->vddci_voltage_table.mask_low;

 return 0;
}
