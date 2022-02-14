
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct dc_context {int dummy; } ;
struct dc_bios {TYPE_1__* funcs; } ;
struct dc {struct dc_context* ctx; } ;
typedef enum pipe_gating_control { ____Placeholder_pipe_gating_control } pipe_gating_control ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum bp_pipe_control_action { ____Placeholder_bp_pipe_control_action } bp_pipe_control_action ;
struct TYPE_2__ {int (* enable_disp_power_gating ) (struct dc_bios*,scalar_t__,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dc_context*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct dc_bios*,scalar_t__,int) ;

bool FUNC_3(
 struct dc *VAR_7,
 uint8_t VAR_8,
 struct dc_bios *VAR_9,
 enum pipe_gating_control VAR_10)
{
 enum bp_result VAR_11 = VAR_3;
 enum bp_pipe_control_action VAR_12;
 struct dc_context *VAR_13 = VAR_7->ctx;

 if (VAR_10 == VAR_5)
  VAR_12 = VAR_2;
 else if (VAR_10 == VAR_4)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 if (!(VAR_10 == VAR_5 && VAR_8 != 0)){

  VAR_11 = VAR_9->funcs->enable_disp_power_gating(
      VAR_9, VAR_8 + 1, VAR_12);




  FUNC_1(VAR_13,
   FUNC_0(VAR_6, VAR_8),
   0);
 }

 if (VAR_11 == VAR_3)
  return 1;
 else
  return 0;
}
