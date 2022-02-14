
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ thermal_active; } ;
struct TYPE_8__ {int mutex; TYPE_3__ dpm; } ;
struct radeon_device {int flags; TYPE_4__ pm; TYPE_2__* asic; } ;
struct drm_device {scalar_t__ switch_power_state; struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;
struct TYPE_5__ {scalar_t__ force_performance_level; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
             struct device_attribute *VAR_7,
             const char *VAR_8,
             size_t VAR_9)
{
 struct drm_device *VAR_10 = FUNC_0(VAR_6);
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 enum radeon_dpm_forced_level VAR_12;
 int VAR_13 = 0;


 if ((VAR_11->flags & VAR_5) &&
      (VAR_10->switch_power_state != VAR_0))
  return -VAR_1;

 FUNC_1(&VAR_11->pm.mutex);
 if (FUNC_5("low", VAR_8, FUNC_4("low")) == 0) {
  VAR_12 = VAR_4;
 } else if (FUNC_5("high", VAR_8, FUNC_4("high")) == 0) {
  VAR_12 = VAR_3;
 } else if (FUNC_5("auto", VAR_8, FUNC_4("auto")) == 0) {
  VAR_12 = VAR_2;
 } else {
  VAR_9 = -VAR_1;
  goto fail;
 }
 if (VAR_11->asic->dpm.force_performance_level) {
  if (VAR_11->pm.dpm.thermal_active) {
   VAR_9 = -VAR_1;
   goto fail;
  }
  VAR_13 = FUNC_3(VAR_11, VAR_12);
  if (VAR_13)
   VAR_9 = -VAR_1;
 }
fail:
 FUNC_2(&VAR_11->pm.mutex);

 return VAR_9;
}
