
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sumo_power_info {int fw_version; int enable_alt_vddnb; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_2)
{
 struct sumo_power_info *VAR_3 = FUNC_0(VAR_2);
 bool VAR_4 = 0;

 if (!VAR_3->enable_alt_vddnb)
  return VAR_4;

 if ((VAR_2->family == VAR_0) || (VAR_2->family == VAR_1)) {
  if (VAR_3->fw_version >= 0x00010C00)
   VAR_4 = 1;
 }

 return VAR_4;
}
