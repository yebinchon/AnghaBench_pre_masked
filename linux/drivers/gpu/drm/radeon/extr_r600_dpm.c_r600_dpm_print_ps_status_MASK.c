
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {struct radeon_ps* boot_ps; struct radeon_ps* requested_ps; struct radeon_ps* current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct radeon_device *VAR_0,
         struct radeon_ps *VAR_1)
{
 FUNC_1("\tstatus:");
 if (VAR_1 == VAR_0->pm.dpm.current_ps)
  FUNC_0(" c");
 if (VAR_1 == VAR_0->pm.dpm.requested_ps)
  FUNC_0(" r");
 if (VAR_1 == VAR_0->pm.dpm.boot_ps)
  FUNC_0(" b");
 FUNC_0("\n");
}
