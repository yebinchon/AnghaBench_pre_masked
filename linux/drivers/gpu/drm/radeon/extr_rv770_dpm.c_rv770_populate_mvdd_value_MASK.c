
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rv7xx_power_info {scalar_t__ mvdd_split_frequency; int mvdd_control; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {void* value; void* index; } ;
typedef TYPE_1__ RV770_SMC_VOLTAGE_VALUE ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

int FUNC_2(struct radeon_device *VAR_4, u32 VAR_5,
         RV770_SMC_VOLTAGE_VALUE *VAR_6)
{
 struct rv7xx_power_info *VAR_7 = FUNC_1(VAR_4);

 if (!VAR_7->mvdd_control) {
  VAR_6->index = VAR_0;
  VAR_6->value = FUNC_0(VAR_1);
  return 0;
 }

 if (VAR_5 <= VAR_7->mvdd_split_frequency) {
  VAR_6->index = VAR_2;
  VAR_6->value = FUNC_0(VAR_3);
 } else {
  VAR_6->index = VAR_0;
  VAR_6->value = FUNC_0(VAR_1);
 }

 return 0;
}
