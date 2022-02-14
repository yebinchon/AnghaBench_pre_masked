
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sumo_power_info {int fw_version; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;

void FUNC_7(struct radeon_device *VAR_0)
{
 struct sumo_power_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_0);
 VAR_1->fw_version = FUNC_3(VAR_0);
 FUNC_0("Found smc ucode version: 0x%08x\n", VAR_1->fw_version);
 FUNC_5(VAR_0);
 FUNC_1(VAR_0);
 FUNC_6(VAR_0, 1);
}
