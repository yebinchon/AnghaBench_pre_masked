
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int int_thermal_type; int int_hwmon_dev; } ;
struct radeon_device {int dev; TYPE_3__ pm; TYPE_2__* asic; } ;
struct TYPE_4__ {int * get_temperature; } ;
struct TYPE_5__ {TYPE_1__ pm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,struct radeon_device*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->pm.int_thermal_type) {
 case 131:
 case 130:
 case 134:
 case 132:
 case 128:
 case 129:
 case 135:
 case 133:
  if (VAR_1->asic->pm.get_temperature == ((void*)0))
   return VAR_2;
  VAR_1->pm.int_hwmon_dev = FUNC_3(VAR_1->dev,
            "radeon", VAR_1,
            VAR_0);
  if (FUNC_0(VAR_1->pm.int_hwmon_dev)) {
   VAR_2 = FUNC_1(VAR_1->pm.int_hwmon_dev);
   FUNC_2(VAR_1->dev,
    "Unable to register hwmon device: %d\n", VAR_2);
  }
  break;
 default:
  break;
 }

 return VAR_2;
}
