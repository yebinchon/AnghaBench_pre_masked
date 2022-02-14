
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vddnb ;
typedef int u32 ;
struct drm_device {scalar_t__ switch_power_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {int flags; struct drm_device* ddev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*,int ,void*,int*) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_6,
           struct device_attribute *VAR_7,
           char *VAR_8)
{
 struct amdgpu_device *VAR_9 = FUNC_1(VAR_6);
 struct drm_device *VAR_10 = VAR_9->ddev;
 u32 VAR_11;
 int VAR_12, VAR_13 = sizeof(VAR_11);


 if (!(VAR_9->flags & VAR_1))
  return -VAR_4;


 if ((VAR_9->flags & VAR_2) &&
      (VAR_10->switch_power_state != VAR_3))
  return -VAR_4;


 VAR_12 = FUNC_0(VAR_9, VAR_0,
       (void *)&VAR_11, &VAR_13);
 if (VAR_12)
  return VAR_12;

 return FUNC_2(VAR_8, VAR_5, "%d\n", VAR_11);
}
