
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
struct TYPE_5__ {scalar_t__ set_fan_speed_rpm; } ;
struct TYPE_4__ {scalar_t__ switch_power_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__) ;
 struct amdgpu_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 struct amdgpu_device *VAR_9 = FUNC_2(VAR_5);
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (FUNC_3(VAR_9))
  VAR_12 = FUNC_5(&VAR_9->smu);
 else
  VAR_12 = FUNC_0(VAR_9);

 if (VAR_12 != VAR_0)
  return -VAR_4;


 if ((VAR_9->flags & VAR_1) &&
      (VAR_9->ddev->switch_power_state != VAR_2))
  return -VAR_3;

 VAR_10 = FUNC_4(VAR_7, 10, &VAR_11);
 if (VAR_10)
  return VAR_10;

 if (FUNC_3(VAR_9)) {
  VAR_10 = FUNC_6(&VAR_9->smu, VAR_11);
  if (VAR_10)
   return VAR_10;
 } else if (VAR_9->powerplay.pp_funcs->set_fan_speed_rpm) {
  VAR_10 = FUNC_1(VAR_9, VAR_11);
  if (VAR_10)
   return VAR_10;
 }

 return VAR_8;
}
