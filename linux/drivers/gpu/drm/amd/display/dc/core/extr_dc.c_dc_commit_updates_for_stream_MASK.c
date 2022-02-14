
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_ctx {TYPE_3__* plane_state; struct dc_stream_state* stream; } ;
struct dc_surface_update {struct dc_plane_state* surface; } ;
struct dc_stream_update {int dummy; } ;
struct dc_stream_status {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_2__ res_ctx; } ;
struct dc_plane_state {int dummy; } ;
struct dc_context {int dummy; } ;
struct dc {TYPE_1__* res_pool; struct dc_state* current_state; struct dc_context* ctx; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;
struct TYPE_6__ {int force_full_update; } ;
struct TYPE_4__ {int pipe_count; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dc*,struct dc_surface_update*,int,struct dc_stream_state*,struct dc_stream_update*,int,struct dc_state*) ;
 int FUNC_2 (struct dc*,struct dc_state*,struct dc_stream_state*,struct dc_stream_update*) ;
 int FUNC_3 (struct dc_plane_state*,struct dc_surface_update*) ;
 int FUNC_4 (struct dc*,struct dc_surface_update*,int,struct dc_stream_update*,struct dc_stream_status const*) ;
 struct dc_state* FUNC_5 (struct dc*) ;
 int FUNC_6 (struct dc*) ;
 int FUNC_7 (struct dc_state*) ;
 int FUNC_8 (struct dc_state*,struct dc_state*) ;
 struct dc_stream_status* FUNC_9 (struct dc_stream_state*) ;
 int FUNC_10 (struct dc*,struct dc_surface_update*,int) ;
 int VAR_1 ;

void FUNC_11(struct dc *VAR_2,
  struct dc_surface_update *VAR_3,
  int VAR_4,
  struct dc_stream_state *VAR_5,
  struct dc_stream_update *VAR_6,
  struct dc_state *VAR_7)
{
 const struct dc_stream_status *VAR_8;
 enum surface_update_type VAR_9;
 struct dc_state *VAR_10;
 struct dc_context *VAR_11 = VAR_2->ctx;
 int VAR_12;

 VAR_8 = FUNC_9(VAR_5);
 VAR_10 = VAR_2->current_state;

 VAR_9 = FUNC_4(
    VAR_2, VAR_3, VAR_4, VAR_6, VAR_8);

 if (VAR_9 >= VAR_1)
  FUNC_10(VAR_2, VAR_3, VAR_4);


 if (VAR_9 >= VAR_0) {


  VAR_10 = FUNC_5(VAR_2);
  if (VAR_10 == ((void*)0)) {
   FUNC_0("Failed to allocate new validate context!\n");
   return;
  }

  FUNC_8(VAR_7, VAR_10);

  for (VAR_12 = 0; VAR_12 < VAR_2->res_pool->pipe_count; VAR_12++) {
   struct pipe_ctx *VAR_13 = &VAR_10->res_ctx.pipe_ctx[VAR_12];
   struct pipe_ctx *VAR_14 = &VAR_2->current_state->res_ctx.pipe_ctx[VAR_12];

   if (VAR_13->plane_state && VAR_13->plane_state != VAR_14->plane_state)
    VAR_13->plane_state->force_full_update = 1;
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  struct dc_plane_state *VAR_15 = VAR_3[VAR_12].surface;

  FUNC_3(VAR_15, &VAR_3[VAR_12]);

 }

 FUNC_2(VAR_2, VAR_10, VAR_5, VAR_6);

 FUNC_1(
    VAR_2,
    VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_9,
    VAR_10);

 if (VAR_2->current_state != VAR_10) {

  struct dc_state *VAR_16 = VAR_2->current_state;

  VAR_2->current_state = VAR_10;
  FUNC_7(VAR_16);

  for (VAR_12 = 0; VAR_12 < VAR_2->res_pool->pipe_count; VAR_12++) {
   struct pipe_ctx *VAR_17 = &VAR_10->res_ctx.pipe_ctx[VAR_12];

   if (VAR_17->plane_state && VAR_17->stream == VAR_5)
    VAR_17->plane_state->force_full_update = 0;
  }
 }

 if (VAR_9 >= VAR_0)
  FUNC_6(VAR_2);

 return;

}
