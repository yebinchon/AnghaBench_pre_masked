
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; } ;
struct radeon_device {int dummy; } ;


 struct rv7xx_power_info* FUNC_0 (struct radeon_device*) ;

u32 FUNC_1(struct radeon_device *VAR_0,
     u32 VAR_1, u32 VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = VAR_3->mem_gddr5 ? 1 : 2;
 u32 VAR_5 = (4 * VAR_4 * VAR_1) / (VAR_2 / 2);
 u32 VAR_6;

 if (VAR_5 <= 4)
  VAR_6 = 0;
 else if (VAR_5 < 8)
  VAR_6 = VAR_5 - 4;
 else {
  VAR_6 = VAR_5 / 2 ;
  if (VAR_6 > 18)
   VAR_6 = 18;
 }

 return VAR_6;
}
