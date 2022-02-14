
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_state; } ;
struct TYPE_4__ {int mutex; TYPE_1__ dpm; } ;
struct radeon_device {int flags; TYPE_2__ pm; } ;
struct drm_device {scalar_t__ switch_power_state; struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
        struct device_attribute *VAR_7,
        const char *VAR_8,
        size_t VAR_9)
{
 struct drm_device *VAR_10 = FUNC_0(VAR_6);
 struct radeon_device *VAR_11 = VAR_10->dev_private;

 FUNC_1(&VAR_11->pm.mutex);
 if (FUNC_5("battery", VAR_8, FUNC_4("battery")) == 0)
  VAR_11->pm.dpm.user_state = VAR_3;
 else if (FUNC_5("balanced", VAR_8, FUNC_4("balanced")) == 0)
  VAR_11->pm.dpm.user_state = VAR_2;
 else if (FUNC_5("performance", VAR_8, FUNC_4("performance")) == 0)
  VAR_11->pm.dpm.user_state = VAR_4;
 else {
  FUNC_2(&VAR_11->pm.mutex);
  VAR_9 = -VAR_1;
  goto fail;
 }
 FUNC_2(&VAR_11->pm.mutex);


 if (!(VAR_11->flags & VAR_5) ||
     (VAR_10->switch_power_state == VAR_0))
  FUNC_3(VAR_11);

fail:
 return VAR_9;
}
