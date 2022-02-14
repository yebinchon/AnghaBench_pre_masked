
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_10__ {size_t count; int mask_low; TYPE_3__* entries; } ;
struct smu7_hwmgr {scalar_t__ vddci_control; TYPE_4__ vddci_voltage_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_8__ {TYPE_1__* Pattern; } ;
struct TYPE_11__ {size_t VddciLevelCount; int SmioMask1; void** VddciTable; int * Smio; TYPE_2__ SmioTable1; } ;
struct TYPE_9__ {int value; int smio_low; } ;
struct TYPE_7__ {scalar_t__ Smio; void* Voltage; } ;
typedef TYPE_5__ SMU72_Discrete_DpmTable ;


 int FUNC_0 (size_t) ;
 void* FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3,
   SMU72_Discrete_DpmTable *VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_3->backend);
 uint32_t VAR_6;

 VAR_4->VddciLevelCount = VAR_5->vddci_voltage_table.count;
 for (VAR_6 = 0; VAR_6 < VAR_4->VddciLevelCount; VAR_6++) {
  if (VAR_1 == VAR_5->vddci_control) {
   VAR_4->VddciTable[VAR_6] =
    FUNC_1(VAR_5->vddci_voltage_table.entries[VAR_6].value * VAR_2);
  } else if (VAR_0 == VAR_5->vddci_control) {
   VAR_4->SmioTable1.Pattern[VAR_6].Voltage =
    FUNC_1(VAR_5->vddci_voltage_table.entries[VAR_6].value * VAR_2);

   VAR_4->SmioTable1.Pattern[VAR_6].Smio =
    (uint8_t) VAR_6;
   VAR_4->Smio[VAR_6] |=
    VAR_5->vddci_voltage_table.entries[VAR_6].smio_low;
   VAR_4->VddciTable[VAR_6] =
    FUNC_1(VAR_5->vddci_voltage_table.entries[VAR_6].value * VAR_2);
  }
 }

 VAR_4->SmioMask1 = VAR_5->vddci_voltage_table.mask_low;
 FUNC_0(VAR_4->VddciLevelCount);

 return 0;
}
