
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct dc_context {int dce_environment; } ;
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
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dc_context*) ;
 int FUNC_3 (struct dc_context*,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct dc_bios*,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_5(
 struct dc *VAR_7,
 uint8_t VAR_8,
 struct dc_bios *VAR_9,
 enum pipe_gating_control VAR_10)
{
 enum bp_result VAR_11 = VAR_3;
 enum bp_pipe_control_action VAR_12;
 struct dc_context *VAR_13 = VAR_7->ctx;

 if (FUNC_1(VAR_13->dce_environment))
  return 1;

 if (VAR_10 == VAR_5)
  VAR_12 = VAR_2;
 else if (VAR_10 == VAR_4)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 if (VAR_10 != VAR_5 || VAR_8 == 0){

  VAR_11 = VAR_9->funcs->enable_disp_power_gating(
      VAR_9, VAR_8 + 1, VAR_12);




  FUNC_3(VAR_13,
   FUNC_0(VAR_6, VAR_8),
   0);
 }

 if (VAR_10 != VAR_4)
  FUNC_2(VAR_13);

 if (VAR_11 == VAR_3)
  return 1;
 else
  return 0;
}
