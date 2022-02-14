
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int boot_ps; int current_ps; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_2__ powerplay; int smu; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {scalar_t__ dispatch_tasks; scalar_t__ set_sclk_od; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int *) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 struct drm_device* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (char const*,int ,long*) ;
 long FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
  struct device_attribute *VAR_4,
  const char *VAR_5,
  size_t VAR_6)
{
 struct drm_device *VAR_7 = FUNC_3(VAR_3);
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 int VAR_9;
 long int VAR_10;

 VAR_9 = FUNC_5(VAR_5, 0, &VAR_10);

 if (VAR_9) {
  VAR_6 = -VAR_1;
  goto fail;
 }

 if (FUNC_4(VAR_8)) {
  VAR_10 = FUNC_6(&(VAR_8->smu), VAR_2, (uint32_t)VAR_10);
 } else {
  if (VAR_8->powerplay.pp_funcs->set_sclk_od)
   FUNC_1(VAR_8, (uint32_t)VAR_10);

  if (VAR_8->powerplay.pp_funcs->dispatch_tasks) {
   FUNC_0(VAR_8, VAR_0, ((void*)0));
  } else {
   VAR_8->pm.dpm.current_ps = VAR_8->pm.dpm.boot_ps;
   FUNC_2(VAR_8);
  }
 }

fail:
 return VAR_6;
}
