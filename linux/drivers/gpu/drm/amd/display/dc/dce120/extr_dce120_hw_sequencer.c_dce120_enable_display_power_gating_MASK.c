
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct dc_context {int dce_environment; } ;
struct dc_bios {TYPE_1__* funcs; } ;
struct dc {struct dc_context* ctx; } ;
typedef enum pipe_gating_control { ____Placeholder_pipe_gating_control } pipe_gating_control ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum bp_pipe_control_action { ____Placeholder_bp_pipe_control_action } bp_pipe_control_action ;
struct TYPE_2__ {int (* enable_disp_power_gating ) (struct dc_bios*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dc_context*,int ) ;
 int FUNC_3 (struct dc_context*,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct dc_bios*,int ,int) ;

__attribute__((used)) static bool FUNC_5(
 struct dc *VAR_7,
 uint8_t VAR_8,
 struct dc_bios *VAR_9,
 enum pipe_gating_control VAR_10)
{
 return 0;
}
