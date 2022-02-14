
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ps {int dummy; } ;
struct TYPE_8__ {scalar_t__ sq_ramping_threshold; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct ni_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct ni_power_info {int enable_sq_ramping; } ;
struct TYPE_11__ {int levelCount; TYPE_4__* levels; } ;
struct TYPE_10__ {void* SQPowerThrottle_2; void* SQPowerThrottle; } ;
struct TYPE_7__ {scalar_t__ sclk; } ;
typedef TYPE_5__ SISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_5 (int) ;
 struct ni_power_info* FUNC_6 (struct radeon_device*) ;
 struct ni_ps* FUNC_7 (struct radeon_ps*) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_16,
      struct radeon_ps *VAR_17,
      SISLANDS_SMC_SWSTATE *VAR_18)
{
 struct ni_power_info *VAR_19 = FUNC_6(VAR_16);
 struct ni_ps *VAR_20 = FUNC_7(VAR_17);
 u32 VAR_21, VAR_22;
 bool VAR_23 = VAR_19->enable_sq_ramping;
 int VAR_24;

 if (VAR_20->performance_level_count == 0)
  return -VAR_0;

 if (VAR_18->levelCount != VAR_20->performance_level_count)
  return -VAR_0;

 if (VAR_16->pm.dpm.sq_ramping_threshold == 0)
  return -VAR_0;

 if (VAR_10 > (VAR_5 >> VAR_6))
  VAR_23 = 0;

 if (VAR_12 > (VAR_7 >> VAR_8))
  VAR_23 = 0;

 if (VAR_11 > (VAR_3 >> VAR_4))
  VAR_23 = 0;

 if (VAR_13 > (VAR_14 >> VAR_15))
  VAR_23 = 0;

 if (VAR_9 > (VAR_1 >> VAR_2))
  VAR_23 = 0;

 for (VAR_24 = 0; VAR_24 < VAR_20->performance_level_count; VAR_24++) {
  VAR_21 = 0;
  VAR_22 = 0;

  if ((VAR_20->performance_levels[VAR_24].sclk >= VAR_16->pm.dpm.sq_ramping_threshold) &&
      VAR_23) {
   VAR_21 |= FUNC_1(VAR_10);
   VAR_21 |= FUNC_3(VAR_12);
   VAR_22 |= FUNC_2(VAR_11);
   VAR_22 |= FUNC_4(VAR_13);
   VAR_22 |= FUNC_0(VAR_9);
  } else {
   VAR_21 |= VAR_5 | VAR_7;
   VAR_22 |= VAR_3 | VAR_14 | VAR_1;
  }

  VAR_18->levels[VAR_24].SQPowerThrottle = FUNC_5(VAR_21);
  VAR_18->levels[VAR_24].SQPowerThrottle_2 = FUNC_5(VAR_22);
 }

 return 0;
}
