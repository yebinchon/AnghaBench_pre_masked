
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int int_thermal_type; } ;
struct TYPE_3__ {scalar_t__ installed; } ;
struct radeon_device {TYPE_2__ pm; TYPE_1__ irq; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct radeon_device *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->irq.installed &&
     FUNC_7(VAR_2->pm.int_thermal_type)) {
  VAR_3 = FUNC_6(VAR_2, VAR_1, VAR_0);
  if (VAR_3) {
   FUNC_0("kv_set_thermal_temperature_range failed\n");
   return VAR_3;
  }
  FUNC_5(VAR_2, 1);
 }


 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_2, 1);
 FUNC_4(VAR_2, 1);
 FUNC_3(VAR_2, 1);

 return VAR_3;
}
