
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_context {int pm_enabled; } ;
struct TYPE_4__ {int dpm_enabled; } ;
struct TYPE_3__ {scalar_t__ load_type; } ;
struct amdgpu_device {scalar_t__ asic_type; int flags; TYPE_2__ pm; struct smu_context smu; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*) ;
 int FUNC_4 (struct smu_context*) ;
 int FUNC_5 (struct smu_context*) ;
 int FUNC_6 (struct smu_context*) ;
 int FUNC_7 (struct smu_context*,int) ;
 int FUNC_8 (struct smu_context*,int) ;
 int FUNC_9 (struct smu_context*,int) ;
 int FUNC_10 (struct smu_context*) ;

__attribute__((used)) static int FUNC_11(void *VAR_3)
{
 int VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;
 struct smu_context *VAR_6 = &VAR_5->smu;

 if (VAR_5->firmware.load_type != VAR_0) {
  if (VAR_5->asic_type < VAR_2) {
   VAR_4 = FUNC_5(VAR_6);
   if (VAR_4)
    return VAR_4;
  }
 }

 VAR_4 = FUNC_3(VAR_6);
 if (VAR_4) {
  FUNC_0("SMC firmware status is not correct\n");
  return VAR_4;
 }

 if (VAR_5->flags & VAR_1) {
  FUNC_7(&VAR_5->smu, 0);
  FUNC_8(&VAR_5->smu, 0);
 }

 if (!VAR_6->pm_enabled)
  return 0;

 VAR_4 = FUNC_4(VAR_6);
 if (VAR_4)
  goto failed;

 VAR_4 = FUNC_9(VAR_6, 1);
 if (VAR_4)
  goto failed;

 VAR_4 = FUNC_2(VAR_6);
 if (VAR_4)
  goto failed;





 VAR_4 = FUNC_6(VAR_6);
 if (VAR_4)
  goto failed;

 VAR_4 = FUNC_10(VAR_6);
 if (VAR_4)
  goto failed;

 if (!VAR_6->pm_enabled)
  VAR_5->pm.dpm_enabled = 0;
 else
  VAR_5->pm.dpm_enabled = 1;

 FUNC_1("SMU is initialized successfully!\n");

 return 0;

failed:
 return VAR_4;
}
