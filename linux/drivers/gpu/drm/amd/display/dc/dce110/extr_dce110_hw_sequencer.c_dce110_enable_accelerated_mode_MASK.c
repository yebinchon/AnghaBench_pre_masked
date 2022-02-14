
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_stream_state {int apply_edp_fast_boot_optimization; } ;
struct dc_state {int stream_count; TYPE_2__** streams; } ;
struct dc_link {TYPE_5__* link_enc; } ;
struct TYPE_8__ {int (* edp_power_control ) (struct dc_link*,int) ;int (* edp_backlight_control ) (struct dc_link*,int) ;int (* init_pipes ) (struct dc*,struct dc_state*) ;} ;
struct dc {TYPE_4__* ctx; TYPE_3__ hwss; } ;
struct TYPE_10__ {TYPE_1__* funcs; } ;
struct TYPE_9__ {scalar_t__ dce_version; int dc_bios; } ;
struct TYPE_7__ {scalar_t__ apply_seamless_boot_optimization; } ;
struct TYPE_6__ {scalar_t__ (* is_dig_enabled ) (TYPE_5__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dc*) ;
 struct dc_link* FUNC_2 (struct dc*) ;
 struct dc_link* FUNC_3 (struct dc*,struct dc_state*) ;
 struct dc_stream_state* FUNC_4 (struct dc_state*) ;
 int FUNC_5 (struct dc*) ;
 int FUNC_6 (struct dc*,struct dc_state*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct dc_link*,int) ;
 int FUNC_9 (struct dc_link*,int) ;

void FUNC_10(struct dc *VAR_3, struct dc_state *VAR_4)
{
 int VAR_5;
 struct dc_link *VAR_6 = FUNC_3(VAR_3, VAR_4);
 struct dc_link *VAR_7 = FUNC_2(VAR_3);
 struct dc_stream_state *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 if (VAR_3->hwss.init_pipes)
  VAR_3->hwss.init_pipes(VAR_3, VAR_4);

 VAR_8 = FUNC_4(VAR_4);


 if (VAR_7 && VAR_3->ctx->dce_version != VAR_0 &&
      VAR_3->ctx->dce_version != VAR_1 &&
      VAR_3->ctx->dce_version != VAR_2) {


  if (VAR_7->link_enc->funcs->is_dig_enabled(VAR_7->link_enc)) {

   if (VAR_8) {
    VAR_8->apply_edp_fast_boot_optimization = 1;
    VAR_9 = 1;
   }
  }


  if (VAR_8)
   VAR_11 = 1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_4->stream_count; VAR_5++) {
  if (VAR_4->streams[VAR_5]->apply_seamless_boot_optimization) {
   VAR_10 = 1;
   break;
  }
 }




 if (!VAR_9 && !VAR_10) {
  if (VAR_6 && !VAR_11) {

   VAR_3->hwss.edp_backlight_control(VAR_6, 0);
  }

  FUNC_5(VAR_3);
  FUNC_1(VAR_3);
  if (VAR_6 && !VAR_11)
   VAR_3->hwss.edp_power_control(VAR_6, 0);
 }
 FUNC_0(VAR_3->ctx->dc_bios);
}
