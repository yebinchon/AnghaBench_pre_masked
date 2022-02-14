
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_pl {int sclk; } ;
struct rv7xx_ps {struct rv7xx_pl high; struct rv7xx_pl medium; struct rv7xx_pl low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {struct radeon_ps current_rps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_2 (struct radeon_ps*) ;

u32 FUNC_3(struct radeon_device *VAR_3)
{
 struct evergreen_power_info *VAR_4 = FUNC_1(VAR_3);
 struct radeon_ps *VAR_5 = &VAR_4->current_rps;
 struct rv7xx_ps *VAR_6 = FUNC_2(VAR_5);
 struct rv7xx_pl *VAR_7;
 u32 VAR_8 =
  (FUNC_0(VAR_2) & VAR_0) >>
  VAR_1;

 if (VAR_8 > 2) {
  return 0;
 } else {
  if (VAR_8 == 0)
   VAR_7 = &VAR_6->low;
  else if (VAR_8 == 1)
   VAR_7 = &VAR_6->medium;
  else
   VAR_7 = &VAR_6->high;
  return VAR_7->sclk;
 }
}
