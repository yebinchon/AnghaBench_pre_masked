
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct radeon_power_state {int dummy; } ;
struct radeon_pm_clock_info {int dummy; } ;
struct radeon_mode_info {int atom_context; } ;
struct TYPE_8__ {int default_power_state_index; int num_power_states; int current_power_state_index; scalar_t__ current_vddc; TYPE_4__* power_state; scalar_t__ current_clock_mode_index; } ;
struct TYPE_6__ {int default_sclk; int default_mclk; } ;
struct radeon_device {TYPE_3__ pm; TYPE_1__ clock; struct radeon_mode_info mode_info; } ;
struct TYPE_7__ {scalar_t__ voltage; int type; } ;
struct TYPE_10__ {TYPE_2__ voltage; int sclk; int mclk; } ;
struct TYPE_9__ {int num_clock_modes; int pcie_lanes; TYPE_5__* clock_info; scalar_t__ flags; TYPE_5__* default_clock_mode; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,int *,int*,int*,int *) ;
 TYPE_5__* FUNC_2 (int,int,int ) ;
 TYPE_4__* FUNC_3 (int,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

void FUNC_7(struct radeon_device *VAR_5)
{
 struct radeon_mode_info *VAR_6 = &VAR_5->mode_info;
 int VAR_7 = FUNC_0(VAR_0, VAR_3);
 u16 VAR_8;
 u8 VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_5->pm.default_power_state_index = -1;

 if (FUNC_1(VAR_6->atom_context, VAR_7, ((void*)0),
       &VAR_9, &VAR_10, &VAR_8)) {
  switch (VAR_9) {
  case 1:
  case 2:
  case 3:
   VAR_11 = FUNC_4(VAR_5);
   break;
  case 4:
  case 5:
   VAR_11 = FUNC_5(VAR_5);
   break;
  case 6:
   VAR_11 = FUNC_6(VAR_5);
   break;
  default:
   break;
  }
 }

 if (VAR_11 == 0) {
  VAR_5->pm.power_state = FUNC_3(sizeof(struct radeon_power_state), VAR_1);
  if (VAR_5->pm.power_state) {
   VAR_5->pm.power_state[0].clock_info =
    FUNC_2(1,
            sizeof(struct radeon_pm_clock_info),
            VAR_1);
   if (VAR_5->pm.power_state[0].clock_info) {

    VAR_5->pm.power_state[VAR_11].type =
     VAR_2;
    VAR_5->pm.power_state[VAR_11].num_clock_modes = 1;
    VAR_5->pm.power_state[VAR_11].clock_info[0].mclk = VAR_5->clock.default_mclk;
    VAR_5->pm.power_state[VAR_11].clock_info[0].sclk = VAR_5->clock.default_sclk;
    VAR_5->pm.power_state[VAR_11].default_clock_mode =
     &VAR_5->pm.power_state[VAR_11].clock_info[0];
    VAR_5->pm.power_state[VAR_11].clock_info[0].voltage.type = VAR_4;
    VAR_5->pm.power_state[VAR_11].pcie_lanes = 16;
    VAR_5->pm.default_power_state_index = VAR_11;
    VAR_5->pm.power_state[VAR_11].flags = 0;
    VAR_11++;
   }
  }
 }

 VAR_5->pm.num_power_states = VAR_11;

 VAR_5->pm.current_power_state_index = VAR_5->pm.default_power_state_index;
 VAR_5->pm.current_clock_mode_index = 0;
 if (VAR_5->pm.default_power_state_index >= 0)
  VAR_5->pm.current_vddc =
   VAR_5->pm.power_state[VAR_5->pm.default_power_state_index].clock_info[0].voltage.voltage;
 else
  VAR_5->pm.current_vddc = 0;
}
