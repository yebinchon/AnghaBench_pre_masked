
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pipe_ctx {int stream; TYPE_4__* plane_state; } ;
struct dc_state {int dummy; } ;
struct TYPE_7__ {int (* set_output_transfer_func ) (struct pipe_ctx*,int ) ;int (* set_input_transfer_func ) (struct pipe_ctx*,TYPE_4__*) ;} ;
struct dc {TYPE_3__ hwss; } ;
struct TYPE_5__ {scalar_t__ full_update; scalar_t__ gamma_change; scalar_t__ in_transfer_func_change; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ update_flags; } ;


 int FUNC_0 (struct dc*,struct pipe_ctx*,struct dc_state*) ;
 int FUNC_1 (struct pipe_ctx*) ;
 int FUNC_2 (struct pipe_ctx*,TYPE_4__*) ;
 int FUNC_3 (struct pipe_ctx*,int ) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*,struct dc_state*) ;

void FUNC_5(
  struct dc *VAR_0,
  struct pipe_ctx *VAR_1,
  struct dc_state *VAR_2)
{
 if (VAR_1->plane_state->update_flags.bits.full_update)
  FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_4(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_1);

 if (VAR_1->plane_state->update_flags.bits.full_update ||
   VAR_1->plane_state->update_flags.bits.in_transfer_func_change ||
   VAR_1->plane_state->update_flags.bits.gamma_change)
  VAR_0->hwss.set_input_transfer_func(VAR_1, VAR_1->plane_state);







 if (VAR_1->plane_state->update_flags.bits.full_update)
  VAR_0->hwss.set_output_transfer_func(VAR_1, VAR_1->stream);
}
