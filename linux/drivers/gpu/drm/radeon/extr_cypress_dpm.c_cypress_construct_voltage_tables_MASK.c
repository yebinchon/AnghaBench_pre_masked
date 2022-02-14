
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct evergreen_power_info {TYPE_1__ vddci_voltage_table; scalar_t__ vddci_control; TYPE_1__ vddc_voltage_table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,TYPE_1__*) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ,int ,TYPE_1__*) ;

int FUNC_3(struct radeon_device *VAR_3)
{
 struct evergreen_power_info *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, 0,
         &VAR_4->vddc_voltage_table);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->vddc_voltage_table.count > VAR_0)
  FUNC_0(VAR_3,
             &VAR_4->vddc_voltage_table);

 if (VAR_4->vddci_control) {
  VAR_5 = FUNC_2(VAR_3, VAR_2, 0,
          &VAR_4->vddci_voltage_table);
  if (VAR_5)
   return VAR_5;

  if (VAR_4->vddci_voltage_table.count > VAR_0)
   FUNC_0(VAR_3,
              &VAR_4->vddci_voltage_table);
 }

 return 0;
}
