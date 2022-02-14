
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smu8_power_state {int need_dfs_bypass; scalar_t__ action; } ;
struct TYPE_11__ {scalar_t__* nbp_memory_clock; } ;
struct smu8_hwmgr {int battery_state; TYPE_5__ sys_info; } ;
struct TYPE_7__ {scalar_t__ ui_label; } ;
struct pp_power_state {TYPE_1__ classification; int hardware; } ;
struct TYPE_9__ {scalar_t__ mclk; } ;
struct TYPE_10__ {TYPE_3__ max_clock_voltage_on_ac; } ;
struct TYPE_8__ {int platformCaps; } ;
struct pp_hwmgr {scalar_t__ request_dpm_level; TYPE_6__* display_config; TYPE_4__ dyn_state; TYPE_2__ platform_descriptor; struct smu8_hwmgr* backend; } ;
struct PP_Clocks {scalar_t__ memoryClock; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_12__ {scalar_t__ min_mem_set_clock; int num_display; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct smu8_power_state* FUNC_0 (int *) ;
 struct smu8_power_state* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pp_hwmgr*,int,int) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_8,
    struct pp_power_state *VAR_9,
   const struct pp_power_state *VAR_10)
{
 struct smu8_power_state *VAR_11 =
    FUNC_1(&VAR_9->hardware);

 const struct smu8_power_state *VAR_12 =
    FUNC_0(&VAR_10->hardware);

 struct smu8_hwmgr *VAR_13 = VAR_8->backend;
 struct PP_Clocks VAR_14 = {0, 0, 0, 0};
 bool VAR_15;

 VAR_11->need_dfs_bypass = 1;

 VAR_13->battery_state = (VAR_6 == VAR_9->classification.ui_label);

 VAR_14.memoryClock = VAR_8->display_config->min_mem_set_clock != 0 ?
    VAR_8->display_config->min_mem_set_clock :
    VAR_13->sys_info.nbp_memory_clock[1];


 if (FUNC_2(VAR_8->platform_descriptor.platformCaps, VAR_5))
  VAR_14.memoryClock = VAR_8->dyn_state.max_clock_voltage_on_ac.mclk;

 VAR_15 = (VAR_14.memoryClock > VAR_13->sys_info.nbp_memory_clock[VAR_7 - 1])
   || (VAR_8->display_config->num_display >= 3);

 VAR_11->action = VAR_12->action;

 if (VAR_8->request_dpm_level == VAR_0)
  FUNC_3(VAR_8, 0, 0);
 else if (VAR_8->request_dpm_level == VAR_1)
  FUNC_3(VAR_8, 0, 1);
 else if (!VAR_15 && (VAR_11->action == VAR_4))
  VAR_11->action = VAR_2;
 else if (VAR_15 && (VAR_11->action != VAR_4))
  VAR_11->action = VAR_4;
 else
  VAR_11->action = VAR_3;

 return 0;
}
