
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct si_power_info {int sram_end; int fan_table_start; } ;
struct TYPE_5__ {int ucode_fan_control; int pwm_min; int t_med; int t_min; int t_high; int pwm_med; int pwm_high; int t_max; int t_hyst; int cycle_delay; } ;
struct TYPE_6__ {TYPE_1__ fan; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
typedef int fan_table ;
struct TYPE_8__ {scalar_t__ temp_src; void* fdo_max; int refresh_period; void* temp_resp_lim; void* hys_slope; void* hys_up; void* hys_down; void* fdo_min; void* slope2; void* slope1; void* temp_max; void* temp_med; void* temp_min; int member_0; } ;
typedef TYPE_4__ PP_SIslands_FanTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int ,int *,int,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 struct si_power_info* FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_7)
{
 struct si_power_info *VAR_8 = FUNC_7(VAR_7);
 PP_SIslands_FanTable VAR_9 = { VAR_2 };
 u32 VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u16 VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;
 u64 VAR_21;

 if (!VAR_8->fan_table_start) {
  VAR_7->pm.dpm.fan.ucode_fan_control = 0;
  return 0;
 }

 VAR_10 = (FUNC_1(VAR_0) & VAR_3) >> VAR_4;

 if (VAR_10 == 0) {
  VAR_7->pm.dpm.fan.ucode_fan_control = 0;
  return 0;
 }

 VAR_21 = (u64)VAR_7->pm.dpm.fan.pwm_min * VAR_10;
 FUNC_6(VAR_21, 10000);
 VAR_15 = (u16)VAR_21;

 VAR_11 = VAR_7->pm.dpm.fan.t_med - VAR_7->pm.dpm.fan.t_min;
 VAR_12 = VAR_7->pm.dpm.fan.t_high - VAR_7->pm.dpm.fan.t_med;

 VAR_13 = VAR_7->pm.dpm.fan.pwm_med - VAR_7->pm.dpm.fan.pwm_min;
 VAR_14 = VAR_7->pm.dpm.fan.pwm_high - VAR_7->pm.dpm.fan.pwm_med;

 VAR_16 = (u16)((50 + ((16 * VAR_10 * VAR_13) / VAR_11)) / 100);
 VAR_17 = (u16)((50 + ((16 * VAR_10 * VAR_14) / VAR_12)) / 100);

 VAR_9.temp_min = FUNC_4((50 + VAR_7->pm.dpm.fan.t_min) / 100);
 VAR_9.temp_med = FUNC_4((50 + VAR_7->pm.dpm.fan.t_med) / 100);
 VAR_9.temp_max = FUNC_4((50 + VAR_7->pm.dpm.fan.t_max) / 100);
 VAR_9.slope1 = FUNC_4(VAR_16);
 VAR_9.slope2 = FUNC_4(VAR_17);
 VAR_9.fdo_min = FUNC_4(VAR_15);
 VAR_9.hys_down = FUNC_4(VAR_7->pm.dpm.fan.t_hyst);
 VAR_9.hys_up = FUNC_4(1);
 VAR_9.hys_slope = FUNC_4(1);
 VAR_9.temp_resp_lim = FUNC_4(5);
 VAR_18 = FUNC_2(VAR_7);

 VAR_9.refresh_period = FUNC_5((VAR_7->pm.dpm.fan.cycle_delay *
      VAR_18) / 1600);
 VAR_9.fdo_max = FUNC_4((u16)VAR_10);

 VAR_19 = (FUNC_1(VAR_1) & VAR_5) >> VAR_6;
 VAR_9.temp_src = (uint8_t)VAR_19;

 VAR_20 = FUNC_3(VAR_7,
       VAR_8->fan_table_start,
       (u8 *)(&VAR_9),
       sizeof(VAR_9),
       VAR_8->sram_end);

 if (VAR_20) {
  FUNC_0("Failed to load fan table to the SMC.");
  VAR_7->pm.dpm.fan.ucode_fan_control = 0;
 }

 return VAR_20;
}
