
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dpm_thermal; scalar_t__ installed; } ;
struct TYPE_3__ {int int_thermal_type; } ;
struct radeon_device {TYPE_2__ irq; TYPE_1__ pm; } ;
typedef scalar_t__ PPSMC_Result ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ) ;
 int FUNC_4 (struct radeon_device*,int ,int ) ;

int FUNC_5(struct radeon_device *VAR_4)
{
 int VAR_5;

 if (VAR_4->irq.installed &&
     FUNC_1(VAR_4->pm.int_thermal_type)) {
  PPSMC_Result VAR_6;

  VAR_5 = FUNC_4(VAR_4, VAR_3, VAR_2);
  if (VAR_5)
   return VAR_5;
  VAR_4->irq.dpm_thermal = 1;
  FUNC_2(VAR_4);
  VAR_6 = FUNC_3(VAR_4, VAR_0);

  if (VAR_6 != VAR_1)
   FUNC_0("Could not enable thermal interrupts.\n");
 }

 return 0;
}
