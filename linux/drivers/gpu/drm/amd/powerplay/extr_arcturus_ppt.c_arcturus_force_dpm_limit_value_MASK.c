
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ dpm_context; } ;
struct smu_context {TYPE_1__ smu_dpm; } ;
struct TYPE_7__ {int soft_max_level; int soft_min_level; } ;
struct TYPE_9__ {TYPE_3__* dpm_levels; TYPE_2__ dpm_state; } ;
struct arcturus_dpm_table {TYPE_4__ soc_table; TYPE_4__ mem_table; TYPE_4__ gfx_table; } ;
struct TYPE_8__ {int value; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 size_t FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct smu_context*,int,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_0, bool VAR_1)
{
 struct arcturus_dpm_table *VAR_2 =
  (struct arcturus_dpm_table *)VAR_0->smu_dpm.dpm_context;
 uint32_t VAR_3;
 int VAR_4 = 0;


 if (VAR_1)
  VAR_3 = FUNC_0(&(VAR_2->gfx_table));
 else
  VAR_3 = FUNC_1(&(VAR_2->gfx_table));

 VAR_2->gfx_table.dpm_state.soft_min_level =
  VAR_2->gfx_table.dpm_state.soft_max_level =
  VAR_2->gfx_table.dpm_levels[VAR_3].value;


 if (VAR_1)
  VAR_3 = FUNC_0(&(VAR_2->mem_table));
 else
  VAR_3 = FUNC_1(&(VAR_2->mem_table));

 VAR_2->mem_table.dpm_state.soft_min_level =
  VAR_2->mem_table.dpm_state.soft_max_level =
  VAR_2->mem_table.dpm_levels[VAR_3].value;


 if (VAR_1)
  VAR_3 = FUNC_0(&(VAR_2->soc_table));
 else
  VAR_3 = FUNC_1(&(VAR_2->soc_table));

 VAR_2->soc_table.dpm_state.soft_min_level =
  VAR_2->soc_table.dpm_state.soft_max_level =
  VAR_2->soc_table.dpm_levels[VAR_3].value;

 VAR_4 = FUNC_2(VAR_0, 0, 0xFFFFFFFF);
 if (VAR_4) {
  FUNC_3("Failed to upload boot level to %s!\n",
    VAR_1 ? "highest" : "lowest");
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_0, 1, 0xFFFFFFFF);
 if (VAR_4) {
  FUNC_3("Failed to upload dpm max level to %s!\n!",
    VAR_1 ? "highest" : "lowest");
  return VAR_4;
 }

 return VAR_4;
}
