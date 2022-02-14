
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct dc_context {int dce_environment; } ;
struct dc_bios {TYPE_2__* funcs; } ;
struct dc {TYPE_1__* res_pool; struct dc_context* ctx; } ;
typedef enum pipe_gating_control { ____Placeholder_pipe_gating_control } pipe_gating_control ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum bp_pipe_control_action { ____Placeholder_bp_pipe_control_action } bp_pipe_control_action ;
struct TYPE_4__ {int (* enable_disp_power_gating ) (struct dc_bios*,unsigned int,int) ;} ;
struct TYPE_3__ {unsigned int underlay_pipe_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct dc_context*) ;
 int FUNC_3 (struct dc_context*,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct dc_bios*,unsigned int,int) ;

__attribute__((used)) static bool FUNC_5(
 struct dc *VAR_9,
 uint8_t VAR_10,
 struct dc_bios *VAR_11,
 enum pipe_gating_control VAR_12)
{
 enum bp_result VAR_13 = VAR_3;
 enum bp_pipe_control_action VAR_14;
 struct dc_context *VAR_15 = VAR_9->ctx;
 unsigned int VAR_16 = VAR_9->res_pool->underlay_pipe_index;

 if (FUNC_1(VAR_15->dce_environment))
  return 1;

 if (VAR_12 == VAR_7)
  VAR_14 = VAR_2;
 else if (VAR_12 == VAR_6)
  VAR_14 = VAR_1;
 else
  VAR_14 = VAR_0;

 if (VAR_10 == VAR_16)
  VAR_10 = VAR_5 - 1;

 if (VAR_12 != VAR_7 || VAR_10 == 0){

  VAR_13 = VAR_11->funcs->enable_disp_power_gating(
      VAR_11, VAR_10 + 1, VAR_14);
  if (VAR_10 < VAR_4 - 1)
   FUNC_3(VAR_15,
    FUNC_0(VAR_8, VAR_10),
    0);
 }

 if (VAR_12 != VAR_6)
  FUNC_2(VAR_15);

 if (VAR_13 == VAR_3)
  return 1;
 else
  return 0;
}
