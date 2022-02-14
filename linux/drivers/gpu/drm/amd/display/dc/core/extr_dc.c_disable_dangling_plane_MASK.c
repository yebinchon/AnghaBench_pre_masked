
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dc_stream_state {int dummy; } ;
struct TYPE_7__ {TYPE_2__* pipe_ctx; } ;
struct dc_state {int stream_count; struct dc_stream_state** streams; TYPE_3__ res_ctx; } ;
struct TYPE_8__ {int (* apply_ctx_for_surface ) (struct dc*,struct dc_stream_state*,int ,struct dc_state*) ;} ;
struct dc {struct dc_state* current_state; TYPE_4__ hwss; TYPE_1__* res_pool; } ;
struct TYPE_6__ {struct dc_stream_state* stream; } ;
struct TYPE_5__ {int pipe_count; } ;


 struct dc_state* FUNC_0 (struct dc*) ;
 int FUNC_1 (struct dc_state*) ;
 int FUNC_2 (struct dc*,struct dc_stream_state*,struct dc_state*) ;
 int FUNC_3 (struct dc_state*,struct dc_state*) ;
 int FUNC_4 (struct dc*,struct dc_stream_state*,struct dc_state*) ;
 int FUNC_5 (struct dc*,struct dc_stream_state*,int ,struct dc_state*) ;

__attribute__((used)) static void FUNC_6(struct dc *VAR_0, struct dc_state *VAR_1)
{
 int VAR_2, VAR_3;
 struct dc_state *VAR_4 = FUNC_0(VAR_0);
 struct dc_state *VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_3(VAR_0->current_state, VAR_4);

 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct dc_stream_state *VAR_6 =
    VAR_0->current_state->res_ctx.pipe_ctx[VAR_2].stream;
  bool VAR_7 = 1;

  for (VAR_3 = 0; VAR_3 < VAR_1->stream_count; VAR_3++) {
   if (VAR_6 == VAR_1->streams[VAR_3]) {
    VAR_7 = 0;
    break;
   }
  }
  if (VAR_7 && VAR_6) {
   FUNC_2(VAR_0, VAR_6, VAR_4);



   VAR_0->hwss.apply_ctx_for_surface(VAR_0, VAR_6, 0, VAR_4);
  }
 }

 VAR_5 = VAR_0->current_state;
 VAR_0->current_state = VAR_4;
 FUNC_1(VAR_5);
}
