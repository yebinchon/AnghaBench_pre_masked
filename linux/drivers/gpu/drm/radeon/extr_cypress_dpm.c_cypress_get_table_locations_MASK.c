
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef void* u16 ;
struct rv7xx_power_info {int sram_end; void* soft_regs_start; void* state_table_start; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {void* mc_reg_table_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,scalar_t__,scalar_t__*,int ) ;

int FUNC_3(struct radeon_device *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_1(VAR_4);
 struct evergreen_power_info *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4,
     VAR_0 +
     VAR_3,
     &VAR_7, VAR_5->sram_end);
 if (VAR_8)
  return VAR_8;

 VAR_5->state_table_start = (u16)VAR_7;

 VAR_8 = FUNC_2(VAR_4,
     VAR_0 +
     VAR_2,
     &VAR_7, VAR_5->sram_end);
 if (VAR_8)
  return VAR_8;

 VAR_5->soft_regs_start = (u16)VAR_7;

 VAR_8 = FUNC_2(VAR_4,
     VAR_0 +
     VAR_1,
     &VAR_7, VAR_5->sram_end);
 if (VAR_8)
  return VAR_8;

 VAR_6->mc_reg_table_start = (u16)VAR_7;

 return 0;
}
