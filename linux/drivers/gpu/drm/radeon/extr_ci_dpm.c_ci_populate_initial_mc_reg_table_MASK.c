
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {int sram_end; int smc_mc_reg_table; int mc_reg_table_start; } ;
typedef int SMU7_Discrete_MCRegisters ;


 int FUNC_0 (struct radeon_device*,int *) ;
 int FUNC_1 (struct radeon_device*,int ,int *,int,int ) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int *) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_4(&VAR_1->smc_mc_reg_table, 0, sizeof(SMU7_Discrete_MCRegisters));

 VAR_2 = FUNC_3(VAR_0, &VAR_1->smc_mc_reg_table);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_0, &VAR_1->smc_mc_reg_table);

 return FUNC_1(VAR_0,
        VAR_1->mc_reg_table_start,
        (u8 *)&VAR_1->smc_mc_reg_table,
        sizeof(SMU7_Discrete_MCRegisters),
        VAR_1->sram_end);
}
