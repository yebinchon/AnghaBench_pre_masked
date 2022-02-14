
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct phm_clock_and_voltage_limits {unsigned long sclk; unsigned long mclk; unsigned long vddc; unsigned long vddci; } ;
struct TYPE_5__ {TYPE_1__* entries; } ;
struct TYPE_4__ {int usVddci; int usVddc; int usMclkLow; scalar_t__ ucMclkHigh; int usSclkLow; scalar_t__ ucSclkHigh; } ;
typedef TYPE_2__ ATOM_PPLIB_Clock_Voltage_Limit_Table ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
   struct phm_clock_and_voltage_limits *VAR_1,
   const ATOM_PPLIB_Clock_Voltage_Limit_Table *VAR_2)
{
 VAR_1->sclk = ((unsigned long)VAR_2->entries[0].ucSclkHigh << 16) |
   FUNC_0(VAR_2->entries[0].usSclkLow);
 VAR_1->mclk = ((unsigned long)VAR_2->entries[0].ucMclkHigh << 16) |
   FUNC_0(VAR_2->entries[0].usMclkLow);
 VAR_1->vddc = (unsigned long)FUNC_0(VAR_2->entries[0].usVddc);
 VAR_1->vddci = (unsigned long)FUNC_0(VAR_2->entries[0].usVddci);

 return 0;
}
