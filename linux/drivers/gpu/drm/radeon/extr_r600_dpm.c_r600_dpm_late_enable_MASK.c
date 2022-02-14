
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dpm_thermal; scalar_t__ installed; } ;
struct TYPE_3__ {int int_thermal_type; } ;
struct radeon_device {TYPE_2__ irq; TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->irq.installed &&
     FUNC_0(VAR_2->pm.int_thermal_type)) {
  VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0);
  if (VAR_3)
   return VAR_3;
  VAR_2->irq.dpm_thermal = 1;
  FUNC_2(VAR_2);
 }

 return 0;
}
