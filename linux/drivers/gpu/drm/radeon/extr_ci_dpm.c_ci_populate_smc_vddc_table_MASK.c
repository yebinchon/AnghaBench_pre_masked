
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_6__ {unsigned int count; TYPE_3__* entries; } ;
struct ci_power_info {scalar_t__ voltage_control; TYPE_1__ vddc_voltage_table; } ;
struct TYPE_9__ {int Smio; } ;
struct TYPE_8__ {int smio_low; } ;
struct TYPE_7__ {unsigned int VddcLevelCount; TYPE_4__* VddcLevel; } ;
typedef TYPE_2__ SMU7_Discrete_DpmTable ;


 scalar_t__ VAR_0 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,TYPE_3__*,TYPE_4__*) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_1,
          SMU7_Discrete_DpmTable *VAR_2)
{
 struct ci_power_info *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 VAR_2->VddcLevelCount = VAR_3->vddc_voltage_table.count;
 for (VAR_4 = 0; VAR_4 < VAR_2->VddcLevelCount; VAR_4++) {
  FUNC_1(VAR_1,
           &VAR_3->vddc_voltage_table.entries[VAR_4],
           &VAR_2->VddcLevel[VAR_4]);

  if (VAR_3->voltage_control == VAR_0)
   VAR_2->VddcLevel[VAR_4].Smio |=
    VAR_3->vddc_voltage_table.entries[VAR_4].smio_low;
  else
   VAR_2->VddcLevel[VAR_4].Smio = 0;
 }
 VAR_2->VddcLevelCount = FUNC_2(VAR_2->VddcLevelCount);

 return 0;
}
