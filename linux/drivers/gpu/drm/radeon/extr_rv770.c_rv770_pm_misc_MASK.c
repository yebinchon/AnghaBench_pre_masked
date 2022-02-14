
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_voltage {scalar_t__ type; int voltage; } ;
struct radeon_power_state {TYPE_1__* clock_info; } ;
struct TYPE_4__ {int requested_power_state_index; int requested_clock_mode_index; int current_vddc; struct radeon_power_state* power_state; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_3__ {struct radeon_voltage voltage; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct radeon_device*,int,int ) ;

void FUNC_2(struct radeon_device *VAR_2)
{
 int VAR_3 = VAR_2->pm.requested_power_state_index;
 int VAR_4 = VAR_2->pm.requested_clock_mode_index;
 struct radeon_power_state *VAR_5 = &VAR_2->pm.power_state[VAR_3];
 struct radeon_voltage *VAR_6 = &VAR_5->clock_info[VAR_4].voltage;

 if ((VAR_6->type == VAR_1) && VAR_6->voltage) {

  if (VAR_6->voltage == 0xff01)
   return;
  if (VAR_6->voltage != VAR_2->pm.current_vddc) {
   FUNC_1(VAR_2, VAR_6->voltage, VAR_0);
   VAR_2->pm.current_vddc = VAR_6->voltage;
   FUNC_0("Setting: v: %d\n", VAR_6->voltage);
  }
 }
}
