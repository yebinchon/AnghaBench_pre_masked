
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* get_power_limit ) (int ,int*,int) ;} ;


 int VAR_0 ;
 struct amdgpu_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (char*,int ,char*,...) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_0(VAR_1);
 uint32_t VAR_5 = 0;

 if (FUNC_1(VAR_4)) {
  FUNC_2(&VAR_4->smu, &VAR_5, 0);
  return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_5 * 1000000);
 } else if (VAR_4->powerplay.pp_funcs && VAR_4->powerplay.pp_funcs->get_power_limit) {
  VAR_4->powerplay.pp_funcs->get_power_limit(VAR_4->powerplay.pp_handle, &VAR_5, 0);
  return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_5 * 1000000);
 } else {
  return FUNC_3(VAR_3, VAR_0, "\n");
 }
}
