
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
struct smu7_hwmgr {scalar_t__ mvdd_control; TYPE_4__ mvdd_voltage_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_8__ {TYPE_1__* Pattern; } ;
struct TYPE_11__ {size_t MvddLevelCount; int SmioMask2; int * Smio; TYPE_2__ SmioTable2; } ;
struct TYPE_9__ {int value; int smio_low; } ;
struct TYPE_7__ {scalar_t__ Smio; int Voltage; } ;
typedef TYPE_5__ SMU72_Discrete_DpmTable ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
   SMU72_Discrete_DpmTable *VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_2->backend);
 uint32_t VAR_5;

 if (VAR_0 == VAR_4->mvdd_control) {
  VAR_3->MvddLevelCount = VAR_4->mvdd_voltage_table.count;
  for (VAR_5 = 0; VAR_5 < VAR_3->MvddLevelCount; VAR_5++) {
   VAR_3->SmioTable2.Pattern[VAR_5].Voltage =
    FUNC_1(VAR_4->mvdd_voltage_table.entries[VAR_5].value * VAR_1);

   VAR_3->SmioTable2.Pattern[VAR_5].Smio =
    (uint8_t) VAR_5;
   VAR_3->Smio[VAR_5] |=
    VAR_4->mvdd_voltage_table.entries[VAR_5].smio_low;
  }
  VAR_3->SmioMask2 = VAR_4->mvdd_voltage_table.mask_low;

  FUNC_0(VAR_3->MvddLevelCount);
 }

 return 0;
}
