
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct igp_power_info {int max_voltage; int min_voltage; } ;
typedef enum rs780_vddc_level { ____Placeholder_rs780_vddc_level } rs780_vddc_level ;


 int VAR_0 ;
 int VAR_1 ;
 struct igp_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static u32 FUNC_1(struct radeon_device *VAR_2,
         enum rs780_vddc_level VAR_3)
{
 struct igp_power_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_0)
  return VAR_4->max_voltage;
 else if (VAR_3 == VAR_1)
  return VAR_4->min_voltage;
 else
  return VAR_4->max_voltage;
}
