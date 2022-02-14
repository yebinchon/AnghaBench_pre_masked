
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_state; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum radeon_pm_state_type { ____Placeholder_radeon_pm_state_type } radeon_pm_state_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_0(VAR_3);
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 enum radeon_pm_state_type VAR_8 = VAR_7->pm.dpm.user_state;

 return FUNC_1(VAR_5, VAR_0, "%s\n",
   (VAR_8 == VAR_2) ? "battery" :
   (VAR_8 == VAR_1) ? "balanced" : "performance");
}
