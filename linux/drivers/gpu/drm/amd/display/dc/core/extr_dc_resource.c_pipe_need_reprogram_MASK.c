
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ audio; scalar_t__ stream_enc; } ;
struct pipe_ctx {scalar_t__ clock_source; TYPE_3__* stream; TYPE_1__ stream_res; } ;
struct TYPE_11__ {scalar_t__ sink; scalar_t__ signal; int dpms_off; TYPE_2__* link; } ;
struct TYPE_10__ {int link_state_valid; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*) ;

bool FUNC_3(
  struct pipe_ctx *VAR_0,
  struct pipe_ctx *VAR_1)
{
 if (!VAR_0->stream)
  return 0;

 if (VAR_0->stream->sink != VAR_1->stream->sink)
  return 1;

 if (VAR_0->stream->signal != VAR_1->stream->signal)
  return 1;

 if (VAR_0->stream_res.audio != VAR_1->stream_res.audio)
  return 1;

 if (VAR_0->clock_source != VAR_1->clock_source
   && VAR_0->stream != VAR_1->stream)
  return 1;

 if (VAR_0->stream_res.stream_enc != VAR_1->stream_res.stream_enc)
  return 1;

 if (FUNC_1(VAR_0->stream, VAR_1->stream))
  return 1;

 if (FUNC_0(VAR_0->stream, VAR_1->stream))
  return 1;

 if (VAR_0->stream->dpms_off != VAR_1->stream->dpms_off)
  return 1;

 if (FUNC_2(VAR_0->stream, VAR_1->stream))
  return 1;

 if (0 == VAR_0->stream->link->link_state_valid &&
  0 == VAR_0->stream->dpms_off)
  return 1;

 return 0;
}
