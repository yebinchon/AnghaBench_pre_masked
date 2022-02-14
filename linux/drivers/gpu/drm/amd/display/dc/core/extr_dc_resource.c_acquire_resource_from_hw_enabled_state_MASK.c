
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource_pool {unsigned int pipe_count; unsigned int stream_enc_count; unsigned int timing_generator_count; TYPE_5__** dpps; int * opps; int * transforms; int * ipps; int * hubps; int * mis; int * timing_generators; TYPE_6__** stream_enc; } ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_12__ {int mpcc_inst; TYPE_5__* dpp; int xfm; int ipp; int hubp; int mi; } ;
struct TYPE_11__ {int opp; int tg; } ;
struct pipe_ctx {unsigned int pipe_idx; struct dc_stream_state* stream; TYPE_4__ plane_res; TYPE_3__ stream_res; } ;
struct dc_stream_state {struct dc_link* link; } ;
struct dc_link {TYPE_7__* link_enc; } ;
struct TYPE_15__ {TYPE_1__* funcs; } ;
struct TYPE_14__ {TYPE_2__* funcs; } ;
struct TYPE_13__ {int inst; } ;
struct TYPE_10__ {unsigned int (* dig_source_otg ) (TYPE_6__*) ;} ;
struct TYPE_9__ {unsigned int (* get_dig_frontend ) (TYPE_7__*) ;int (* is_dig_enabled ) (TYPE_7__*) ;} ;


 int FUNC_0 (TYPE_7__*) ;
 unsigned int FUNC_1 (TYPE_7__*) ;
 unsigned int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_3(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct dc_stream_state *VAR_2)
{
 struct dc_link *VAR_3 = VAR_2->link;
 unsigned int VAR_4, VAR_5;


 if (!VAR_3->link_enc->funcs->is_dig_enabled(VAR_3->link_enc))
  return -1;







 VAR_4 = VAR_3->link_enc->funcs->get_dig_frontend(VAR_3->link_enc);


 if (VAR_4 >= VAR_1->pipe_count)
  return -1;

 if (VAR_4 >= VAR_1->stream_enc_count)
  return -1;

 VAR_5 = VAR_1->stream_enc[VAR_4]->funcs->dig_source_otg(VAR_1->stream_enc[VAR_4]);

 if (VAR_5 >= VAR_1->timing_generator_count)
  return 0;

 if (!VAR_0->pipe_ctx[VAR_5].stream) {
  struct pipe_ctx *VAR_6 = &VAR_0->pipe_ctx[VAR_5];

  VAR_6->stream_res.tg = VAR_1->timing_generators[VAR_5];
  VAR_6->plane_res.mi = VAR_1->mis[VAR_5];
  VAR_6->plane_res.hubp = VAR_1->hubps[VAR_5];
  VAR_6->plane_res.ipp = VAR_1->ipps[VAR_5];
  VAR_6->plane_res.xfm = VAR_1->transforms[VAR_5];
  VAR_6->plane_res.dpp = VAR_1->dpps[VAR_5];
  VAR_6->stream_res.opp = VAR_1->opps[VAR_5];

  if (VAR_1->dpps[VAR_5])
   VAR_6->plane_res.mpcc_inst = VAR_1->dpps[VAR_5]->inst;
  VAR_6->pipe_idx = VAR_5;

  VAR_6->stream = VAR_2;
  return VAR_5;
 }

 return -1;
}
