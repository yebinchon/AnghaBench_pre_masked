
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
struct TYPE_3__ {int get_fan_control_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5 = 0;
 if (FUNC_2(VAR_4)) {
  VAR_5 = FUNC_3(&VAR_4->smu);
 } else {
  if (!VAR_4->powerplay.pp_funcs->get_fan_control_mode)
   return -VAR_0;

  VAR_5 = FUNC_0(VAR_4);
 }

 return FUNC_4(VAR_3, "%i\n", VAR_5);
}
