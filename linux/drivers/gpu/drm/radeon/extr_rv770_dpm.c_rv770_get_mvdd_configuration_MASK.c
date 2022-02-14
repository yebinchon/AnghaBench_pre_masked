
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv7xx_power_info {int mvdd_control; scalar_t__ mvdd_split_frequency; } ;
struct radeon_device {int dummy; } ;
struct atom_memory_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*,int ,struct atom_memory_info*) ;
 scalar_t__ FUNC_1 (struct atom_memory_info*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_4(VAR_0);
 u8 VAR_2;
 struct atom_memory_info VAR_3;

 VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_0, VAR_2, &VAR_3)) {
  VAR_1->mvdd_control = 0;
  return 0;
 }

 VAR_1->mvdd_split_frequency =
  FUNC_1(&VAR_3);

 if (VAR_1->mvdd_split_frequency == 0) {
  VAR_1->mvdd_control = 0;
  return 0;
 }

 return FUNC_3(VAR_0);
}
