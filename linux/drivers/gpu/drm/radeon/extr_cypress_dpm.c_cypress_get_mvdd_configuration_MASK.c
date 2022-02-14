
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rv7xx_power_info {int mvdd_control; scalar_t__ mvdd_split_frequency; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {int mvdd_high_index; int mvdd_low_index; } ;
struct atom_memory_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct atom_memory_info*) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ,struct atom_memory_info*) ;
 int FUNC_4 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_5(VAR_3);
 struct evergreen_power_info *VAR_5 = FUNC_2(VAR_3);
 u8 VAR_6;
 struct atom_memory_info VAR_7;
 u32 VAR_8 = FUNC_0(VAR_2);

 if (!(VAR_8 & VAR_0)) {
  VAR_5->mvdd_high_index = 0;
  VAR_5->mvdd_low_index = 1;
  VAR_4->mvdd_control = 0;
  return 0;
 }

 if (VAR_8 & VAR_1)
  VAR_5->mvdd_high_index = 1;
 else
  VAR_5->mvdd_high_index = 0;

 VAR_5->mvdd_low_index =
  (VAR_5->mvdd_high_index == 0) ? 1 : 0;

 VAR_6 = FUNC_4(VAR_3);

 if (FUNC_3(VAR_3, VAR_6, &VAR_7)) {
  VAR_4->mvdd_control = 0;
  return 0;
 }

 VAR_4->mvdd_split_frequency =
  FUNC_1(&VAR_7);

 if (VAR_4->mvdd_split_frequency == 0) {
  VAR_4->mvdd_control = 0;
  return 0;
 }

 return 0;
}
