
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rv7xx_power_info {scalar_t__ mclk_strobe_mode_threshold; scalar_t__ mem_gddr5; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,scalar_t__,int) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

u8 FUNC_2(struct radeon_device *VAR_1, u32 VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4 = 0;
 bool VAR_5 = 0;

 if (VAR_3->mem_gddr5) {
  if (VAR_2 <= VAR_3->mclk_strobe_mode_threshold)
   VAR_5 = 1;
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5);

  if (VAR_5)
   VAR_4 |= VAR_0;
 }

 return VAR_4;
}
