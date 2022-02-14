
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct si_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct ni_power_info {int enable_power_containment; } ;
struct evergreen_power_info {int vddc_voltage_table; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_9__ {int levelCount; TYPE_3__* levels; } ;
struct TYPE_7__ {int PwrEfficiencyRatio; int BelowSafeInc; int AboveSafeInc; int NearTDPDec; scalar_t__ MaxPS; } ;
struct TYPE_8__ {TYPE_2__ dpm2; } ;
struct TYPE_6__ {int sclk; int vddc; } ;
typedef int SISLANDS_SMC_VOLTAGE_VALUE ;
typedef TYPE_4__ SISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct amdgpu_device*) ;
 struct ni_power_info* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ) ;
 struct si_ps* FUNC_4 (struct amdgpu_ps*) ;
 int FUNC_5 (struct amdgpu_device*,int *,int *) ;
 int FUNC_6 (struct amdgpu_device*,int *,int ,int *) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_7,
      struct amdgpu_ps *VAR_8,
      SISLANDS_SMC_SWSTATE *VAR_9)
{
 struct evergreen_power_info *VAR_10 = FUNC_1(VAR_7);
 struct ni_power_info *VAR_11 = FUNC_2(VAR_7);
 struct si_ps *VAR_12 = FUNC_4(VAR_8);
 SISLANDS_SMC_VOLTAGE_VALUE VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 int VAR_19;
 u16 VAR_20;
 u8 VAR_21;
 bool VAR_22;
 int VAR_23;

 if (VAR_11->enable_power_containment == 0)
  return 0;

 if (VAR_12->performance_level_count == 0)
  return -VAR_0;

 if (VAR_9->levelCount != VAR_12->performance_level_count)
  return -VAR_0;

 VAR_22 = FUNC_7(VAR_7, VAR_8);

 VAR_9->levels[0].dpm2.MaxPS = 0;
 VAR_9->levels[0].dpm2.NearTDPDec = 0;
 VAR_9->levels[0].dpm2.AboveSafeInc = 0;
 VAR_9->levels[0].dpm2.BelowSafeInc = 0;
 VAR_9->levels[0].dpm2.PwrEfficiencyRatio = 0;

 for (VAR_19 = 1; VAR_19 < VAR_12->performance_level_count; VAR_19++) {
  VAR_14 = VAR_12->performance_levels[VAR_19-1].sclk;
  VAR_15 = VAR_12->performance_levels[VAR_19].sclk;
  if (VAR_19 == 1)
   VAR_21 = VAR_4;
  else
   VAR_21 = VAR_3;

  if (VAR_14 > VAR_15)
   return -VAR_0;

  if ((VAR_21 == 0) ||
      (VAR_14 == VAR_15) ||
      VAR_22)
   VAR_16 = VAR_15;
  else if (VAR_19 == 1)
   VAR_16 = VAR_14;
  else
   VAR_16 = (VAR_14 * (u32)VAR_21) / 100;

  if (VAR_16 < VAR_12->performance_levels[0].sclk)
   VAR_16 = VAR_12->performance_levels[0].sclk;

  if (VAR_16 == 0)
   return -VAR_0;

  VAR_23 = FUNC_6(VAR_7, &VAR_10->vddc_voltage_table,
      VAR_12->performance_levels[VAR_19-1].vddc, &VAR_13);
  if (VAR_23)
   return VAR_23;

  VAR_23 = FUNC_5(VAR_7, &VAR_13, &VAR_17);
  if (VAR_23)
   return VAR_23;

  VAR_23 = FUNC_6(VAR_7, &VAR_10->vddc_voltage_table,
      VAR_12->performance_levels[VAR_19].vddc, &VAR_13);
  if (VAR_23)
   return VAR_23;

  VAR_23 = FUNC_5(VAR_7, &VAR_13, &VAR_18);
  if (VAR_23)
   return VAR_23;

  VAR_20 = FUNC_3(VAR_7,
            VAR_17, VAR_18);

  VAR_9->levels[VAR_19].dpm2.MaxPS = (u8)((VAR_5 * (VAR_15 - VAR_16)) / VAR_15);
  VAR_9->levels[VAR_19].dpm2.NearTDPDec = VAR_6;
  VAR_9->levels[VAR_19].dpm2.AboveSafeInc = VAR_1;
  VAR_9->levels[VAR_19].dpm2.BelowSafeInc = VAR_2;
  VAR_9->levels[VAR_19].dpm2.PwrEfficiencyRatio = FUNC_0(VAR_20);
 }

 return 0;
}
