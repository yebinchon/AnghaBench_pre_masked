
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {int soft_max_level; int soft_min_level; } ;
struct TYPE_9__ {TYPE_3__* dpm_levels; TYPE_2__ dpm_state; } ;
struct vega20_dpm_table {TYPE_4__ soc_table; TYPE_4__ mem_table; TYPE_4__ gfx_table; } ;
struct TYPE_6__ {scalar_t__ dpm_context; } ;
struct smu_context {TYPE_1__ smu_dpm; } ;
struct TYPE_8__ {int value; } ;


 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (TYPE_4__*) ;
 size_t FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct smu_context*,int,int) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_0, bool VAR_1)
{
 uint32_t VAR_2;
 int VAR_3 = 0;
 struct vega20_dpm_table *VAR_4 =
  (struct vega20_dpm_table *)VAR_0->smu_dpm.dpm_context;

 if (VAR_1)
  VAR_2 = FUNC_1(&(VAR_4->gfx_table));
 else
  VAR_2 = FUNC_2(&(VAR_4->gfx_table));

 VAR_4->gfx_table.dpm_state.soft_min_level =
  VAR_4->gfx_table.dpm_state.soft_max_level =
  VAR_4->gfx_table.dpm_levels[VAR_2].value;

 if (VAR_1)
  VAR_2 = FUNC_1(&(VAR_4->mem_table));
 else
  VAR_2 = FUNC_2(&(VAR_4->mem_table));

 VAR_4->mem_table.dpm_state.soft_min_level =
  VAR_4->mem_table.dpm_state.soft_max_level =
  VAR_4->mem_table.dpm_levels[VAR_2].value;

 if (VAR_1)
  VAR_2 = FUNC_1(&(VAR_4->soc_table));
 else
  VAR_2 = FUNC_2(&(VAR_4->soc_table));

 VAR_4->soc_table.dpm_state.soft_min_level =
  VAR_4->soc_table.dpm_state.soft_max_level =
  VAR_4->soc_table.dpm_levels[VAR_2].value;

 VAR_3 = FUNC_3(VAR_0, 0, 0xFFFFFFFF);
 if (VAR_3) {
  FUNC_0("Failed to upload boot level to %s!\n",
    VAR_1 ? "highest" : "lowest");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_0, 1, 0xFFFFFFFF);
 if (VAR_3) {
  FUNC_0("Failed to upload dpm max level to %s!\n!",
    VAR_1 ? "highest" : "lowest");
  return VAR_3;
 }

 return VAR_3;
}
