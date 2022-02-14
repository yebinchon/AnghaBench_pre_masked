
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {int count; TYPE_3__* entries; } ;
struct TYPE_4__ {int * VddCVid; } ;
struct ci_power_info {TYPE_2__ vddc_voltage_table; TYPE_1__ smc_powertune_table; } ;
struct TYPE_6__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_1(VAR_1);
 u8 *VAR_3 = VAR_2->smc_powertune_table.VddCVid;
 u32 VAR_4;

 if (VAR_2->vddc_voltage_table.count > 8)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->vddc_voltage_table.count; VAR_4++)
  VAR_3[VAR_4] = FUNC_0(VAR_2->vddc_voltage_table.entries[VAR_4].value);

 return 0;
}
