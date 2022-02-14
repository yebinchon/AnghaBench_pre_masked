
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_stream_state {int refcount; TYPE_1__* ctx; int stream_id; scalar_t__ out_transfer_func; scalar_t__ sink; } ;
struct TYPE_2__ {int dc_stream_id_count; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct dc_stream_state* FUNC_2 (struct dc_stream_state const*,int,int ) ;
 int FUNC_3 (int *) ;

struct dc_stream_state *FUNC_4(const struct dc_stream_state *VAR_1)
{
 struct dc_stream_state *VAR_2;

 VAR_2 = FUNC_2(VAR_1, sizeof(struct dc_stream_state), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 if (VAR_2->sink)
  FUNC_0(VAR_2->sink);

 if (VAR_2->out_transfer_func)
  FUNC_1(VAR_2->out_transfer_func);

 VAR_2->stream_id = VAR_2->ctx->dc_stream_id_count;
 VAR_2->ctx->dc_stream_id_count++;

 FUNC_3(&VAR_2->refcount);

 return VAR_2;
}
