
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct trinity_power_info {scalar_t__ enable_bapm; scalar_t__ enable_dpm; struct radeon_ps current_rps; struct radeon_ps requested_rps; } ;
struct TYPE_3__ {int ac_power; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 struct trinity_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;

int FUNC_13(struct radeon_device *VAR_0)
{
 struct trinity_power_info *VAR_1 = FUNC_4(VAR_0);
 struct radeon_ps *VAR_2 = &VAR_1->requested_rps;
 struct radeon_ps *VAR_3 = &VAR_1->current_rps;

 FUNC_0(VAR_0);
 if (VAR_1->enable_dpm) {
  if (VAR_1->enable_bapm)
   FUNC_1(VAR_0, VAR_0->pm.dpm.ac_power);
  FUNC_8(VAR_0, VAR_2, VAR_3);
  FUNC_2(VAR_0);
  FUNC_3(VAR_0);
  FUNC_12(VAR_0);
  FUNC_10(VAR_0, VAR_2);
  FUNC_5(VAR_0, VAR_2, VAR_3);
  FUNC_3(VAR_0);
  FUNC_11(VAR_0);
  FUNC_7(VAR_0, VAR_2, VAR_3);
  FUNC_9(VAR_0, VAR_2, VAR_3);
 }
 FUNC_6(VAR_0);

 return 0;
}
