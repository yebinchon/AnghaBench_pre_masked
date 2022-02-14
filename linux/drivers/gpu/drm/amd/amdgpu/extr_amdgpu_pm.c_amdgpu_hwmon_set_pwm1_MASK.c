
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* pp_funcs; } ;
struct amdgpu_device {int flags; TYPE_3__ powerplay; int smu; TYPE_1__* ddev; } ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ set_fan_speed_percent; } ;
struct TYPE_4__ {scalar_t__ switch_power_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__) ;
 struct amdgpu_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (char const*,int,scalar_t__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;


 if ((VAR_8->flags & VAR_1) &&
      (VAR_8->ddev->switch_power_state != VAR_2))
  return -VAR_3;
 if (FUNC_3(VAR_8))
  VAR_11 = FUNC_6(&VAR_8->smu);
 else
  VAR_11 = FUNC_0(VAR_8);
 if (VAR_11 != VAR_0) {
  FUNC_5("manual fan speed control should be enabled first\n");
  return -VAR_3;
 }

 VAR_9 = FUNC_4(VAR_6, 10, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_10 = (VAR_10 * 100) / 255;

 if (FUNC_3(VAR_8)) {
  VAR_9 = FUNC_7(&VAR_8->smu, VAR_10);
  if (VAR_9)
   return VAR_9;
 } else if (VAR_8->powerplay.pp_funcs->set_fan_speed_percent) {
  VAR_9 = FUNC_1(VAR_8, VAR_10);
  if (VAR_9)
   return VAR_9;
 }

 return VAR_7;
}
