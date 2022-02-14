
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int work; int irq; } ;
struct TYPE_7__ {int boot_ps; int requested_ps; int current_ps; TYPE_2__ thermal; int forced_level; void* user_state; void* state; } ;
struct TYPE_8__ {int mutex; TYPE_3__ dpm; int int_thermal_type; int current_mclk; int current_sclk; int default_mclk; int default_sclk; } ;
struct TYPE_5__ {int default_mclk; int default_sclk; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_1__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_6)
{
 int VAR_7;
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_6;

 VAR_7 = FUNC_3(VAR_8, VAR_0, 230,
    &VAR_8->pm.dpm.thermal.irq);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_8, VAR_0, 231,
    &VAR_8->pm.dpm.thermal.irq);
 if (VAR_7)
  return VAR_7;


 VAR_8->pm.dpm.state = VAR_2;
 VAR_8->pm.dpm.user_state = VAR_2;
 VAR_8->pm.dpm.forced_level = VAR_1;
 VAR_8->pm.default_sclk = VAR_8->clock.default_sclk;
 VAR_8->pm.default_mclk = VAR_8->clock.default_mclk;
 VAR_8->pm.current_sclk = VAR_8->clock.default_sclk;
 VAR_8->pm.current_mclk = VAR_8->clock.default_mclk;
 VAR_8->pm.int_thermal_type = VAR_3;

 if (VAR_4 == 0)
  return 0;

 FUNC_2(&VAR_8->pm.dpm.thermal.work, VAR_5);
 FUNC_7(&VAR_8->pm.mutex);
 VAR_7 = FUNC_6(VAR_8);
 if (VAR_7)
  goto dpm_failed;
 VAR_8->pm.dpm.current_ps = VAR_8->pm.dpm.requested_ps = VAR_8->pm.dpm.boot_ps;
 if (VAR_4 == 1)
  FUNC_4(VAR_8);
 FUNC_8(&VAR_8->pm.mutex);
 FUNC_1("amdgpu: dpm initialized\n");

 return 0;

dpm_failed:
 FUNC_5(VAR_8);
 FUNC_8(&VAR_8->pm.mutex);
 FUNC_0("amdgpu: dpm initialization failed\n");
 return VAR_7;
}
