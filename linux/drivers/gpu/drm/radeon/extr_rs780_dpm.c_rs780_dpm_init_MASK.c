
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int ulBootUpUMAClock; int ulSystemConfig; int usMinNBVoltage; int usMaxNBVoltage; int usBootUpNBVoltage; int usNumberOfCyclesInPeriod; } ;
struct TYPE_10__ {int ucNumberOfCyclesInPeriod; int ucNumberOfCyclesInPeriodHi; int ucMaxNBVoltage; int ucMaxNBVoltageHigh; int ucMinNBVoltage; int ucMinNBVoltageHigh; int usK8MemoryClock; int usInterNBVoltageHigh; int usInterNBVoltageLow; void* ucStartingPWM_HighTime; } ;
union igp_info {TYPE_5__ info_2; TYPE_4__ info; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_9__ {TYPE_6__* atom_context; } ;
struct TYPE_7__ {struct igp_power_info* priv; } ;
struct TYPE_8__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_3__ mode_info; TYPE_2__ pm; } ;
struct igp_power_info {int voltage_control; int gfx_clock_gating; int num_of_cycles_in_period; int invert_pwm_required; int max_voltage; int min_voltage; int bootup_uma_clk; int system_config; int pwm_voltage_control; void* boot_voltage; void* inter_voltage_high; void* inter_voltage_low; } ;
struct TYPE_12__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int,int *,int*,int*,scalar_t__*) ;
 struct igp_power_info* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_5)
{
 struct igp_power_info *VAR_6;
 int VAR_7 = FUNC_1(VAR_0, VAR_4);
 union igp_info *VAR_8;
 u16 VAR_9;
 u8 VAR_10, VAR_11;
 int VAR_12;

 VAR_6 = FUNC_3(sizeof(struct igp_power_info), VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_2;
 VAR_5->pm.dpm.priv = VAR_6;

 VAR_12 = FUNC_6(VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_6->voltage_control = 0;
 VAR_6->gfx_clock_gating = 1;

 if (FUNC_2(VAR_5->mode_info.atom_context, VAR_7, ((void*)0),
       &VAR_10, &VAR_11, &VAR_9)) {
  VAR_8 = (union igp_info *)(VAR_5->mode_info.atom_context->bios + VAR_9);


  switch (VAR_11) {
  case 1:
   VAR_6->num_of_cycles_in_period =
    VAR_8->info.ucNumberOfCyclesInPeriod;
   VAR_6->num_of_cycles_in_period |=
    VAR_8->info.ucNumberOfCyclesInPeriodHi << 8;
   VAR_6->invert_pwm_required =
    (VAR_6->num_of_cycles_in_period & 0x8000) ? 1 : 0;
   VAR_6->boot_voltage = VAR_8->info.ucStartingPWM_HighTime;
   VAR_6->max_voltage = VAR_8->info.ucMaxNBVoltage;
   VAR_6->max_voltage |= VAR_8->info.ucMaxNBVoltageHigh << 8;
   VAR_6->min_voltage = VAR_8->info.ucMinNBVoltage;
   VAR_6->min_voltage |= VAR_8->info.ucMinNBVoltageHigh << 8;
   VAR_6->inter_voltage_low =
    FUNC_4(VAR_8->info.usInterNBVoltageLow);
   VAR_6->inter_voltage_high =
    FUNC_4(VAR_8->info.usInterNBVoltageHigh);
   VAR_6->voltage_control = 1;
   VAR_6->bootup_uma_clk = VAR_8->info.usK8MemoryClock * 100;
   break;
  case 2:
   VAR_6->num_of_cycles_in_period =
    FUNC_4(VAR_8->info_2.usNumberOfCyclesInPeriod);
   VAR_6->invert_pwm_required =
    (VAR_6->num_of_cycles_in_period & 0x8000) ? 1 : 0;
   VAR_6->boot_voltage =
    FUNC_4(VAR_8->info_2.usBootUpNBVoltage);
   VAR_6->max_voltage =
    FUNC_4(VAR_8->info_2.usMaxNBVoltage);
   VAR_6->min_voltage =
    FUNC_4(VAR_8->info_2.usMinNBVoltage);
   VAR_6->system_config =
    FUNC_5(VAR_8->info_2.ulSystemConfig);
   VAR_6->pwm_voltage_control =
    (VAR_6->system_config & 0x4) ? 1 : 0;
   VAR_6->voltage_control = 1;
   VAR_6->bootup_uma_clk = FUNC_5(VAR_8->info_2.ulBootUpUMAClock);
   break;
  default:
   FUNC_0("No integrated system info for your GPU\n");
   return -VAR_1;
  }
  if (VAR_6->min_voltage > VAR_6->max_voltage)
   VAR_6->voltage_control = 0;
  if (VAR_6->pwm_voltage_control) {
   if ((VAR_6->num_of_cycles_in_period == 0) ||
       (VAR_6->max_voltage == 0) ||
       (VAR_6->min_voltage == 0))
    VAR_6->voltage_control = 0;
  } else {
   if ((VAR_6->num_of_cycles_in_period == 0) ||
       (VAR_6->max_voltage == 0))
    VAR_6->voltage_control = 0;
  }

  return 0;
 }
 FUNC_7(VAR_5);
 return -VAR_1;
}
