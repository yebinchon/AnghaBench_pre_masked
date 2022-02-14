
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dc {int link_count; TYPE_7__** links; TYPE_2__* res_pool; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum connector_id { ____Placeholder_connector_id } connector_id ;
struct TYPE_10__ {int dp_keep_receiver_powered; } ;
struct TYPE_14__ {TYPE_5__* link_enc; TYPE_3__ wa_flags; int link_id; } ;
struct TYPE_13__ {TYPE_1__* funcs; } ;
struct TYPE_12__ {TYPE_4__* funcs; } ;
struct TYPE_11__ {int (* disable_output ) (TYPE_5__*,int) ;} ;
struct TYPE_9__ {int stream_enc_count; TYPE_6__** stream_enc; } ;
struct TYPE_8__ {int (* dp_blank ) (TYPE_6__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_4(struct dc *VAR_4)
{
 int VAR_5;
 enum connector_id VAR_6;
 enum signal_type VAR_7 = VAR_3;




 for (VAR_5 = 0; VAR_5 < VAR_4->res_pool->stream_enc_count; VAR_5++) {
  VAR_4->res_pool->stream_enc[VAR_5]->funcs->dp_blank(
     VAR_4->res_pool->stream_enc[VAR_5]);
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->link_count; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4->links[VAR_5]->link_id);
  if ((VAR_6 == VAR_0) ||
   (VAR_6 == VAR_1)) {

   if (!VAR_4->links[VAR_5]->wa_flags.dp_keep_receiver_powered)
    FUNC_1(VAR_4->links[VAR_5], 0);
   if (VAR_6 == VAR_1)
    VAR_7 = VAR_2;
  }

  VAR_4->links[VAR_5]->link_enc->funcs->disable_output(
    VAR_4->links[VAR_5]->link_enc, VAR_7);
 }
}
