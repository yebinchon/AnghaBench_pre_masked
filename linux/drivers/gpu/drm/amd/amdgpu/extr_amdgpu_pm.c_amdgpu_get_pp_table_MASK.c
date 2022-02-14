
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
struct TYPE_3__ {scalar_t__ get_pp_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,char**) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *,void**) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 char *VAR_6 = ((void*)0);
 int VAR_7;

 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_4(&VAR_5->smu, (void **)&VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
 }
 else if (VAR_5->powerplay.pp_funcs->get_pp_table)
  VAR_7 = FUNC_0(VAR_5, &VAR_6);
 else
  return 0;

 if (VAR_7 >= VAR_0)
  VAR_7 = VAR_0 - 1;

 FUNC_3(VAR_3, VAR_6, VAR_7);

 return VAR_7;
}
