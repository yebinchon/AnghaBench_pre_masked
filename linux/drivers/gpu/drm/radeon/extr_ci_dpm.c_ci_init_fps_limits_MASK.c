
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {void* FpsLowT; void* FpsHighT; } ;
struct ci_power_info {scalar_t__ caps_fps; TYPE_1__ smc_state_table; } ;
typedef TYPE_1__ SMU7_Discrete_DpmTable ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_0(VAR_0);
 SMU7_Discrete_DpmTable *VAR_2 = &VAR_1->smc_state_table;

 if (VAR_1->caps_fps) {
  u16 VAR_3;

  VAR_3 = 45;
  VAR_2->FpsHighT = FUNC_1(VAR_3);

  VAR_3 = 30;
  VAR_2->FpsLowT = FUNC_1(VAR_3);
 }
}
