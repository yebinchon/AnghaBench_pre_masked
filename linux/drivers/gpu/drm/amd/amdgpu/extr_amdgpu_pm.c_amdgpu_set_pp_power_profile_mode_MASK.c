
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ set_power_profile_mode; } ;


 size_t VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,long*,size_t) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char*,int ,long*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (int *,long*,size_t) ;
 char* FUNC_7 (char**,char const*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
  struct device_attribute *VAR_3,
  const char *VAR_4,
  size_t VAR_5)
{
 int VAR_6 = 0xff;
 struct drm_device *VAR_7 = FUNC_1(VAR_2);
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 uint32_t VAR_9 = 0;
 long VAR_10[64];
 char *VAR_11, VAR_12[128];
 char *VAR_13;
 uint32_t VAR_14 = 0;
 char VAR_15[2];
 long int VAR_16 = 0;
 const char VAR_17[3] = {' ', '\n', '\0'};

 VAR_15[0] = *(VAR_4);
 VAR_15[1] = '\0';
 VAR_6 = FUNC_4(VAR_15, 0, &VAR_16);
 if (VAR_6)
  goto fail;

 if (VAR_16 == VAR_1) {
  if (VAR_5 < 2 || VAR_5 > 127)
   return -VAR_0;
  while (FUNC_3(*++VAR_4))
   VAR_14++;
  FUNC_5(VAR_12, VAR_4, VAR_5-VAR_14);
  VAR_13 = VAR_12;
  while (VAR_13[0]) {
   VAR_11 = FUNC_7(&VAR_13, VAR_17);
   VAR_6 = FUNC_4(VAR_11, 0, &VAR_10[VAR_9]);
   if (VAR_6) {
    VAR_5 = -VAR_0;
    goto fail;
   }
   VAR_9++;
   while (FUNC_3(*VAR_13))
    VAR_13++;
  }
 }
 VAR_10[VAR_9] = VAR_16;
 if (FUNC_2(VAR_8))
  VAR_6 = FUNC_6(&VAR_8->smu, VAR_10, VAR_9);
 else if (VAR_8->powerplay.pp_funcs->set_power_profile_mode)
  VAR_6 = FUNC_0(VAR_8, VAR_10, VAR_9);
 if (!VAR_6)
  return VAR_5;
fail:
 return -VAR_0;
}
