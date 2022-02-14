
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_2__ stream_res; } ;
struct crtc_position {int dummy; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* get_position ) (TYPE_3__*,struct crtc_position*) ;} ;


 int FUNC_0 (TYPE_3__*,struct crtc_position*) ;

__attribute__((used)) static void FUNC_1(struct pipe_ctx **VAR_0,
  int VAR_1,
  struct crtc_position *VAR_2)
{
 int VAR_3 = 0;



 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_0[VAR_3]->stream_res.tg->funcs->get_position(VAR_0[VAR_3]->stream_res.tg, VAR_2);
}
