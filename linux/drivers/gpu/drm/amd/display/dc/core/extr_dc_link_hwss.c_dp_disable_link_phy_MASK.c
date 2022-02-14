
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct dmcu {TYPE_7__* funcs; } ;
struct TYPE_12__ {int dp_keep_receiver_powered; } ;
struct dc_link {int cur_link_settings; TYPE_8__* link_enc; TYPE_5__* dc; TYPE_3__ wa_flags; TYPE_1__* ctx; } ;
struct dc {TYPE_2__* res_pool; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
struct TYPE_17__ {TYPE_6__* funcs; } ;
struct TYPE_16__ {int (* unlock_phy ) (struct dmcu*) ;int (* lock_phy ) (struct dmcu*) ;} ;
struct TYPE_15__ {int (* disable_output ) (TYPE_8__*,int) ;} ;
struct TYPE_13__ {int (* edp_power_control ) (struct dc_link*,int) ;} ;
struct TYPE_14__ {TYPE_4__ hwss; } ;
struct TYPE_11__ {struct dmcu* dmcu; } ;
struct TYPE_10__ {struct dc* dc; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_link*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_8__*,int) ;
 int FUNC_3 (struct dc_link*,int) ;
 int FUNC_4 (struct dmcu*) ;
 int FUNC_5 (TYPE_8__*,int) ;
 int FUNC_6 (struct dmcu*) ;

void FUNC_7(struct dc_link *VAR_1, enum signal_type VAR_2)
{
 struct dc *VAR_3 = VAR_1->ctx->dc;
 struct dmcu *VAR_4 = VAR_3->res_pool->dmcu;

 if (!VAR_1->wa_flags.dp_keep_receiver_powered)
  FUNC_0(VAR_1, 0);

 if (VAR_2 == VAR_0) {
  VAR_1->link_enc->funcs->disable_output(VAR_1->link_enc, VAR_2);
  VAR_1->dc->hwss.edp_power_control(VAR_1, 0);
 } else {
  if (VAR_4 != ((void*)0) && VAR_4->funcs->lock_phy)
   VAR_4->funcs->lock_phy(VAR_4);

  VAR_1->link_enc->funcs->disable_output(VAR_1->link_enc, VAR_2);

  if (VAR_4 != ((void*)0) && VAR_4->funcs->unlock_phy)
   VAR_4->funcs->unlock_phy(VAR_4);
 }


 FUNC_1(&VAR_1->cur_link_settings, 0,
   sizeof(VAR_1->cur_link_settings));
}
