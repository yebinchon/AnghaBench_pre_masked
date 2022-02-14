
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct rv7xx_power_info {int sram_end; scalar_t__ state_table_start; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ RV770_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*,TYPE_1__*) ;
 int FUNC_2 (struct radeon_device*,scalar_t__,int const*,int,int ) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_2,
     struct radeon_ps *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_3(VAR_2);
 u16 VAR_5 = VAR_4->state_table_start +
  FUNC_0(VAR_0, VAR_1);
 RV770_SMC_SWSTATE VAR_6 = { 0 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_2, VAR_5, (const u8 *)&VAR_6,
           sizeof(RV770_SMC_SWSTATE),
           VAR_4->sram_end);
}
