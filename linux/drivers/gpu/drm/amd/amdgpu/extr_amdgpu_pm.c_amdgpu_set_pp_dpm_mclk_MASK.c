
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ force_clock_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ) ;
 int FUNC_1 (char const*,size_t,int *) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 struct drm_device* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
  struct device_attribute *VAR_4,
  const char *VAR_5,
  size_t VAR_6)
{
 struct drm_device *VAR_7 = FUNC_3(VAR_3);
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 int VAR_9;
 uint32_t VAR_10 = 0;

 if (FUNC_2(VAR_8))
  return 0;

 VAR_9 = FUNC_1(VAR_5, VAR_6, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (FUNC_4(VAR_8))
  VAR_9 = FUNC_5(&VAR_8->smu, VAR_2, VAR_10);
 else if (VAR_8->powerplay.pp_funcs->force_clock_level)
  VAR_9 = FUNC_0(VAR_8, VAR_1, VAR_10);

 if (VAR_9)
  return -VAR_0;

 return VAR_6;
}
