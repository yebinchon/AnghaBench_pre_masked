
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct si_power_info {void* papm_cfg_table_start; int sram_end; void* spll_table_start; void* dte_table_start; void* cac_table_start; void* arb_table_start; void* fan_table_start; void* mc_reg_table_start; void* soft_regs_start; void* state_table_start; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,void**,int ) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_10)
{
 struct si_power_info *VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_9,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->state_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_7,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->soft_regs_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_6,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->mc_reg_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_4,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->fan_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_5,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->arb_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_0,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->cac_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_1,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->dte_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_8,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->spll_table_start = VAR_12;

 VAR_13 = FUNC_0(VAR_10,
         VAR_2 +
         VAR_3,
         &VAR_12, VAR_11->sram_end);
 if (VAR_13)
  return VAR_13;

 VAR_11->papm_cfg_table_start = VAR_12;

 return VAR_13;
}
