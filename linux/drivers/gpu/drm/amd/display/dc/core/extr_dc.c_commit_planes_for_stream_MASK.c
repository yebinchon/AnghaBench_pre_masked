
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {TYPE_10__* tg; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_plane_state* plane_state; struct dc_stream_state* stream; scalar_t__ bottom_pipe; int prev_odm_pipe; int top_pipe; } ;
struct dc_surface_update {scalar_t__ flip_addr; struct dc_plane_state* surface; } ;
struct dc_stream_update {int dummy; } ;
struct dc_stream_status {int plane_count; } ;
struct dc_stream_state {int apply_seamless_boot_optimization; } ;
struct TYPE_19__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_8__ res_ctx; } ;
struct TYPE_12__ {int addr_update; } ;
struct TYPE_13__ {TYPE_1__ bits; } ;
struct dc_plane_state {int triplebuffer_flips; TYPE_2__ update_flags; int flip_immediate; } ;
struct TYPE_20__ {int (* pipe_control_lock ) (struct dc*,struct pipe_ctx*,int) ;int (* update_plane_addr ) (struct dc*,struct pipe_ctx*) ;int (* program_triplebuffer ) (struct dc*,struct pipe_ctx*,int) ;int (* set_flip_control_gsl ) (struct pipe_ctx*,int ) ;int (* apply_ctx_for_surface ) (struct dc*,struct dc_stream_state*,int ,struct dc_state*) ;int (* prepare_bandwidth ) (struct dc*,struct dc_state*) ;} ;
struct TYPE_17__ {int disable_tri_buf; } ;
struct dc {int optimize_seamless_boot; int optimized_required; TYPE_7__* res_pool; TYPE_9__ hwss; TYPE_6__ debug; TYPE_5__* ctx; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;
struct TYPE_18__ {int pipe_count; } ;
struct TYPE_16__ {int dce_environment; } ;
struct TYPE_14__ {int (* program_manual_trigger ) (TYPE_10__*) ;} ;
struct TYPE_11__ {TYPE_3__* funcs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dc*,struct dc_stream_state*,struct dc_stream_update*,int,struct dc_state*) ;
 int FUNC_3 (struct dc*,struct dc_state*) ;
 struct dc_stream_status* FUNC_4 (struct dc_state*,struct dc_stream_state*) ;
 int FUNC_5 (struct dc*,struct dc_state*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (struct dc*,struct dc_stream_state*,int ,struct dc_state*) ;
 int FUNC_8 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_9 (struct dc*,struct dc_stream_state*,int ,struct dc_state*) ;
 int FUNC_10 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_11 (struct pipe_ctx*,int ) ;
 int FUNC_12 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_13 (struct dc*,struct pipe_ctx*) ;
 int FUNC_14 (struct dc*,struct pipe_ctx*,int) ;

__attribute__((used)) static void FUNC_15(struct dc *VAR_2,
  struct dc_surface_update *VAR_3,
  int VAR_4,
  struct dc_stream_state *VAR_5,
  struct dc_stream_update *VAR_6,
  enum surface_update_type VAR_7,
  struct dc_state *VAR_8)
{
 int VAR_9, VAR_10;
 struct pipe_ctx *VAR_11 = ((void*)0);

 if (VAR_2->optimize_seamless_boot && VAR_4 > 0) {






  if (VAR_5->apply_seamless_boot_optimization) {
   VAR_5->apply_seamless_boot_optimization = 0;
   VAR_2->optimize_seamless_boot = 0;
   VAR_2->optimized_required = 1;
  }
 }

 if (VAR_7 == VAR_1 && !VAR_2->optimize_seamless_boot) {
  VAR_2->hwss.prepare_bandwidth(VAR_2, VAR_8);
  FUNC_3(VAR_2, VAR_8);
 }


 if (VAR_6)
  FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_4 == 0) {




  VAR_2->hwss.apply_ctx_for_surface(VAR_2, VAR_5, 0, VAR_8);
  return;
 }
 for (VAR_10 = 0; VAR_10 < VAR_2->res_pool->pipe_count; VAR_10++) {
  struct pipe_ctx *VAR_12 = &VAR_8->res_ctx.pipe_ctx[VAR_10];

  if (!VAR_12->top_pipe &&
   !VAR_12->prev_odm_pipe &&
   VAR_12->stream &&
   VAR_12->stream == VAR_5) {
   struct dc_stream_status *VAR_13 = ((void*)0);

   VAR_11 = VAR_12;

   if (!VAR_12->plane_state)
    continue;


   if (VAR_7 == VAR_0)
    continue;
   VAR_13 =
    FUNC_4(VAR_8, VAR_12->stream);

   VAR_2->hwss.apply_ctx_for_surface(
     VAR_2, VAR_12->stream, VAR_13->plane_count, VAR_8);
  }
 }


 if (VAR_7 == VAR_0) {




  VAR_2->hwss.pipe_control_lock(VAR_2, VAR_11, 1);
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   struct dc_plane_state *VAR_14 = VAR_3[VAR_9].surface;

   for (VAR_10 = 0; VAR_10 < VAR_2->res_pool->pipe_count; VAR_10++) {
    struct pipe_ctx *VAR_15 = &VAR_8->res_ctx.pipe_ctx[VAR_10];

    if (VAR_15->stream != VAR_5)
     continue;

    if (VAR_15->plane_state != VAR_14)
     continue;
    if (VAR_3[VAR_9].flip_addr)
     VAR_2->hwss.update_plane_addr(VAR_2, VAR_15);
   }
  }

  VAR_2->hwss.pipe_control_lock(VAR_2, VAR_11, 0);
 }


 for (VAR_10 = 0; VAR_10 < VAR_2->res_pool->pipe_count; VAR_10++) {
  struct pipe_ctx *VAR_16 = &VAR_8->res_ctx.pipe_ctx[VAR_10];

  if (VAR_16->bottom_pipe ||
    !VAR_16->stream ||
    VAR_16->stream != VAR_5 ||
    !VAR_16->plane_state->update_flags.bits.addr_update)
   continue;

  if (VAR_16->stream_res.tg->funcs->program_manual_trigger)
   VAR_16->stream_res.tg->funcs->program_manual_trigger(VAR_16->stream_res.tg);
 }
}
