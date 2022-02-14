
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 uint64_t VAR_6 = FUNC_0(VAR_5);

 return FUNC_2(VAR_3, VAR_0, "%llu\n", VAR_6);
}
