
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ stream_enc; } ;
struct pipe_ctx {TYPE_3__ stream_res; struct dc_stream_state const* stream; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_8__ {int (* get_position ) (struct pipe_ctx**,int,struct crtc_position*) ;} ;
struct dc {TYPE_4__ hwss; TYPE_2__* current_state; } ;
struct crtc_position {unsigned int vertical_count; unsigned int nominal_vcount; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_6__ {TYPE_1__ res_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe_ctx**,int,struct crtc_position*) ;

bool FUNC_1(struct dc *VAR_1,
  struct dc_stream_state **VAR_2, int VAR_3,
  unsigned int *VAR_4, unsigned int *VAR_5)
{

 const struct dc_stream_state *VAR_6 = VAR_2[0];
 int VAR_7 = 0;
 bool VAR_8 = 0;
 struct crtc_position VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct pipe_ctx *VAR_10 =
    &VAR_1->current_state->res_ctx.pipe_ctx[VAR_7];

  if (VAR_10->stream == VAR_6 && VAR_10->stream_res.stream_enc) {
   VAR_1->hwss.get_position(&VAR_10, 1, &VAR_9);

   *VAR_4 = VAR_9.vertical_count;
   *VAR_5 = VAR_9.nominal_vcount;
   VAR_8 = 1;
  }
 }
 return VAR_8;
}
