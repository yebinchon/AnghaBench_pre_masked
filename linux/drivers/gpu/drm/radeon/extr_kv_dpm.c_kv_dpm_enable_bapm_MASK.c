
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct kv_power_info {scalar_t__ bapm_enable; } ;


 int FUNC_0 (char*) ;
 struct kv_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;

void FUNC_3(struct radeon_device *VAR_0, bool VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if (VAR_2->bapm_enable) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (VAR_3)
   FUNC_0("kv_smc_bapm_enable failed\n");
 }
}
