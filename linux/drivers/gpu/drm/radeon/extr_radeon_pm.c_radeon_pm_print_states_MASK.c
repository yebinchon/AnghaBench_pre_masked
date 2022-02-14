
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_power_state {size_t type; int flags; int num_clock_modes; struct radeon_pm_clock_info* clock_info; int pcie_lanes; } ;
struct TYPE_4__ {int voltage; } ;
struct radeon_pm_clock_info {int sclk; int mclk; TYPE_2__ voltage; } ;
struct TYPE_3__ {int num_power_states; int default_power_state_index; struct radeon_power_state* power_state; } ;
struct radeon_device {int flags; TYPE_1__ pm; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_4)
{
 int VAR_5, VAR_6;
 struct radeon_power_state *VAR_7;
 struct radeon_pm_clock_info *VAR_8;

 FUNC_0("%d Power State(s)\n", VAR_4->pm.num_power_states);
 for (VAR_5 = 0; VAR_5 < VAR_4->pm.num_power_states; VAR_5++) {
  VAR_7 = &VAR_4->pm.power_state[VAR_5];
  FUNC_0("State %d: %s\n", VAR_5,
   VAR_3[VAR_7->type]);
  if (VAR_5 == VAR_4->pm.default_power_state_index)
   FUNC_0("\tDefault");
  if ((VAR_4->flags & VAR_1) && !(VAR_4->flags & VAR_0))
   FUNC_0("\t%d PCIE Lanes\n", VAR_7->pcie_lanes);
  if (VAR_7->flags & VAR_2)
   FUNC_0("\tSingle display only\n");
  FUNC_0("\t%d Clock Mode(s)\n", VAR_7->num_clock_modes);
  for (VAR_6 = 0; VAR_6 < VAR_7->num_clock_modes; VAR_6++) {
   VAR_8 = &(VAR_7->clock_info[VAR_6]);
   if (VAR_4->flags & VAR_0)
    FUNC_0("\t\t%d e: %d\n",
       VAR_6,
       VAR_8->sclk * 10);
   else
    FUNC_0("\t\t%d e: %d\tm: %d\tv: %d\n",
       VAR_6,
       VAR_8->sclk * 10,
       VAR_8->mclk * 10,
       VAR_8->voltage.voltage);
  }
 }
}
