
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dc_stream_state {int dummy; } ;
struct dc_state {size_t stream_count; struct dc_stream_state** streams; } ;
struct dc {TYPE_3__* res_pool; TYPE_2__* ctx; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_6__ {size_t timing_generator_count; TYPE_1__* funcs; } ;
struct TYPE_5__ {int logger; } ;
struct TYPE_4__ {int (* add_stream_to_ctx ) (struct dc*,struct dc_state*,struct dc_stream_state*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct dc_stream_state*,...) ;
 int VAR_1 ;
 int FUNC_2 (struct dc_stream_state*) ;
 int FUNC_3 (struct dc*,struct dc_state*,struct dc_stream_state*) ;

enum dc_status FUNC_4(
  struct dc *VAR_2,
  struct dc_state *VAR_3,
  struct dc_stream_state *VAR_4)
{
 enum dc_status VAR_5;
 FUNC_0(VAR_2->ctx->logger);

 if (VAR_3->stream_count >= VAR_2->res_pool->timing_generator_count) {
  FUNC_1("Max streams reached, can't add stream %p !\n", VAR_4);
  return VAR_0;
 }

 VAR_3->streams[VAR_3->stream_count] = VAR_4;
 FUNC_2(VAR_4);
 VAR_3->stream_count++;

 VAR_5 = VAR_2->res_pool->funcs->add_stream_to_ctx(VAR_2, VAR_3, VAR_4);
 if (VAR_5 != VAR_1)
  FUNC_1("Adding stream %p to context failed with err %d!\n", VAR_4, VAR_5);

 return VAR_5;
}
