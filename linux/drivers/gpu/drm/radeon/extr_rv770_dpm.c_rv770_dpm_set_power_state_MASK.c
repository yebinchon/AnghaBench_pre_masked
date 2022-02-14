
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ dcodt; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_4__ {struct radeon_ps* current_ps; struct radeon_ps* requested_ps; } ;
struct TYPE_3__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_1__ pm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_ps*) ;

int FUNC_12(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_2(VAR_0);
 struct radeon_ps *VAR_2 = VAR_0->pm.dpm.requested_ps;
 struct radeon_ps *VAR_3 = VAR_0->pm.dpm.current_ps;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_restrict_performance_levels_before_switch failed\n");
  return VAR_4;
 }
 FUNC_10(VAR_0, VAR_2, VAR_3);
 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_halt_smc failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_11(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0("rv770_upload_sw_state failed\n");
  return VAR_4;
 }
 FUNC_1(VAR_0, VAR_2);
 if (VAR_1->dcodt)
  FUNC_5(VAR_0, VAR_2, VAR_3);
 VAR_4 = FUNC_7(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_resume_smc failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_8(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_set_sw_state failed\n");
  return VAR_4;
 }
 if (VAR_1->dcodt)
  FUNC_4(VAR_0, VAR_2, VAR_3);
 FUNC_9(VAR_0, VAR_2, VAR_3);

 return 0;
}
