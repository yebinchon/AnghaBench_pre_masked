
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boot_ps; int requested_ps; int current_ps; } ;
struct TYPE_4__ {int dpm_enabled; scalar_t__ default_mclk; scalar_t__ default_sclk; scalar_t__ default_vddci; scalar_t__ default_vddc; int mutex; TYPE_1__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ pm; scalar_t__ mc_fw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,scalar_t__) ;
 int FUNC_7 (struct radeon_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_4)
{
 int VAR_5;


 FUNC_1(&VAR_4->pm.mutex);
 VAR_4->pm.dpm.current_ps = VAR_4->pm.dpm.requested_ps = VAR_4->pm.dpm.boot_ps;
 FUNC_5(VAR_4);
 VAR_5 = FUNC_4(VAR_4);
 FUNC_2(&VAR_4->pm.mutex);
 if (VAR_5)
  goto dpm_resume_fail;
 VAR_4->pm.dpm_enabled = 1;
 return;

dpm_resume_fail:
 FUNC_0("radeon: dpm resume failed\n");
 if ((VAR_4->family >= VAR_0) &&
     (VAR_4->family <= VAR_1) &&
     VAR_4->mc_fw) {
  if (VAR_4->pm.default_vddc)
   FUNC_3(VAR_4, VAR_4->pm.default_vddc,
      VAR_2);
  if (VAR_4->pm.default_vddci)
   FUNC_3(VAR_4, VAR_4->pm.default_vddci,
      VAR_3);
  if (VAR_4->pm.default_sclk)
   FUNC_6(VAR_4, VAR_4->pm.default_sclk);
  if (VAR_4->pm.default_mclk)
   FUNC_7(VAR_4, VAR_4->pm.default_mclk);
 }
}
