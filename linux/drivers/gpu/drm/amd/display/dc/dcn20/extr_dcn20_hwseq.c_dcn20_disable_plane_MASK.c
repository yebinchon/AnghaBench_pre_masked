
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* hubp; } ;
struct pipe_ctx {int pipe_idx; TYPE_3__ plane_res; } ;
struct dc {TYPE_1__* ctx; } ;
struct TYPE_5__ {scalar_t__ power_gated; } ;
struct TYPE_4__ {int logger; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct dc*,struct pipe_ctx*) ;

void FUNC_3(struct dc *VAR_0, struct pipe_ctx *VAR_1)
{
 FUNC_0(VAR_0->ctx->logger);

 if (!VAR_1->plane_res.hubp || VAR_1->plane_res.hubp->power_gated)
  return;

 FUNC_2(VAR_0, VAR_1);

 FUNC_1("Power down front end %d\n",
     VAR_1->pipe_idx);
}
