
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_7__ {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_8__ {TYPE_2__ mclk_table; } ;
struct ci_power_info {TYPE_3__ dpm_table; } ;
struct TYPE_9__ {int * data; } ;
struct TYPE_6__ {int value; } ;
typedef TYPE_4__ SMU7_Discrete_MCRegisters ;


 int FUNC_0 (struct radeon_device*,int ,int *) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
        SMU7_Discrete_MCRegisters *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->dpm_table.mclk_table.count; VAR_3++)
  FUNC_0(VAR_0,
           VAR_2->dpm_table.mclk_table.dpm_levels[VAR_3].value,
           &VAR_1->data[VAR_3]);
}
