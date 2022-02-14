
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rv7xx_ps {int high; int medium; int low; } ;
struct radeon_ps {int caps; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ dynamic_ac_timing; } ;
struct TYPE_7__ {int ACIndex; int arbValue; } ;
struct TYPE_6__ {TYPE_5__* levels; int flags; } ;
typedef TYPE_1__ RV770_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct radeon_device*,int *,TYPE_5__*,int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_2 (struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_7,
           struct radeon_ps *VAR_8,
           RV770_SMC_SWSTATE *VAR_9)
{
 struct rv7xx_ps *VAR_10 = FUNC_2(VAR_8);
 struct evergreen_power_info *VAR_11 = FUNC_1(VAR_7);
 int VAR_12;

 if (!(VAR_8->caps & VAR_0))
  VAR_9->flags |= VAR_6;

 VAR_12 = FUNC_0(VAR_7,
       &VAR_10->low,
       &VAR_9->levels[0],
       VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_7,
       &VAR_10->medium,
       &VAR_9->levels[1],
       VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_7,
       &VAR_10->high,
       &VAR_9->levels[2],
       VAR_4);
 if (VAR_12)
  return VAR_12;

 VAR_9->levels[0].arbValue = VAR_1;
 VAR_9->levels[1].arbValue = VAR_2;
 VAR_9->levels[2].arbValue = VAR_3;

 if (VAR_11->dynamic_ac_timing) {
  VAR_9->levels[0].ACIndex = 2;
  VAR_9->levels[1].ACIndex = 3;
  VAR_9->levels[2].ACIndex = 4;
 } else {
  VAR_9->levels[0].ACIndex = 0;
  VAR_9->levels[1].ACIndex = 0;
  VAR_9->levels[2].ACIndex = 0;
 }

 FUNC_3(VAR_7, VAR_8, VAR_9);

 return FUNC_4(VAR_7, VAR_8, VAR_9);
}
