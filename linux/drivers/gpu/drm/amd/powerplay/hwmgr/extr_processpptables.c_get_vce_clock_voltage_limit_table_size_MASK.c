
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_2__ {int numEntries; } ;
typedef TYPE_1__ ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table ;
typedef int ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record ;
typedef int ATOM_PPLIB_POWERPLAYTABLE ;


 scalar_t__ FUNC_0 (struct pp_hwmgr*,int const*) ;

__attribute__((used)) static uint16_t FUNC_1(struct pp_hwmgr *VAR_0,
       const ATOM_PPLIB_POWERPLAYTABLE *VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_0, VAR_1);
 uint16_t VAR_3 = 0;

 if (VAR_2 > 0) {
  const ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *VAR_4 =
   (const ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *)(((unsigned long) VAR_1) + VAR_2);

  VAR_3 = sizeof(uint8_t) + VAR_4->numEntries * sizeof(ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record);
 }
 return VAR_3;
}
