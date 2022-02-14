
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {scalar_t__ mclk_ss; scalar_t__ sclk_ss; } ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_6,
      bool VAR_7)
{
 struct rv7xx_power_info *VAR_8 = FUNC_2(VAR_6);

 if (VAR_7) {
  if (VAR_8->sclk_ss)
   FUNC_0(VAR_4, VAR_3, ~VAR_3);

  if (VAR_8->mclk_ss) {
   if (VAR_6->family == VAR_2)
    FUNC_1(VAR_6, 1);
  }
 } else {
  FUNC_0(VAR_1, 0, ~VAR_5);

  FUNC_0(VAR_4, 0, ~VAR_3);

  FUNC_0(VAR_0, 0, ~VAR_5);

  if (VAR_6->family == VAR_2)
   FUNC_1(VAR_6, 0);
 }
}
