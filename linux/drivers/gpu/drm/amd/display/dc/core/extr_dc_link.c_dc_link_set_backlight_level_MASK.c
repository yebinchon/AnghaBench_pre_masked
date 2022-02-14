
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
struct dmcu {TYPE_3__* funcs; } ;
struct dc_link {int connector_signal; TYPE_2__* ctx; } ;
struct dc {TYPE_9__* current_state; TYPE_1__* res_pool; } ;
struct abm {TYPE_10__* funcs; } ;
struct TYPE_19__ {TYPE_7__* pipe_ctx; } ;
struct TYPE_20__ {TYPE_8__ res_ctx; } ;
struct TYPE_17__ {TYPE_5__* tg; } ;
struct TYPE_18__ {int * plane_state; TYPE_6__ stream_res; TYPE_4__* stream; } ;
struct TYPE_16__ {int inst; } ;
struct TYPE_15__ {struct dc_link const* link; } ;
struct TYPE_14__ {int (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_13__ {int logger; struct dc* dc; } ;
struct TYPE_12__ {struct dmcu* dmcu; struct abm* abm; } ;
struct TYPE_11__ {int (* set_backlight_level_pwm ) (struct abm*,int ,int ,unsigned int,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dmcu*) ;
 int FUNC_4 (struct abm*,int ,int ,unsigned int,int) ;

bool FUNC_5(const struct dc_link *VAR_1,
  uint32_t VAR_2,
  uint32_t VAR_3)
{
 struct dc *VAR_4 = VAR_1->ctx->dc;
 struct abm *VAR_5 = VAR_4->res_pool->abm;
 struct dmcu *VAR_6 = VAR_4->res_pool->dmcu;
 unsigned int VAR_7 = 0;
 bool VAR_8 = 1;
 int VAR_9;
 FUNC_0(VAR_1->ctx->logger);

 if ((VAR_6 == ((void*)0)) ||
  (VAR_5 == ((void*)0)) ||
  (VAR_5->funcs->set_backlight_level_pwm == ((void*)0)))
  return 0;

 VAR_8 = VAR_6->funcs->is_dmcu_initialized(VAR_6);

 FUNC_1("New Backlight level: %d (0x%X)\n",
   VAR_2, VAR_2);

 if (FUNC_2(VAR_1->connector_signal)) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (VAR_4->current_state->res_ctx.pipe_ctx[VAR_9].stream) {
    if (VAR_4->current_state->res_ctx.
      pipe_ctx[VAR_9].stream->link
      == VAR_1) {



     VAR_7 =
      VAR_4->current_state->
      res_ctx.pipe_ctx[VAR_9].stream_res.tg->inst +
      1;




     if (VAR_4->current_state->res_ctx.pipe_ctx[VAR_9].plane_state == ((void*)0))
      VAR_3 = 0;
    }
   }
  }
  VAR_5->funcs->set_backlight_level_pwm(
    VAR_5,
    VAR_2,
    VAR_3,
    VAR_7,
    VAR_8);
 }

 return 1;
}
