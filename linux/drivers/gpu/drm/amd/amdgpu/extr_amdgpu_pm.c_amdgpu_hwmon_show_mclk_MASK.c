
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_device {scalar_t__ switch_power_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {int flags; struct drm_device* ddev; } ;
typedef int ssize_t ;
typedef int mclk ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int ,void*,int*) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
          struct device_attribute *VAR_6,
          char *VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_1(VAR_5);
 struct drm_device *VAR_9 = VAR_8->ddev;
 uint32_t VAR_10;
 int VAR_11, VAR_12 = sizeof(VAR_10);


 if ((VAR_8->flags & VAR_1) &&
      (VAR_9->switch_power_state != VAR_2))
  return -VAR_3;


 VAR_11 = FUNC_0(VAR_8, VAR_0,
       (void *)&VAR_10, &VAR_12);
 if (VAR_11)
  return VAR_11;

 return FUNC_2(VAR_7, VAR_4, "%d\n", VAR_10 * 10 * 1000);
}
