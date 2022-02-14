
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rv7xx_power_info {scalar_t__ mvdd_split_frequency; int mvdd_control; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {int mvdd_high_index; int mvdd_low_index; } ;
struct TYPE_3__ {void* value; int index; } ;
typedef TYPE_1__ NISLANDS_SMC_VOLTAGE_VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2,
       u32 VAR_3,
       NISLANDS_SMC_VOLTAGE_VALUE *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_2(VAR_2);
 struct evergreen_power_info *VAR_6 = FUNC_1(VAR_2);

 if (!VAR_5->mvdd_control) {
  VAR_4->index = VAR_6->mvdd_high_index;
  VAR_4->value = FUNC_0(VAR_0);
  return;
 }

 if (VAR_3 <= VAR_5->mvdd_split_frequency) {
  VAR_4->index = VAR_6->mvdd_low_index;
  VAR_4->value = FUNC_0(VAR_1);
 } else {
  VAR_4->index = VAR_6->mvdd_high_index;
  VAR_4->value = FUNC_0(VAR_0);
 }
}
