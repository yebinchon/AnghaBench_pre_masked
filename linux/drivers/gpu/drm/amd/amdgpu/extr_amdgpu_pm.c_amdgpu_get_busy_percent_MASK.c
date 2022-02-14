
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,void*,int*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_1(VAR_2);
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 int VAR_7, VAR_8, VAR_9 = sizeof(VAR_8);


 VAR_7 = FUNC_0(VAR_6, VAR_0,
       (void *)&VAR_8, &VAR_9);

 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_4, VAR_1, "%d\n", VAR_8);
}
