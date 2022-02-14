
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct si_power_info {scalar_t__ fan_is_controlled_by_smc; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;
 struct si_power_info *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 if (VAR_5->fan_is_controlled_by_smc)
  return 0;

 VAR_6 = FUNC_0(VAR_0) & VAR_1;
 return (VAR_6 >> VAR_2);
}
