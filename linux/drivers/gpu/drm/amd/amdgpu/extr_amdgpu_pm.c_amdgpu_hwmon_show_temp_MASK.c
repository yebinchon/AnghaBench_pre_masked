
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct drm_device {scalar_t__ switch_power_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {int flags; struct drm_device* ddev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;

 int FUNC_0 (struct amdgpu_device*,int ,void*,int*) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_8,
          struct device_attribute *VAR_9,
          char *VAR_10)
{
 struct amdgpu_device *VAR_11 = FUNC_1(VAR_8);
 struct drm_device *VAR_12 = VAR_11->ddev;
 int VAR_13 = FUNC_3(VAR_9)->index;
 int VAR_14, VAR_15 = 0, VAR_16 = sizeof(VAR_15);


 if ((VAR_11->flags & VAR_3) &&
      (VAR_12->switch_power_state != VAR_4))
  return -VAR_5;

 if (VAR_13 >= VAR_7)
  return -VAR_5;

 switch (VAR_13) {
 case 129:

  VAR_14 = FUNC_0(VAR_11, VAR_1,
        (void *)&VAR_15, &VAR_16);
  if (VAR_14)
   return VAR_14;
  break;
 case 130:

  VAR_14 = FUNC_0(VAR_11, VAR_0,
        (void *)&VAR_15, &VAR_16);
  if (VAR_14)
   return VAR_14;
  break;
 case 128:

  VAR_14 = FUNC_0(VAR_11, VAR_2,
        (void *)&VAR_15, &VAR_16);
  if (VAR_14)
   return VAR_14;
  break;
 }

 return FUNC_2(VAR_10, VAR_6, "%d\n", VAR_15);
}
