
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
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ count; int mask_low; TYPE_3__* entries; } ;
struct smu7_hwmgr {scalar_t__ mvdd_control; TYPE_4__ mvdd_voltage_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_8__ {TYPE_1__* Pattern; } ;
struct TYPE_11__ {scalar_t__ MvddLevelCount; int SmioMask2; int * Smio; TYPE_2__ SmioTable2; } ;
struct TYPE_9__ {int value; int smio_low; } ;
struct TYPE_7__ {scalar_t__ Smio; int Voltage; } ;
typedef TYPE_5__ SMU75_Discrete_DpmTable ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3,
   SMU75_Discrete_DpmTable *VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_3->backend);
 uint32_t VAR_6, VAR_7;

 if (VAR_0 == VAR_5->mvdd_control) {
  VAR_6 = VAR_5->mvdd_voltage_table.count;
  if (VAR_6 > VAR_1)
   VAR_6 = VAR_1;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_4->SmioTable2.Pattern[VAR_7].Voltage = FUNC_1(
     VAR_5->mvdd_voltage_table.entries[VAR_7].value * VAR_2);

   VAR_4->SmioTable2.Pattern[VAR_7].Smio =
    (uint8_t) VAR_7;
   VAR_4->Smio[VAR_7] |=
    VAR_5->mvdd_voltage_table.entries[VAR_7].smio_low;
  }
  VAR_4->SmioMask2 = VAR_5->mvdd_voltage_table.mask_low;

  VAR_4->MvddLevelCount = (uint32_t) FUNC_0(VAR_6);
 }

 return 0;
}
