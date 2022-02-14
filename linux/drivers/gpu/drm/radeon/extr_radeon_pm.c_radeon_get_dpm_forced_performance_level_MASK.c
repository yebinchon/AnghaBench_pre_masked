
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int forced_level; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {int flags; TYPE_2__ pm; } ;
struct drm_device {scalar_t__ switch_power_state; struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_5,
             struct device_attribute *VAR_6,
             char *VAR_7)
{
 struct drm_device *VAR_8 = FUNC_0(VAR_5);
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 enum radeon_dpm_forced_level VAR_10 = VAR_9->pm.dpm.forced_level;

 if ((VAR_9->flags & VAR_4) &&
      (VAR_8->switch_power_state != VAR_0))
  return FUNC_1(VAR_7, VAR_1, "off\n");

 return FUNC_1(VAR_7, VAR_1, "%s\n",
   (VAR_10 == VAR_2) ? "auto" :
   (VAR_10 == VAR_3) ? "low" : "high");
}
