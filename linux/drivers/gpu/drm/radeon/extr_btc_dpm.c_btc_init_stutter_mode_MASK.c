
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; scalar_t__ mclk_stutter_mode_threshold; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 if (VAR_2->mclk_stutter_mode_threshold) {
  if (VAR_2->mem_gddr5) {
   VAR_3 = FUNC_0(VAR_0);
   if ((0x200 & VAR_3) == 0) {
    VAR_3 = (VAR_3 & 0xfffffc0b) | 0x204;
    FUNC_1(VAR_0, VAR_3);
   }
  }
 }
}
