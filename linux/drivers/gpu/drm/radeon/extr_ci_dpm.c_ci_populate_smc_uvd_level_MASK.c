
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
struct TYPE_10__ {size_t count; TYPE_1__* entries; } ;
struct TYPE_11__ {TYPE_2__ uvd_clock_voltage_dependency_table; } ;
struct TYPE_12__ {TYPE_3__ dyn_state; } ;
struct TYPE_13__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct atom_clock_dividers {scalar_t__ post_divider; } ;
struct TYPE_15__ {size_t UvdLevelCount; TYPE_6__* UvdLevel; } ;
struct TYPE_14__ {int MinVddc; int MinVddcPhases; void* DclkFrequency; void* VclkFrequency; void* DclkDivider; void* VclkDivider; } ;
struct TYPE_9__ {int v; void* dclk; void* vclk; } ;
typedef TYPE_7__ SMU7_Discrete_DpmTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct radeon_device*,int ,void*,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_3,
         SMU7_Discrete_DpmTable *VAR_4)
{
 u32 VAR_5;
 struct atom_clock_dividers VAR_6;
 int VAR_7 = -VAR_1;

 VAR_4->UvdLevelCount =
  VAR_3->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.count;

 for (VAR_5 = 0; VAR_5 < VAR_4->UvdLevelCount; VAR_5++) {
  VAR_4->UvdLevel[VAR_5].VclkFrequency =
   VAR_3->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries[VAR_5].vclk;
  VAR_4->UvdLevel[VAR_5].DclkFrequency =
   VAR_3->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries[VAR_5].dclk;
  VAR_4->UvdLevel[VAR_5].MinVddc =
   VAR_3->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries[VAR_5].v * VAR_2;
  VAR_4->UvdLevel[VAR_5].MinVddcPhases = 1;

  VAR_7 = FUNC_2(VAR_3,
           VAR_0,
           VAR_4->UvdLevel[VAR_5].VclkFrequency, 0, &VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_4->UvdLevel[VAR_5].VclkDivider = (u8)VAR_6.post_divider;

  VAR_7 = FUNC_2(VAR_3,
           VAR_0,
           VAR_4->UvdLevel[VAR_5].DclkFrequency, 0, &VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_4->UvdLevel[VAR_5].DclkDivider = (u8)VAR_6.post_divider;

  VAR_4->UvdLevel[VAR_5].VclkFrequency = FUNC_1(VAR_4->UvdLevel[VAR_5].VclkFrequency);
  VAR_4->UvdLevel[VAR_5].DclkFrequency = FUNC_1(VAR_4->UvdLevel[VAR_5].DclkFrequency);
  VAR_4->UvdLevel[VAR_5].MinVddc = FUNC_0(VAR_4->UvdLevel[VAR_5].MinVddc);
 }

 return VAR_7;
}
