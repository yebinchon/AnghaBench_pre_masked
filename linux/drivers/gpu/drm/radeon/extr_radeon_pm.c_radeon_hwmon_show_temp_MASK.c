
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int flags; TYPE_2__* asic; struct drm_device* ddev; } ;
struct drm_device {scalar_t__ switch_power_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ get_temperature; } ;
struct TYPE_4__ {TYPE_1__ pm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct radeon_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
          struct device_attribute *VAR_5,
          char *VAR_6)
{
 struct radeon_device *VAR_7 = FUNC_0(VAR_4);
 struct drm_device *VAR_8 = VAR_7->ddev;
 int VAR_9;


 if ((VAR_7->flags & VAR_3) &&
      (VAR_8->switch_power_state != VAR_0))
  return -VAR_1;

 if (VAR_7->asic->pm.get_temperature)
  VAR_9 = FUNC_1(VAR_7);
 else
  VAR_9 = 0;

 return FUNC_2(VAR_6, VAR_2, "%d\n", VAR_9);
}
