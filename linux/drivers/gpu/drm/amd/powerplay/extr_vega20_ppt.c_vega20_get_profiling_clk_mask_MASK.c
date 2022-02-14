
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vega20_single_dpm_table {scalar_t__ count; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table soc_table; struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct TYPE_2__ {scalar_t__ dpm_context; } ;
struct smu_context {TYPE_1__ smu_dpm; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_0(struct smu_context *VAR_7,
         enum amd_dpm_forced_level VAR_8,
         uint32_t *VAR_9,
         uint32_t *VAR_10,
         uint32_t *VAR_11)
{
 struct vega20_dpm_table *VAR_12 = (struct vega20_dpm_table *)VAR_7->smu_dpm.dpm_context;
 struct vega20_single_dpm_table *VAR_13;
 struct vega20_single_dpm_table *VAR_14;
 struct vega20_single_dpm_table *VAR_15;

 if (!VAR_7->smu_dpm.dpm_context)
  return -VAR_3;

 VAR_13 = &VAR_12->gfx_table;
 VAR_14 = &VAR_12->mem_table;
 VAR_15 = &VAR_12->soc_table;

 *VAR_9 = 0;
 *VAR_10 = 0;
 *VAR_11 = 0;

 if (VAR_13->count > VAR_4 &&
     VAR_14->count > VAR_5 &&
     VAR_15->count > VAR_6) {
  *VAR_9 = VAR_4;
  *VAR_10 = VAR_5;
  *VAR_11 = VAR_6;
 }

 if (VAR_8 == VAR_1) {
  *VAR_9 = 0;
 } else if (VAR_8 == VAR_0) {
  *VAR_10 = 0;
 } else if (VAR_8 == VAR_2) {
  *VAR_9 = VAR_13->count - 1;
  *VAR_10 = VAR_14->count - 1;
  *VAR_11 = VAR_15->count - 1;
 }

 return 0;
}
