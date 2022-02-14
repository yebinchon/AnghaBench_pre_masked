
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
struct TYPE_4__ {scalar_t__ get_fan_speed_percent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int*) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4,
         char *VAR_5)
{
 struct amdgpu_device *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;
 u32 VAR_8 = 0;


 if ((VAR_6->flags & VAR_0) &&
      (VAR_6->ddev->switch_power_state != VAR_1))
  return -VAR_2;

 if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_3(&VAR_6->smu, &VAR_8);
  if (VAR_7)
   return VAR_7;
 } else if (VAR_6->powerplay.pp_funcs->get_fan_speed_percent) {
  VAR_7 = FUNC_0(VAR_6, &VAR_8);
  if (VAR_7)
   return VAR_7;
 }

 VAR_8 = (VAR_8 * 255) / 100;

 return FUNC_4(VAR_5, "%i\n", VAR_8);
}
