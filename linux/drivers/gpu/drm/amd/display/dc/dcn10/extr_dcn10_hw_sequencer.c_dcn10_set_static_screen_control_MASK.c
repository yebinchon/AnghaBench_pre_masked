
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_2__ stream_res; } ;
struct dc_static_screen_events {scalar_t__ force_trigger; scalar_t__ cursor_update; scalar_t__ surface_update; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* set_static_screen_control ) (TYPE_3__*,unsigned int) ;} ;


 int FUNC_0 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct pipe_ctx **VAR_0,
  int VAR_1, const struct dc_static_screen_events *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = 0;

 if (VAR_2->surface_update)
  VAR_4 |= 0x80;
 if (VAR_2->cursor_update)
  VAR_4 |= 0x2;
 if (VAR_2->force_trigger)
  VAR_4 |= 0x1;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_0[VAR_3]->stream_res.tg->funcs->
   set_static_screen_control(VAR_0[VAR_3]->stream_res.tg, VAR_4);
}
