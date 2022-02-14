
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_stream_status {int dummy; } ;
struct dc_stream_state {TYPE_1__* ctx; } ;
struct dc {int current_state; } ;
struct TYPE_2__ {struct dc* dc; } ;


 struct dc_stream_status* FUNC_0 (int ,struct dc_stream_state*) ;

struct dc_stream_status *FUNC_1(
 struct dc_stream_state *VAR_0)
{
 struct dc *VAR_1 = VAR_0->ctx->dc;
 return FUNC_0(VAR_1->current_state, VAR_0);
}
