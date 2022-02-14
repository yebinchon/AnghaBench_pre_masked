
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct phm_vce_clock_voltage_dependency_table {int count; TYPE_2__* entries; } ;
struct TYPE_10__ {TYPE_4__* entries; } ;
typedef TYPE_3__ VCEClockInfoArray ;
struct TYPE_11__ {int usECClkLow; scalar_t__ ucECClkHigh; int usEVClkLow; scalar_t__ ucEVClkHigh; } ;
typedef TYPE_4__ VCEClockInfo ;
struct TYPE_12__ {int numEntries; TYPE_1__* entries; } ;
struct TYPE_9__ {unsigned long v; unsigned long evclk; unsigned long ecclk; } ;
struct TYPE_8__ {size_t ucVCEClockInfoIndex; int usVoltage; } ;
typedef TYPE_5__ ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table ;


 int VAR_0 ;
 int VAR_1 ;
 struct phm_vce_clock_voltage_dependency_table* FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  struct phm_vce_clock_voltage_dependency_table **VAR_3,
  const ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *VAR_4,
  const VCEClockInfoArray *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 struct phm_vce_clock_voltage_dependency_table *VAR_8 = ((void*)0);

 VAR_6 = sizeof(unsigned long) +
   sizeof(struct phm_vce_clock_voltage_dependency_table)
   * VAR_4->numEntries;

 VAR_8 = FUNC_0(VAR_6, VAR_1);
 if (((void*)0) == VAR_8)
  return -VAR_0;

 VAR_8->count = VAR_4->numEntries;
 for (VAR_7 = 0; VAR_7 < VAR_4->numEntries; VAR_7++) {
  const VCEClockInfo *VAR_9 = &VAR_5->entries[VAR_4->entries[VAR_7].ucVCEClockInfoIndex];

  VAR_8->entries[VAR_7].v = (unsigned long)FUNC_1(VAR_4->entries[VAR_7].usVoltage);
  VAR_8->entries[VAR_7].evclk = ((unsigned long)VAR_9->ucEVClkHigh << 16)
     | FUNC_1(VAR_9->usEVClkLow);
  VAR_8->entries[VAR_7].ecclk = ((unsigned long)VAR_9->ucECClkHigh << 16)
     | FUNC_1(VAR_9->usECClkLow);
 }

 *VAR_3 = VAR_8;

 return 0;
}
