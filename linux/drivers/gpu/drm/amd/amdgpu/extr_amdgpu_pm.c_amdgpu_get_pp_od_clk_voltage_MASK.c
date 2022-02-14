
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
struct TYPE_3__ {scalar_t__ print_clock_levels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct amdgpu_device*,int ,char*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_9,
  struct device_attribute *VAR_10,
  char *VAR_11)
{
 struct drm_device *VAR_12 = FUNC_1(VAR_9);
 struct amdgpu_device *VAR_13 = VAR_12->dev_private;
 uint32_t VAR_14 = 0;

 if (FUNC_2(VAR_13)) {
  VAR_14 = FUNC_3(&VAR_13->smu, VAR_7, VAR_11);
  VAR_14 += FUNC_3(&VAR_13->smu, VAR_5, VAR_11+VAR_14);
  VAR_14 += FUNC_3(&VAR_13->smu, VAR_8, VAR_11+VAR_14);
  VAR_14 += FUNC_3(&VAR_13->smu, VAR_6, VAR_11+VAR_14);
  return VAR_14;
 } else if (VAR_13->powerplay.pp_funcs->print_clock_levels) {
  VAR_14 = FUNC_0(VAR_13, VAR_2, VAR_11);
  VAR_14 += FUNC_0(VAR_13, VAR_0, VAR_11+VAR_14);
  VAR_14 += FUNC_0(VAR_13, VAR_3, VAR_11+VAR_14);
  VAR_14 += FUNC_0(VAR_13, VAR_1, VAR_11+VAR_14);
  return VAR_14;
 } else {
  return FUNC_4(VAR_11, VAR_4, "\n");
 }

}
