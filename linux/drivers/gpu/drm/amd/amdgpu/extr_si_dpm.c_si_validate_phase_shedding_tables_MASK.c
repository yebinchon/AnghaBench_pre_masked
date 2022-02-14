
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atom_voltage_table {int mask_low; int count; } ;
struct amdgpu_phase_shedding_limits_table {int count; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct amdgpu_device *VAR_0,
           const struct atom_voltage_table *VAR_1,
           const struct amdgpu_phase_shedding_limits_table *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;

 if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
  return 0;

 VAR_3 = VAR_1->mask_low;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 == 0)
  return 0;

 VAR_5 = (1 << VAR_4);

 if (VAR_1->count != VAR_5)
  return 0;

 if (VAR_2->count != (VAR_5 - 1))
  return 0;

 return 1;
}
