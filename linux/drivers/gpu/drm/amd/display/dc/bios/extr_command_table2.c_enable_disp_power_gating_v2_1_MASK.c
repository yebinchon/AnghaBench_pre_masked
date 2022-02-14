
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int enable; int disp_pipe_id; } ;
struct TYPE_4__ {int member_0; } ;
struct enable_disp_power_gating_ps_allocation {TYPE_3__ param; TYPE_1__ member_0; } ;
struct bios_parser {TYPE_2__* cmd_helper; } ;
typedef enum controller_id { ____Placeholder_controller_id } controller_id ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum bp_pipe_control_action { ____Placeholder_bp_pipe_control_action } bp_pipe_control_action ;
struct TYPE_5__ {int (* disp_power_gating_action_to_atom ) (int) ;scalar_t__ (* controller_id_to_atom ) (int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static enum bp_result FUNC_3(
 struct bios_parser *VAR_4,
 enum controller_id VAR_5,
 enum bp_pipe_control_action VAR_6)
{
 enum bp_result VAR_7 = VAR_1;


 struct enable_disp_power_gating_ps_allocation VAR_8 = { { 0 } };
 uint8_t VAR_9;

 if (VAR_4->cmd_helper->controller_id_to_atom(VAR_5, &VAR_9))
  VAR_8.param.disp_pipe_id = VAR_9;
 else
  return VAR_0;

 VAR_8.param.enable =
  VAR_4->cmd_helper->disp_power_gating_action_to_atom(VAR_6);

 if (FUNC_0(VAR_3, VAR_8.param))
  VAR_7 = VAR_2;

 return VAR_7;
}
