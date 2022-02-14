
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {int mvdd_bootup_value; int mvdd_voltage_table; } ;
struct rv7xx_power_info {scalar_t__ mvdd_control; } ;
struct amdgpu_device {int dummy; } ;
struct SISLANDS_SMC_VOLTAGE_VALUE {int dummy; } ;


 struct rv7xx_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int *,int ,struct SISLANDS_SMC_VOLTAGE_VALUE*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
       struct SISLANDS_SMC_VOLTAGE_VALUE *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_0(VAR_0);
 struct si_power_info *VAR_3 = FUNC_1(VAR_0);

 if (VAR_2->mvdd_control)
  return FUNC_2(VAR_0, &VAR_3->mvdd_voltage_table,
       VAR_3->mvdd_bootup_value, VAR_1);

 return 0;
}
