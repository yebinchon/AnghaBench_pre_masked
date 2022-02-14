
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
struct TYPE_3__ {scalar_t__ get_ppfeature_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,char*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;

 if (FUNC_2(VAR_5)) {
  return FUNC_3(&VAR_5->smu, VAR_3);
 } else if (VAR_5->powerplay.pp_funcs->get_ppfeature_status)
  return FUNC_0(VAR_5, VAR_3);

 return FUNC_4(VAR_3, VAR_0, "\n");
}
