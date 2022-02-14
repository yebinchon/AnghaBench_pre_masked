
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct evergreen_arb_registers {void* mc_arb_burst_time; void* mc_arb_rfsh_rate; void* mc_arb_dram_timing2; void* mc_arb_dram_timing; } ;
struct evergreen_power_info {struct evergreen_arb_registers bootup_arb_registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_4)
{
 struct evergreen_power_info *VAR_5 = FUNC_1(VAR_4);
 struct evergreen_arb_registers *VAR_6 =
  &VAR_5->bootup_arb_registers;

 VAR_6->mc_arb_dram_timing = FUNC_0(VAR_1);
 VAR_6->mc_arb_dram_timing2 = FUNC_0(VAR_2);
 VAR_6->mc_arb_rfsh_rate = FUNC_0(VAR_3);
 VAR_6->mc_arb_burst_time = FUNC_0(VAR_0);
}
