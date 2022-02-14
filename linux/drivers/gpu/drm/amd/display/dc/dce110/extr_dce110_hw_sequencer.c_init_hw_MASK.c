
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct transform {TYPE_1__* funcs; } ;
struct timing_generator {TYPE_4__* funcs; } ;
struct dmcu {TYPE_8__* funcs; } ;
struct dc_link {TYPE_10__* link_enc; } ;
struct dc_bios {int dummy; } ;
struct TYPE_17__ {int (* enable_display_pipe_clock_gating ) (TYPE_11__*,int) ;int (* enable_display_power_gating ) (struct dc*,int,struct dc_bios*,int ) ;} ;
struct dc {int link_count; TYPE_12__* fbc_compressor; TYPE_7__* res_pool; struct dc_link** links; int hwseq; TYPE_11__* ctx; TYPE_2__ hwss; } ;
struct audio {TYPE_5__* funcs; } ;
struct abm {int dmcu_is_running; TYPE_6__* funcs; } ;
struct TYPE_24__ {int (* power_up_fbc ) (TYPE_12__*) ;} ;
struct TYPE_23__ {int (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_22__ {int pipe_count; int audio_count; struct dmcu* dmcu; struct abm* abm; struct audio** audios; struct timing_generator** timing_generators; struct transform** transforms; } ;
struct TYPE_21__ {int (* abm_init ) (struct abm*) ;int (* init_backlight ) (struct abm*) ;} ;
struct TYPE_20__ {int (* hw_init ) (struct audio*) ;} ;
struct TYPE_19__ {int (* set_blank ) (struct timing_generator*,int) ;int (* disable_vga ) (struct timing_generator*) ;} ;
struct TYPE_18__ {int (* hw_init ) (TYPE_10__*) ;} ;
struct TYPE_16__ {int (* transform_reset ) (struct transform*) ;} ;
struct TYPE_15__ {TYPE_9__* funcs; } ;
struct TYPE_14__ {struct dc_bios* dc_bios; } ;
struct TYPE_13__ {TYPE_3__* funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct transform*) ;
 int FUNC_3 (struct abm*) ;
 int FUNC_4 (struct dmcu*) ;
 int FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (struct dc*,int,struct dc_bios*,int ) ;
 int FUNC_7 (struct dc*,int,struct dc_bios*,int ) ;
 int FUNC_8 (TYPE_11__*,int) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (struct timing_generator*) ;
 int FUNC_11 (struct timing_generator*,int) ;
 int FUNC_12 (struct audio*) ;
 int FUNC_13 (struct abm*) ;

__attribute__((used)) static void FUNC_14(struct dc *VAR_2)
{
 int VAR_3;
 struct dc_bios *VAR_4;
 struct transform *VAR_5;
 struct abm *VAR_6;
 struct dmcu *VAR_7;

 VAR_4 = VAR_2->ctx->dc_bios;
 for (VAR_3 = 0; VAR_3 < VAR_2->res_pool->pipe_count; VAR_3++) {
  VAR_5 = VAR_2->res_pool->transforms[VAR_3];
  VAR_5->funcs->transform_reset(VAR_5);

  VAR_2->hwss.enable_display_power_gating(
    VAR_2, VAR_3, VAR_4,
    VAR_1);
  VAR_2->hwss.enable_display_power_gating(
    VAR_2, VAR_3, VAR_4,
    VAR_0);
  VAR_2->hwss.enable_display_pipe_clock_gating(
   VAR_2->ctx,
   1);
 }

 FUNC_0(VAR_2->hwseq, 0);


 for (VAR_3 = 0; VAR_3 < VAR_2->link_count; VAR_3++) {




  struct dc_link *VAR_8 = VAR_2->links[VAR_3];

  VAR_8->link_enc->funcs->hw_init(VAR_8->link_enc);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->res_pool->pipe_count; VAR_3++) {
  struct timing_generator *VAR_9 = VAR_2->res_pool->timing_generators[VAR_3];

  VAR_9->funcs->disable_vga(VAR_9);



  VAR_9->funcs->set_blank(VAR_9, 1);
  FUNC_1(VAR_9);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->res_pool->audio_count; VAR_3++) {
  struct audio *VAR_10 = VAR_2->res_pool->audios[VAR_3];
  VAR_10->funcs->hw_init(VAR_10);
 }

 VAR_6 = VAR_2->res_pool->abm;
 if (VAR_6 != ((void*)0)) {
  VAR_6->funcs->init_backlight(VAR_6);
  VAR_6->funcs->abm_init(VAR_6);
 }

 VAR_7 = VAR_2->res_pool->dmcu;
 if (VAR_7 != ((void*)0) && VAR_6 != ((void*)0))
  VAR_6->dmcu_is_running = VAR_7->funcs->is_dmcu_initialized(VAR_7);

 if (VAR_2->fbc_compressor)
  VAR_2->fbc_compressor->funcs->power_up_fbc(VAR_2->fbc_compressor);

}
