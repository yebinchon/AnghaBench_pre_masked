
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_ctx {TYPE_2__* stream; } ;
struct TYPE_6__ {int (* set_avmute ) (struct pipe_ctx*,int) ;} ;
struct dc {TYPE_3__ hwss; } ;
struct TYPE_5__ {int signal; TYPE_1__* ctx; } ;
struct TYPE_4__ {struct dc* dc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pipe_ctx*,int) ;

void FUNC_2(struct pipe_ctx *VAR_0, bool VAR_1)
{
 struct dc *VAR_2 = VAR_0->stream->ctx->dc;

 if (!FUNC_0(VAR_0->stream->signal))
  return;

 VAR_2->hwss.set_avmute(VAR_0, VAR_1);
}
