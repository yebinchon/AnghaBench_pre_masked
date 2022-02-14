
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_4__ {struct radeon_ps* current_ps; struct radeon_ps* requested_ps; } ;
struct TYPE_3__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct igp_power_info {scalar_t__ voltage_control; int max_voltage; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*,int ) ;
 struct igp_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;

int FUNC_10(struct radeon_device *VAR_0)
{
 struct igp_power_info *VAR_1 = FUNC_4(VAR_0);
 struct radeon_ps *VAR_2 = VAR_0->pm.dpm.requested_ps;
 struct radeon_ps *VAR_3 = VAR_0->pm.dpm.current_ps;
 int VAR_4;

 FUNC_5(VAR_0);

 FUNC_9(VAR_0, VAR_2, VAR_3);

 if (VAR_1->voltage_control) {
  FUNC_3(VAR_0, VAR_1->max_voltage);
  FUNC_0(5);
 }

 VAR_4 = FUNC_6(VAR_0, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_7(VAR_0, VAR_2, VAR_3);

 FUNC_1(VAR_0, VAR_2, VAR_3);

 if (VAR_1->voltage_control)
  FUNC_2(VAR_0, VAR_2);

 FUNC_8(VAR_0, VAR_2, VAR_3);

 return 0;
}
