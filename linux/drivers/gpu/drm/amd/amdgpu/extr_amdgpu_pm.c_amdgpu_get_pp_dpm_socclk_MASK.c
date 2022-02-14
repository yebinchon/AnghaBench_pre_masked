
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ print_clock_levels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,char*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
  struct device_attribute *VAR_4,
  char *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_1(VAR_3);
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;

 if (FUNC_2(VAR_7))
  return FUNC_3(&VAR_7->smu, VAR_2, VAR_5);
 else if (VAR_7->powerplay.pp_funcs->print_clock_levels)
  return FUNC_0(VAR_7, VAR_1, VAR_5);
 else
  return FUNC_4(VAR_5, VAR_0, "\n");
}
