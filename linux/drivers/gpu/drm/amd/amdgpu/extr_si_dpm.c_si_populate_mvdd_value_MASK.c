
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_1__* entries; scalar_t__ count; } ;
struct si_power_info {TYPE_2__ mvdd_voltage_table; } ;
struct rv7xx_power_info {scalar_t__ mvdd_split_frequency; scalar_t__ mvdd_control; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_7__ {size_t index; int value; } ;
struct TYPE_5__ {int value; } ;
typedef TYPE_3__ SISLANDS_SMC_VOLTAGE_VALUE ;


 int FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0, u32 VAR_1,
      SISLANDS_SMC_VOLTAGE_VALUE *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_1(VAR_0);
 struct si_power_info *VAR_4 = FUNC_2(VAR_0);

 if (VAR_3->mvdd_control) {
  if (VAR_1 <= VAR_3->mvdd_split_frequency)
   VAR_2->index = 0;
  else
   VAR_2->index = (u8)(VAR_4->mvdd_voltage_table.count) - 1;

  VAR_2->value = FUNC_0(VAR_4->mvdd_voltage_table.entries[VAR_2->index].value);
 }
 return 0;
}
