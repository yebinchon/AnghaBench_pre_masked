
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct TYPE_10__ {TYPE_1__* entries; scalar_t__ count; } ;
struct TYPE_11__ {TYPE_2__ acp_clock_voltage_dependency_table; } ;
struct TYPE_12__ {TYPE_3__ dyn_state; } ;
struct TYPE_13__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct atom_clock_dividers {scalar_t__ post_divider; } ;
struct TYPE_15__ {size_t AcpLevelCount; TYPE_6__* AcpLevel; } ;
struct TYPE_14__ {int MinPhases; int MinVoltage; int Frequency; void* Divider; } ;
struct TYPE_9__ {int v; int clk; } ;
typedef TYPE_7__ SMU7_Discrete_DpmTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_2,
         SMU7_Discrete_DpmTable *VAR_3)
{
 u32 VAR_4;
 struct atom_clock_dividers VAR_5;
 int VAR_6 = -VAR_1;

 VAR_3->AcpLevelCount = (u8)
  (VAR_2->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.count);

 for (VAR_4 = 0; VAR_4 < VAR_3->AcpLevelCount; VAR_4++) {
  VAR_3->AcpLevel[VAR_4].Frequency =
   VAR_2->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries[VAR_4].clk;
  VAR_3->AcpLevel[VAR_4].MinVoltage =
   VAR_2->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries[VAR_4].v;
  VAR_3->AcpLevel[VAR_4].MinPhases = 1;

  VAR_6 = FUNC_2(VAR_2,
           VAR_0,
           VAR_3->AcpLevel[VAR_4].Frequency, 0, &VAR_5);
  if (VAR_6)
   return VAR_6;

  VAR_3->AcpLevel[VAR_4].Divider = (u8)VAR_5.post_divider;

  VAR_3->AcpLevel[VAR_4].Frequency = FUNC_1(VAR_3->AcpLevel[VAR_4].Frequency);
  VAR_3->AcpLevel[VAR_4].MinVoltage = FUNC_0(VAR_3->AcpLevel[VAR_4].MinVoltage);
 }

 return VAR_6;
}
