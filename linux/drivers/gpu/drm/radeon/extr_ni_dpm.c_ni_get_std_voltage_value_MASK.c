
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_11__ {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_10__ {TYPE_4__ cac_leakage_table; } ;
struct TYPE_12__ {TYPE_3__ dyn_state; } ;
struct TYPE_9__ {TYPE_5__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_13__ {size_t index; int value; } ;
struct TYPE_8__ {int vddc; } ;
typedef TYPE_6__ NISLANDS_SMC_VOLTAGE_VALUE ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_0,
        NISLANDS_SMC_VOLTAGE_VALUE *VAR_1,
        u16 *VAR_2)
{
 if (VAR_0->pm.dpm.dyn_state.cac_leakage_table.entries &&
     ((u32)VAR_1->index < VAR_0->pm.dpm.dyn_state.cac_leakage_table.count))
  *VAR_2 = VAR_0->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_1->index].vddc;
 else
  *VAR_2 = FUNC_0(VAR_1->value);

 return 0;
}
