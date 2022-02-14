
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct pp_hwmgr {int dummy; } ;
struct phm_cac_tdp_table {int usMaximumPowerDeliveryLimit; void* usHighCACLeakage; void* usLowCACLeakage; void* usSmallPowerLimit; void* usBatteryPowerLimit; void* usTDC; void* usConfigurableTDP; void* usTDP; } ;
struct TYPE_3__ {int usHighCACLeakage; int usLowCACLeakage; int usSmallPowerLimit; int usBatteryPowerLimit; int usTDC; int usConfigurableTDP; int usTDP; } ;
typedef TYPE_1__ ATOM_PowerTune_Table ;


 int VAR_0 ;
 int VAR_1 ;
 struct phm_cac_tdp_table* FUNC_0 (unsigned long,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
    struct phm_cac_tdp_table **VAR_3,
    const ATOM_PowerTune_Table *VAR_4,
    uint16_t VAR_5)
{
 unsigned long VAR_6;
 struct phm_cac_tdp_table *VAR_7;

 VAR_6 = sizeof(unsigned long) + sizeof(struct phm_cac_tdp_table);

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_7->usTDP = FUNC_1(VAR_4->usTDP);
 VAR_7->usConfigurableTDP = FUNC_1(VAR_4->usConfigurableTDP);
 VAR_7->usTDC = FUNC_1(VAR_4->usTDC);
 VAR_7->usBatteryPowerLimit = FUNC_1(VAR_4->usBatteryPowerLimit);
 VAR_7->usSmallPowerLimit = FUNC_1(VAR_4->usSmallPowerLimit);
 VAR_7->usLowCACLeakage = FUNC_1(VAR_4->usLowCACLeakage);
 VAR_7->usHighCACLeakage = FUNC_1(VAR_4->usHighCACLeakage);
 VAR_7->usMaximumPowerDeliveryLimit = VAR_5;

 *VAR_3 = VAR_7;

 return 0;
}
