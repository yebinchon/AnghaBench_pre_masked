
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vega20_single_dpm_table {scalar_t__ count; } ;
struct TYPE_2__ {struct vega20_single_dpm_table soc_table; struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct vega20_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_6, enum amd_dpm_forced_level VAR_7,
    uint32_t *VAR_8, uint32_t *VAR_9, uint32_t *VAR_10)
{
 struct vega20_hwmgr *VAR_11 = (struct vega20_hwmgr *)(VAR_6->backend);
 struct vega20_single_dpm_table *VAR_12 = &(VAR_11->dpm_table.gfx_table);
 struct vega20_single_dpm_table *VAR_13 = &(VAR_11->dpm_table.mem_table);
 struct vega20_single_dpm_table *VAR_14 = &(VAR_11->dpm_table.soc_table);

 *VAR_8 = 0;
 *VAR_9 = 0;
 *VAR_10 = 0;

 if (VAR_12->count > VAR_3 &&
     VAR_13->count > VAR_4 &&
     VAR_14->count > VAR_5) {
  *VAR_8 = VAR_3;
  *VAR_9 = VAR_4;
  *VAR_10 = VAR_5;
 }

 if (VAR_7 == VAR_1) {
  *VAR_8 = 0;
 } else if (VAR_7 == VAR_0) {
  *VAR_9 = 0;
 } else if (VAR_7 == VAR_2) {
  *VAR_8 = VAR_12->count - 1;
  *VAR_9 = VAR_13->count - 1;
  *VAR_10 = VAR_14->count - 1;
 }

 return 0;
}
