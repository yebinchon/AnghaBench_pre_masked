
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int allowGnbSlow; scalar_t__ vce_wm; scalar_t__ display_wm; scalar_t__ numSIMDToPowerDown; scalar_t__ hysteresis_up; scalar_t__ forceNBPstate; scalar_t__ ssDividerIndex; scalar_t__ dsDividerIndex; scalar_t__ vddcIndex; int engineClock; } ;
struct TYPE_3__ {scalar_t__ bootup_nb_voltage_index; int bootup_engine_clock; } ;
struct smu8_hwmgr {TYPE_2__ boot_power_level; TYPE_1__ sys_info; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu8_hwmgr *VAR_1 = VAR_0->backend;

 VAR_1->boot_power_level.engineClock =
    VAR_1->sys_info.bootup_engine_clock;

 VAR_1->boot_power_level.vddcIndex =
   (uint8_t)VAR_1->sys_info.bootup_nb_voltage_index;

 VAR_1->boot_power_level.dsDividerIndex = 0;
 VAR_1->boot_power_level.ssDividerIndex = 0;
 VAR_1->boot_power_level.allowGnbSlow = 1;
 VAR_1->boot_power_level.forceNBPstate = 0;
 VAR_1->boot_power_level.hysteresis_up = 0;
 VAR_1->boot_power_level.numSIMDToPowerDown = 0;
 VAR_1->boot_power_level.display_wm = 0;
 VAR_1->boot_power_level.vce_wm = 0;

 return 0;
}
