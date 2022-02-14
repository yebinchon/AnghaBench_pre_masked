
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct si_ps {int performance_level_count; TYPE_7__* performance_levels; scalar_t__ dc_compatible; } ;
struct si_power_info {scalar_t__ sclk_deep_sleep_above_low; } ;
struct ni_power_info {int enable_power_containment; int enable_sq_ramping; } ;
struct evergreen_power_info {int uvd_enabled; scalar_t__ dynamic_ac_timing; scalar_t__ sclk_deep_sleep; scalar_t__ smu_uvd_hs; } ;
struct amdgpu_ps {scalar_t__ dclk; scalar_t__ vclk; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_11__ {scalar_t__ ACIndex; void* displayWatermark; scalar_t__ arbRefreshState; int stateFlags; } ;
struct TYPE_10__ {int sclk; } ;
struct TYPE_9__ {scalar_t__ levelCount; TYPE_8__* levels; int flags; } ;
typedef TYPE_1__ SISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct evergreen_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct ni_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,TYPE_7__*,TYPE_8__*) ;
 struct si_power_info* FUNC_3 (struct amdgpu_device*) ;
 struct si_ps* FUNC_4 (struct amdgpu_ps*) ;
 int FUNC_5 (struct amdgpu_device*,struct amdgpu_ps*,TYPE_1__*) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_ps*,TYPE_1__*) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_ps*,TYPE_1__*) ;
 int FUNC_8 (struct amdgpu_device*,struct amdgpu_ps*,TYPE_1__*) ;
 int FUNC_9 (struct amdgpu_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_12,
      struct amdgpu_ps *VAR_13,
      SISLANDS_SMC_SWSTATE *VAR_14)
{
 struct evergreen_power_info *VAR_15 = FUNC_0(VAR_12);
 struct ni_power_info *VAR_16 = FUNC_1(VAR_12);
 struct si_power_info *VAR_17 = FUNC_3(VAR_12);
 struct si_ps *VAR_18 = FUNC_4(VAR_13);
 int VAR_19, VAR_20;
 u32 VAR_21;
 u32 VAR_22 = 1350;

 if (VAR_18->performance_level_count > VAR_9)
  return -VAR_0;

 VAR_21 = VAR_18->performance_levels[VAR_18->performance_level_count-1].sclk * 100 / 100;

 if (VAR_13->vclk && VAR_13->dclk) {
  VAR_15->uvd_enabled = 1;
  if (VAR_15->smu_uvd_hs)
   VAR_14->flags |= VAR_6;
 } else {
  VAR_15->uvd_enabled = 0;
 }

 if (VAR_18->dc_compatible)
  VAR_14->flags |= VAR_5;

 VAR_14->levelCount = 0;
 for (VAR_19 = 0; VAR_19 < VAR_18->performance_level_count; VAR_19++) {
  if (VAR_15->sclk_deep_sleep) {
   if ((VAR_19 == 0) || VAR_17->sclk_deep_sleep_above_low) {
    if (VAR_22 <= VAR_7)
     VAR_14->levels[VAR_19].stateFlags |= VAR_3;
    else
     VAR_14->levels[VAR_19].stateFlags |= VAR_4;
   }
  }

  VAR_20 = FUNC_2(VAR_12, &VAR_18->performance_levels[VAR_19],
          &VAR_14->levels[VAR_19]);
  VAR_14->levels[VAR_19].arbRefreshState =
   (u8)(VAR_8 + VAR_19);

  if (VAR_20)
   return VAR_20;

  if (VAR_16->enable_power_containment)
   VAR_14->levels[VAR_19].displayWatermark =
    (VAR_18->performance_levels[VAR_19].sclk < VAR_21) ?
    VAR_2 : VAR_1;
  else
   VAR_14->levels[VAR_19].displayWatermark = (VAR_19 < 2) ?
    VAR_2 : VAR_1;

  if (VAR_15->dynamic_ac_timing)
   VAR_14->levels[VAR_19].ACIndex = VAR_10 + VAR_19;
  else
   VAR_14->levels[VAR_19].ACIndex = 0;

  VAR_14->levelCount++;
 }

 FUNC_9(VAR_12,
       VAR_11,
       VAR_21 / 512);

 FUNC_6(VAR_12, VAR_13, VAR_14);

 VAR_20 = FUNC_5(VAR_12, VAR_13, VAR_14);
 if (VAR_20)
  VAR_16->enable_power_containment = 0;

 VAR_20 = FUNC_8(VAR_12, VAR_13, VAR_14);
 if (VAR_20)
  VAR_16->enable_sq_ramping = 0;

 return FUNC_7(VAR_12, VAR_13, VAR_14);
}
