
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int boot_ps; } ;
struct TYPE_5__ {TYPE_1__ dpm; int int_thermal_type; } ;
struct TYPE_6__ {int dpm_thermal; scalar_t__ installed; } ;
struct radeon_device {TYPE_2__ pm; TYPE_3__ irq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int ) ;
 int FUNC_11 (struct radeon_device*) ;

void FUNC_12(struct radeon_device *VAR_0)
{
 FUNC_3(VAR_0);
 if (!FUNC_6(VAR_0)) {
  FUNC_7(VAR_0);
  return;
 }
 FUNC_5(VAR_0, 0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_11(VAR_0);
 FUNC_9(VAR_0);
 FUNC_8(VAR_0);
 FUNC_7(VAR_0);

 if (VAR_0->irq.installed &&
     FUNC_0(VAR_0->pm.int_thermal_type)) {
  VAR_0->irq.dpm_thermal = 0;
  FUNC_1(VAR_0);
 }

 FUNC_10(VAR_0, VAR_0->pm.dpm.boot_ps);
}
