
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_method; int dynpm_idle_work; int mutex; int dynpm_planned_action; int dynpm_state; } ;
struct radeon_device {int flags; TYPE_1__ pm; } ;
struct drm_device {scalar_t__ switch_power_state; struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_10,
        struct device_attribute *VAR_11,
        const char *VAR_12,
        size_t VAR_13)
{
 struct drm_device *VAR_14 = FUNC_1(VAR_10);
 struct radeon_device *VAR_15 = VAR_14->dev_private;


 if ((VAR_15->flags & VAR_9) &&
      (VAR_14->switch_power_state != VAR_0)) {
  VAR_13 = -VAR_5;
  goto fail;
 }


 if (VAR_15->pm.pm_method == VAR_6) {
  VAR_13 = -VAR_5;
  goto fail;
 }

 if (FUNC_6("dynpm", VAR_12, FUNC_5("dynpm")) == 0) {
  FUNC_2(&VAR_15->pm.mutex);
  VAR_15->pm.pm_method = VAR_7;
  VAR_15->pm.dynpm_state = VAR_4;
  VAR_15->pm.dynpm_planned_action = VAR_1;
  FUNC_3(&VAR_15->pm.mutex);
 } else if (FUNC_6("profile", VAR_12, FUNC_5("profile")) == 0) {
  FUNC_2(&VAR_15->pm.mutex);

  VAR_15->pm.dynpm_state = VAR_3;
  VAR_15->pm.dynpm_planned_action = VAR_2;
  VAR_15->pm.pm_method = VAR_8;
  FUNC_3(&VAR_15->pm.mutex);
  FUNC_0(&VAR_15->pm.dynpm_idle_work);
 } else {
  VAR_13 = -VAR_5;
  goto fail;
 }
 FUNC_4(VAR_15);
fail:
 return VAR_13;
}
