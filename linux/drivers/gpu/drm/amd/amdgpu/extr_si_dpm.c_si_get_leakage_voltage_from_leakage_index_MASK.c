
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int count; TYPE_1__* entries; } ;
struct si_power_info {TYPE_2__ leakage_voltage; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int leakage_index; int voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct si_power_info* FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_4,
           u32 VAR_5, u16 *VAR_6)
{
 struct si_power_info *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (VAR_6 == ((void*)0))
  return -VAR_1;

 if ((VAR_5 & 0xff00) != 0xff00)
  return -VAR_1;

 if ((VAR_5 & 0xff) > VAR_3 + 1)
  return -VAR_1;

 if (VAR_5 < VAR_2)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_7->leakage_voltage.count; VAR_8++) {
  if (VAR_7->leakage_voltage.entries[VAR_8].leakage_index == VAR_5) {
   *VAR_6 = VAR_7->leakage_voltage.entries[VAR_8].voltage;
   return 0;
  }
 }
 return -VAR_0;
}
