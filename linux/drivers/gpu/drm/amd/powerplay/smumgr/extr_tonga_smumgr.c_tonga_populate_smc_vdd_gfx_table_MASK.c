
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int count; TYPE_1__* entries; } ;
struct smu7_hwmgr {scalar_t__ vdd_gfx_control; TYPE_2__ vddgfx_voltage_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_7__ {unsigned int VddGfxLevelCount; int * VddGfxTable; } ;
struct TYPE_5__ {int value; } ;
typedef TYPE_3__ SMU72_Discrete_DpmTable ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
   SMU72_Discrete_DpmTable *VAR_3)
{
 unsigned int VAR_4;
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_2->backend);

 if (VAR_0 == VAR_5->vdd_gfx_control) {
  VAR_3->VddGfxLevelCount = VAR_5->vddgfx_voltage_table.count;
  for (VAR_4 = 0; VAR_4 < VAR_5->vddgfx_voltage_table.count; VAR_4++) {
   VAR_3->VddGfxTable[VAR_4] =
    FUNC_1(VAR_5->vddgfx_voltage_table.entries[VAR_4].value * VAR_1);
  }
  FUNC_0(VAR_3->VddGfxLevelCount);
 }
 return 0;
}
