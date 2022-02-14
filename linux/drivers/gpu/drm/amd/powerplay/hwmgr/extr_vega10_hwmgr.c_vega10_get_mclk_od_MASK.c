
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vega10_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct TYPE_6__ {struct vega10_single_dpm_table mem_table; } ;
struct TYPE_5__ {struct vega10_single_dpm_table mem_table; } ;
struct vega10_hwmgr {TYPE_3__ golden_dpm_table; TYPE_2__ dpm_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_4__ {int value; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct vega10_hwmgr *VAR_1 = VAR_0->backend;
 struct vega10_single_dpm_table *VAR_2 = &(VAR_1->dpm_table.mem_table);
 struct vega10_single_dpm_table *VAR_3 =
   &(VAR_1->golden_dpm_table.mem_table);
 int VAR_4 = VAR_2->dpm_levels[VAR_2->count - 1].value;
 int VAR_5 = VAR_3->dpm_levels
   [VAR_3->count - 1].value;

 VAR_4 -= VAR_5;
 VAR_4 = FUNC_0(VAR_4 * 100, VAR_5);

 return VAR_4;
}
