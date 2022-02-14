
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct sumo_power_info {scalar_t__ enable_dpm; scalar_t__ enable_boost; struct radeon_ps current_rps; struct radeon_ps requested_rps; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;
 struct sumo_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_15 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_16 (struct radeon_device*) ;

int FUNC_17(struct radeon_device *VAR_0)
{
 struct sumo_power_info *VAR_1 = FUNC_3(VAR_0);
 struct radeon_ps *VAR_2 = &VAR_1->requested_rps;
 struct radeon_ps *VAR_3 = &VAR_1->current_rps;

 if (VAR_1->enable_dpm)
  FUNC_15(VAR_0, VAR_2, VAR_3);
 if (VAR_1->enable_boost) {
  FUNC_0(VAR_0, VAR_2, 0);
  FUNC_4(VAR_0, VAR_2);
 }
 if (VAR_1->enable_dpm) {
  FUNC_6(VAR_0, VAR_2, VAR_3);
  FUNC_1(VAR_0);
  FUNC_11(VAR_0);
  FUNC_13(VAR_0);
  FUNC_16(VAR_0);
  FUNC_9(VAR_0, VAR_2, VAR_3);
  FUNC_10(VAR_0, VAR_2);
  FUNC_8(VAR_0, VAR_2);
  FUNC_7(VAR_0, VAR_2);
  FUNC_2(VAR_0, VAR_2);
  FUNC_12(VAR_0);
  FUNC_13(VAR_0);
  FUNC_12(VAR_0);
  FUNC_5(VAR_0, VAR_2, VAR_3);
 }
 if (VAR_1->enable_boost)
  FUNC_0(VAR_0, VAR_2, 1);
 if (VAR_1->enable_dpm)
  FUNC_14(VAR_0, VAR_2, VAR_3);

 return 0;
}
