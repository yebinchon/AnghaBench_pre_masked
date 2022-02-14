
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {scalar_t__ mclk_ss; scalar_t__ sclk_ss; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_7,
        bool VAR_8)
{
 struct rv7xx_power_info *VAR_9 = FUNC_1(VAR_7);

 if (VAR_8) {
  if (VAR_9->sclk_ss)
   FUNC_0(VAR_2, VAR_1, ~VAR_1);

  if (VAR_9->mclk_ss)
   FUNC_0(VAR_3, VAR_6, ~VAR_6);
 } else {
  FUNC_0(VAR_0, 0, ~VAR_4);
  FUNC_0(VAR_2, 0, ~VAR_1);
  FUNC_0(VAR_3, 0, ~VAR_6);
  FUNC_0(VAR_3, 0, ~VAR_5);
 }
}
