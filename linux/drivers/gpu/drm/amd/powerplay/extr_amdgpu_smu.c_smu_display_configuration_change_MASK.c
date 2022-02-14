
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {int mutex; int adev; int pm_enabled; } ;
struct amd_pp_display_configuration {int min_dcef_deep_sleep_set_clk; int num_path_including_non_display; int nb_pstate_switch_disable; int cpu_pstate_disable; int cpu_cc6_disable; int cpu_pstate_separation_time; TYPE_1__* displays; } ;
struct TYPE_2__ {scalar_t__ controller_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct smu_context*,int) ;
 int FUNC_5 (struct smu_context*,int ,int ,int ,int ) ;

int FUNC_6(struct smu_context *VAR_1,
         const struct amd_pp_display_configuration *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 if (!VAR_1->pm_enabled || !FUNC_0(VAR_1->adev))
  return -VAR_0;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_1->mutex);

 FUNC_4(VAR_1,
       VAR_2->min_dcef_deep_sleep_set_clk / 100);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_path_including_non_display; VAR_3++) {
  if (VAR_2->displays[VAR_3].controller_id != 0)
   VAR_4++;
 }

 FUNC_3(VAR_1, VAR_4);

 FUNC_5(VAR_1, VAR_2->cpu_pstate_separation_time,
      VAR_2->cpu_cc6_disable,
      VAR_2->cpu_pstate_disable,
      VAR_2->nb_pstate_switch_disable);

 FUNC_2(&VAR_1->mutex);

 return 0;
}
