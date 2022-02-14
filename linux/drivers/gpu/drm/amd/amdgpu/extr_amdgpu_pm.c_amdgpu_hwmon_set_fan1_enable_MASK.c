
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int flags; TYPE_2__ powerplay; int smu; TYPE_3__* ddev; } ;
typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ switch_power_state; } ;
struct TYPE_4__ {int set_fan_control_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7,
         size_t VAR_8)
{
 struct amdgpu_device *VAR_9 = FUNC_1(VAR_5);
 int VAR_10;
 int VAR_11;
 u32 VAR_12;


 if ((VAR_9->flags & VAR_2) &&
      (VAR_9->ddev->switch_power_state != VAR_3))
  return -VAR_4;


 VAR_10 = FUNC_3(VAR_7, 10, &VAR_11);
 if (VAR_10)
  return VAR_10;

 if (VAR_11 == 0)
  VAR_12 = VAR_0;
 else if (VAR_11 == 1)
  VAR_12 = VAR_1;
 else
  return -VAR_4;

 if (FUNC_2(VAR_9)) {
  FUNC_4(&VAR_9->smu, VAR_12);
 } else {
  if (!VAR_9->powerplay.pp_funcs->set_fan_control_mode)
   return -VAR_4;
  FUNC_0(VAR_9, VAR_12);
 }

 return VAR_8;
}
