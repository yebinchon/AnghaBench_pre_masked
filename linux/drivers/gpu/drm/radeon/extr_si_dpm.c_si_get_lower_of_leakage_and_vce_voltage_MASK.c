
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int count; TYPE_1__* entries; } ;
struct si_power_info {TYPE_2__ leakage_voltage; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ voltage; } ;


 struct si_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static u16 FUNC_1(struct radeon_device *VAR_0,
         u16 VAR_1)
{
 u16 VAR_2 = 0;
 struct si_power_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->leakage_voltage.count; VAR_4++){
  if (VAR_2 < VAR_3->leakage_voltage.entries[VAR_4].voltage)
   VAR_2 = VAR_3->leakage_voltage.entries[VAR_4].voltage;
 }

 if (VAR_3->leakage_voltage.count && (VAR_2 < VAR_1))
  return VAR_2;

 return VAR_1;
}
