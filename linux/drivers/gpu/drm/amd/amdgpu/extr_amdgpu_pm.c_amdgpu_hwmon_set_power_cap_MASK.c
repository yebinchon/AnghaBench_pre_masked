
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* set_power_limit ) (int ,int) ;} ;


 int VAR_0 ;
 struct amdgpu_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2,
  const char *VAR_3,
  size_t VAR_4)
{
 struct amdgpu_device *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7 = VAR_7 / 1000000;

 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_3(&VAR_5->smu, VAR_7);
 } else if (VAR_5->powerplay.pp_funcs && VAR_5->powerplay.pp_funcs->set_power_limit) {
  VAR_6 = VAR_5->powerplay.pp_funcs->set_power_limit(VAR_5->powerplay.pp_handle, VAR_7);
 } else {
  VAR_6 = -VAR_0;
 }

 if (VAR_6)
  return VAR_6;

 return VAR_4;
}
