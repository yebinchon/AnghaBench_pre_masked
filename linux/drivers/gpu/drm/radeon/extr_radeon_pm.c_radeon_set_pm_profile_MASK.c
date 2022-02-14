
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_method; int mutex; int profile; } ;
struct radeon_device {int flags; TYPE_1__ pm; } ;
struct drm_device {scalar_t__ switch_power_state; struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_9,
         struct device_attribute *VAR_10,
         const char *VAR_11,
         size_t VAR_12)
{
 struct drm_device *VAR_13 = FUNC_0(VAR_9);
 struct radeon_device *VAR_14 = VAR_13->dev_private;


 if ((VAR_14->flags & VAR_8) &&
      (VAR_13->switch_power_state != VAR_0))
  return -VAR_1;

 FUNC_1(&VAR_14->pm.mutex);
 if (VAR_14->pm.pm_method == VAR_2) {
  if (FUNC_6("default", VAR_11, FUNC_5("default")) == 0)
   VAR_14->pm.profile = VAR_4;
  else if (FUNC_6("auto", VAR_11, FUNC_5("auto")) == 0)
   VAR_14->pm.profile = VAR_3;
  else if (FUNC_6("low", VAR_11, FUNC_5("low")) == 0)
   VAR_14->pm.profile = VAR_6;
  else if (FUNC_6("mid", VAR_11, FUNC_5("mid")) == 0)
   VAR_14->pm.profile = VAR_7;
  else if (FUNC_6("high", VAR_11, FUNC_5("high")) == 0)
   VAR_14->pm.profile = VAR_5;
  else {
   VAR_12 = -VAR_1;
   goto fail;
  }
  FUNC_4(VAR_14);
  FUNC_3(VAR_14);
 } else
  VAR_12 = -VAR_1;

fail:
 FUNC_2(&VAR_14->pm.mutex);

 return VAR_12;
}
