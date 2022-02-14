
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int flags; TYPE_2__ powerplay; int smu; TYPE_3__* ddev; } ;
typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ switch_power_state; } ;
struct TYPE_4__ {int set_fan_control_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5,
         size_t VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;
 int VAR_9;


 if ((VAR_7->flags & VAR_0) &&
      (VAR_7->ddev->switch_power_state != VAR_1))
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_5, 10, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (FUNC_2(VAR_7)) {
  FUNC_4(&VAR_7->smu, VAR_9);
 } else {
  if (!VAR_7->powerplay.pp_funcs->set_fan_control_mode)
   return -VAR_2;

  FUNC_0(VAR_7, VAR_9);
 }

 return VAR_6;
}
