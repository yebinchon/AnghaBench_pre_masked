
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_bios {int dummy; } ;
struct TYPE_2__ {int (* enable_disp_power_gating ) (struct bios_parser*,int,int) ;} ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;
typedef enum controller_id { ____Placeholder_controller_id } controller_id ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum bp_pipe_control_action { ____Placeholder_bp_pipe_control_action } bp_pipe_control_action ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int FUNC_1 (struct bios_parser*,int,int) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct dc_bios *VAR_1,
 enum controller_id VAR_2,
 enum bp_pipe_control_action VAR_3)
{
 struct bios_parser *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->cmd_tbl.enable_disp_power_gating)
  return VAR_0;

 return VAR_4->cmd_tbl.enable_disp_power_gating(VAR_4, VAR_2,
  VAR_3);
}
