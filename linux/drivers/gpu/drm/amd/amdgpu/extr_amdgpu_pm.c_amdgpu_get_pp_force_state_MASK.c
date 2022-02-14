
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {scalar_t__ pp_force_state_enabled; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*,char*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;

 if (VAR_5->pp_force_state_enabled)
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_2(VAR_3, VAR_0, "\n");
}
