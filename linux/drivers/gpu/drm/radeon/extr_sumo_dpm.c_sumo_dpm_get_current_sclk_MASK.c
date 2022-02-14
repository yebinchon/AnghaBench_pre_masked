
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sumo_ps {size_t num_levels; struct sumo_pl* levels; } ;
struct sumo_pl {size_t sclk; } ;
struct radeon_ps {int dummy; } ;
struct sumo_power_info {struct sumo_pl boost_pl; struct radeon_ps current_rps; } ;
struct radeon_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ) ;
 int VAR_3 ;
 struct sumo_power_info* FUNC_1 (struct radeon_device*) ;
 struct sumo_ps* FUNC_2 (struct radeon_ps*) ;

u32 FUNC_3(struct radeon_device *VAR_4)
{
 struct sumo_power_info *VAR_5 = FUNC_1(VAR_4);
 struct radeon_ps *VAR_6 = &VAR_5->current_rps;
 struct sumo_ps *VAR_7 = FUNC_2(VAR_6);
 struct sumo_pl *VAR_8;
 u32 VAR_9 =
  (FUNC_0(VAR_3) & VAR_1) >>
  VAR_2;

 if (VAR_9 == VAR_0) {
  VAR_8 = &VAR_5->boost_pl;
  return VAR_8->sclk;
 } else if (VAR_9 >= VAR_7->num_levels) {
  return 0;
 } else {
  VAR_8 = &VAR_7->levels[VAR_9];
  return VAR_8->sclk;
 }
}
