
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
struct TYPE_3__ {scalar_t__ set_pp_table; } ;


 int FUNC_0 (struct amdgpu_device*,char const*,size_t) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1,
  const char *VAR_2,
  size_t VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_0);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 int VAR_6 = 0;

 if (FUNC_2(VAR_5)) {
  VAR_6 = FUNC_3(&VAR_5->smu, (void *)VAR_2, VAR_3);
  if (VAR_6)
   return VAR_6;
 } else if (VAR_5->powerplay.pp_funcs->set_pp_table)
  FUNC_0(VAR_5, VAR_2, VAR_3);

 return VAR_3;
}
