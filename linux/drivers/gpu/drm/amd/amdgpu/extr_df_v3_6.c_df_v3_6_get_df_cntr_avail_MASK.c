
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {scalar_t__* df_perfmon_config_assign_mask; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct amdgpu_device *VAR_5;
 struct drm_device *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_2);
 VAR_5 = VAR_6->dev_private;
 VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_5->df_perfmon_config_assign_mask[VAR_7] == 0)
   VAR_8++;
 }

 return FUNC_1(VAR_4, VAR_1, "%i\n", VAR_8);
}
