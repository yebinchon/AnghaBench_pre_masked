
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rv7xx_power_info {scalar_t__ mclk_strobe_mode_threshold; scalar_t__ mem_gddr5; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 struct rv7xx_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static u8 FUNC_3(struct radeon_device *VAR_1, u32 VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4 = 0;
 u8 VAR_5 = 0;

 if (VAR_2 <= VAR_3->mclk_strobe_mode_threshold)
  VAR_4 = 1;

 if (VAR_3->mem_gddr5)
  VAR_5 = FUNC_2(VAR_2, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_2);

 if (VAR_4)
  VAR_5 |= VAR_0;

 return VAR_5;
}
