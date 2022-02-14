
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {TYPE_2__* hwmgr_func; } ;
struct amd_pp_display_configuration {int num_path_including_non_display; int nb_pstate_switch_disable; int cpu_pstate_disable; int cpu_cc6_disable; int cpu_pstate_separation_time; TYPE_1__* displays; int min_dcef_deep_sleep_set_clk; } ;
struct TYPE_4__ {int (* store_cc6_data ) (struct pp_hwmgr*,int ,int ,int ,int ) ;int (* set_active_display_count ) (struct pp_hwmgr*,int) ;int (* set_min_deep_sleep_dcefclk ) (struct pp_hwmgr*,int ) ;} ;
struct TYPE_3__ {scalar_t__ controller_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int) ;
 int FUNC_3 (struct pp_hwmgr*,int ,int ,int ,int ) ;

int FUNC_4(struct pp_hwmgr *VAR_1,
      const struct amd_pp_display_configuration *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 if (((void*)0) != VAR_1->hwmgr_func->set_min_deep_sleep_dcefclk)
  VAR_1->hwmgr_func->set_min_deep_sleep_dcefclk(VAR_1, VAR_2->min_dcef_deep_sleep_set_clk);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_path_including_non_display; VAR_3++) {
  if (VAR_2->displays[VAR_3].controller_id != 0)
   VAR_4++;
 }

 if (((void*)0) != VAR_1->hwmgr_func->set_active_display_count)
  VAR_1->hwmgr_func->set_active_display_count(VAR_1, VAR_4);

 if (VAR_1->hwmgr_func->store_cc6_data == ((void*)0))
  return -VAR_0;



 if (VAR_1->hwmgr_func->store_cc6_data)
  VAR_1->hwmgr_func->store_cc6_data(VAR_1,
    VAR_2->cpu_pstate_separation_time,
    VAR_2->cpu_cc6_disable,
    VAR_2->cpu_pstate_disable,
    VAR_2->nb_pstate_switch_disable);

 return 0;
}
