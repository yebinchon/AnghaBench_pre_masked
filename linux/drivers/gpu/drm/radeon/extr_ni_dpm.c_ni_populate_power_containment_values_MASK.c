
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rv7xx_power_info {int sram_end; scalar_t__ state_table_start; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_8__ {int tdp_adjustment; } ;
struct TYPE_9__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct ni_ps {int performance_level_count; TYPE_3__* performance_levels; } ;
struct ni_power_info {int enable_power_containment; } ;
struct evergreen_power_info {scalar_t__ uvd_enabled; } ;
struct TYPE_13__ {int levelCount; TYPE_5__* levels; } ;
struct TYPE_11__ {int BelowSafeInc; int AboveSafeInc; int NearTDPDec; scalar_t__ MaxPS; } ;
struct TYPE_12__ {int stateFlags; TYPE_4__ dpm2; } ;
struct TYPE_10__ {int sclk; } ;
typedef TYPE_6__ NISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int,int ,int*,int*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*,int) ;
 struct ni_power_info* FUNC_3 (struct radeon_device*) ;
 struct ni_ps* FUNC_4 (struct radeon_ps*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 struct rv7xx_power_info* FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_12,
      struct radeon_ps *VAR_13,
      NISLANDS_SMC_SWSTATE *VAR_14)
{
 struct rv7xx_power_info *VAR_15 = FUNC_8(VAR_12);
 struct evergreen_power_info *VAR_16 = FUNC_0(VAR_12);
 struct ni_power_info *VAR_17 = FUNC_3(VAR_12);
 struct ni_ps *VAR_18 = FUNC_4(VAR_13);
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22, VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u8 VAR_27;

 if (VAR_17->enable_power_containment == 0)
  return 0;

 if (VAR_18->performance_level_count == 0)
  return -VAR_0;

 if (VAR_14->levelCount != VAR_18->performance_level_count)
  return -VAR_0;

 VAR_23 = FUNC_1(VAR_12,
            0,
            VAR_12->pm.dpm.tdp_adjustment,
            &VAR_24,
            &VAR_25);
 if (VAR_23)
  return VAR_23;

 VAR_26 = FUNC_2(VAR_12, VAR_13, VAR_25);

 VAR_23 = FUNC_9(VAR_12,
      VAR_15->state_table_start +
      FUNC_7(VAR_7, VAR_11) +
      FUNC_7(VAR_9, VAR_10),
      FUNC_6(VAR_26, FUNC_5(VAR_12)),
      VAR_15->sram_end);
 if (VAR_23)
  VAR_26 = 0;

 VAR_14->levels[0].dpm2.MaxPS = 0;
 VAR_14->levels[0].dpm2.NearTDPDec = 0;
 VAR_14->levels[0].dpm2.AboveSafeInc = 0;
 VAR_14->levels[0].dpm2.BelowSafeInc = 0;
 VAR_14->levels[0].stateFlags |= VAR_26 ? VAR_8 : 0;

 for (VAR_22 = 1; VAR_22 < VAR_18->performance_level_count; VAR_22++) {
  VAR_19 = VAR_18->performance_levels[VAR_22-1].sclk;
  VAR_20 = VAR_18->performance_levels[VAR_22].sclk;
  VAR_27 = (VAR_22 != (VAR_18->performance_level_count - 1)) ?
   VAR_4 : VAR_3;

  if (VAR_20 < VAR_19)
   return -VAR_0;

  if ((VAR_27 == 0) || (VAR_19 == VAR_20) || VAR_16->uvd_enabled)
   VAR_21 = VAR_20;
  else if (1 == VAR_22)
   VAR_21 = VAR_19;
  else
   VAR_21 = (VAR_19 * (u32)VAR_27) / 100;

  if (VAR_21 < VAR_18->performance_levels[0].sclk)
   VAR_21 = VAR_18->performance_levels[0].sclk;

  if (VAR_21 == 0)
   return -VAR_0;

  VAR_14->levels[VAR_22].dpm2.MaxPS =
   (u8)((VAR_5 * (VAR_20 - VAR_21)) / VAR_20);
  VAR_14->levels[VAR_22].dpm2.NearTDPDec = VAR_6;
  VAR_14->levels[VAR_22].dpm2.AboveSafeInc = VAR_1;
  VAR_14->levels[VAR_22].dpm2.BelowSafeInc = VAR_2;
  VAR_14->levels[VAR_22].stateFlags |=
   ((VAR_22 != (VAR_18->performance_level_count - 1)) && VAR_26) ?
   VAR_8 : 0;
 }

 return 0;
}
