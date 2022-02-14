
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct radeon_ps {int caps; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; TYPE_7__* performance_levels; } ;
struct ni_power_info {int enable_power_containment; int enable_sq_ramping; } ;
struct evergreen_power_info {scalar_t__ dynamic_ac_timing; } ;
struct TYPE_11__ {scalar_t__ ACIndex; void* displayWatermark; scalar_t__ arbRefreshState; } ;
struct TYPE_10__ {int sclk; } ;
struct TYPE_9__ {scalar_t__ levelCount; TYPE_8__* levels; int flags; } ;
typedef TYPE_1__ NISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,TYPE_7__*,TYPE_8__*) ;
 struct ni_power_info* FUNC_3 (struct radeon_device*) ;
 struct ni_ps* FUNC_4 (struct radeon_ps*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;
 int FUNC_9 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_9,
      struct radeon_ps *VAR_10,
      NISLANDS_SMC_SWSTATE *VAR_11)
{
 struct evergreen_power_info *VAR_12 = FUNC_1(VAR_9);
 struct ni_power_info *VAR_13 = FUNC_3(VAR_9);
 struct ni_ps *VAR_14 = FUNC_4(VAR_10);
 int VAR_15, VAR_16;
 u32 VAR_17 = VAR_14->performance_levels[VAR_14->performance_level_count - 1].sclk * 100 / 100;

 if (!(VAR_10->caps & VAR_0))
  VAR_11->flags |= VAR_8;

 VAR_11->levelCount = 0;

 if (VAR_14->performance_level_count > VAR_3)
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_14->performance_level_count; VAR_15++) {
  VAR_16 = FUNC_2(VAR_9, &VAR_14->performance_levels[VAR_15],
          &VAR_11->levels[VAR_15]);
  VAR_11->levels[VAR_15].arbRefreshState =
   (u8)(VAR_2 + VAR_15);

  if (VAR_16)
   return VAR_16;

  if (VAR_13->enable_power_containment)
   VAR_11->levels[VAR_15].displayWatermark =
    (VAR_14->performance_levels[VAR_15].sclk < VAR_17) ?
    VAR_7 : VAR_6;
  else
   VAR_11->levels[VAR_15].displayWatermark = (VAR_15 < 2) ?
    VAR_7 : VAR_6;

  if (VAR_12->dynamic_ac_timing)
   VAR_11->levels[VAR_15].ACIndex = VAR_4 + VAR_15;
  else
   VAR_11->levels[VAR_15].ACIndex = 0;

  VAR_11->levelCount++;
 }

 FUNC_9(VAR_9, VAR_5,
          FUNC_0(VAR_17 / 512));

 FUNC_6(VAR_9, VAR_10, VAR_11);

 VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_11);
 if (VAR_16)
  VAR_13->enable_power_containment = 0;

 VAR_16 = FUNC_8(VAR_9, VAR_10, VAR_11);
 if (VAR_16)
  VAR_13->enable_sq_ramping = 0;

 return FUNC_7(VAR_9, VAR_10, VAR_11);
}
