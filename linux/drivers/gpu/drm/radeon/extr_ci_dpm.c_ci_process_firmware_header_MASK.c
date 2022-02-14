
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {void* arb_table_start; int sram_end; void* fan_table_start; void* mc_reg_table_start; void* soft_regs_start; void* dpm_table_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,void**,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_7)
{
 struct ci_power_info *VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7,
         VAR_2 +
         FUNC_2(VAR_3, VAR_0),
         &VAR_9, VAR_8->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_8->dpm_table_start = VAR_9;

 VAR_10 = FUNC_1(VAR_7,
         VAR_2 +
         FUNC_2(VAR_3, VAR_4),
         &VAR_9, VAR_8->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_8->soft_regs_start = VAR_9;

 VAR_10 = FUNC_1(VAR_7,
         VAR_2 +
         FUNC_2(VAR_3, VAR_6),
         &VAR_9, VAR_8->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_8->mc_reg_table_start = VAR_9;

 VAR_10 = FUNC_1(VAR_7,
         VAR_2 +
         FUNC_2(VAR_3, VAR_1),
         &VAR_9, VAR_8->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_8->fan_table_start = VAR_9;

 VAR_10 = FUNC_1(VAR_7,
         VAR_2 +
         FUNC_2(VAR_3, VAR_5),
         &VAR_9, VAR_8->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_8->arb_table_start = VAR_9;

 return 0;
}
