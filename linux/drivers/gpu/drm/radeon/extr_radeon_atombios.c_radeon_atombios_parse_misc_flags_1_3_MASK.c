
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int default_power_state_index; TYPE_2__* power_state; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_5__ {int misc; int misc2; TYPE_1__* clock_info; TYPE_1__* default_clock_mode; void* type; int flags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_14,
       int VAR_15,
       u32 VAR_16, u32 VAR_17)
{
 VAR_14->pm.power_state[VAR_15].misc = VAR_16;
 VAR_14->pm.power_state[VAR_15].misc2 = VAR_17;

 if (VAR_16 & VAR_6)
  VAR_14->pm.power_state[VAR_15].type =
   VAR_11;
 if (VAR_16 & VAR_2)
  VAR_14->pm.power_state[VAR_15].type =
   VAR_8;
 if (VAR_16 & VAR_3)
  VAR_14->pm.power_state[VAR_15].type =
   VAR_8;
 if (VAR_16 & VAR_5)
  VAR_14->pm.power_state[VAR_15].type =
   VAR_7;
 if (VAR_16 & VAR_1) {
  VAR_14->pm.power_state[VAR_15].type =
   VAR_10;
  VAR_14->pm.power_state[VAR_15].flags &=
   ~VAR_13;
 }
 if (VAR_17 & VAR_0)
  VAR_14->pm.power_state[VAR_15].type =
   VAR_7;
 if (VAR_16 & VAR_4) {
  VAR_14->pm.power_state[VAR_15].type =
   VAR_9;
  VAR_14->pm.default_power_state_index = VAR_15;
  VAR_14->pm.power_state[VAR_15].default_clock_mode =
   &VAR_14->pm.power_state[VAR_15].clock_info[0];
 } else if (VAR_15 == 0) {
  VAR_14->pm.power_state[VAR_15].clock_info[0].flags |=
   VAR_12;
 }
}
