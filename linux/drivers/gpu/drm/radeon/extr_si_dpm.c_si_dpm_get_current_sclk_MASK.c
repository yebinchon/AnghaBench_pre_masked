
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rv7xx_pl {size_t sclk; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {size_t performance_level_count; struct rv7xx_pl* performance_levels; } ;
struct evergreen_power_info {struct radeon_ps current_rps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 int VAR_2 ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct ni_ps* FUNC_2 (struct radeon_ps*) ;

u32 FUNC_3(struct radeon_device *VAR_3)
{
 struct evergreen_power_info *VAR_4 = FUNC_1(VAR_3);
 struct radeon_ps *VAR_5 = &VAR_4->current_rps;
 struct ni_ps *VAR_6 = FUNC_2(VAR_5);
 struct rv7xx_pl *VAR_7;
 u32 VAR_8 =
  (FUNC_0(VAR_2) & VAR_0) >>
  VAR_1;

 if (VAR_8 >= VAR_6->performance_level_count) {
  return 0;
 } else {
  VAR_7 = &VAR_6->performance_levels[VAR_8];
  return VAR_7->sclk;
 }
}
