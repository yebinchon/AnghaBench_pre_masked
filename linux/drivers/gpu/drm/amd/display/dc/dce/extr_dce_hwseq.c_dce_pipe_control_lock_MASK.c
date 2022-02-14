
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {TYPE_5__* tg; } ;
struct pipe_ctx {TYPE_4__ stream_res; } ;
struct TYPE_8__ {scalar_t__ blnd_crtc_trigger; } ;
struct dce_hwseq {TYPE_3__ wa; TYPE_2__* masks; } ;
struct dc {struct dce_hwseq* hwseq; } ;
struct TYPE_10__ {size_t inst; TYPE_1__* funcs; } ;
struct TYPE_7__ {scalar_t__ BLND_BLND_V_UPDATE_LOCK; } ;
struct TYPE_6__ {scalar_t__ (* is_blanked ) (TYPE_5__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ,int ,int*,int ,int*,int ,int*,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int,int ,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;

void FUNC_5(struct dc *VAR_6,
  struct pipe_ctx *VAR_7,
  bool VAR_8)
{
 uint32_t VAR_9 = VAR_8 ? 1 : 0;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct dce_hwseq *VAR_15 = VAR_6->hwseq;


 if (VAR_8 && VAR_7->stream_res.tg->funcs->is_blanked &&
     VAR_7->stream_res.tg->funcs->is_blanked(VAR_7->stream_res.tg))
  return;

 VAR_14 = FUNC_0(VAR_3[VAR_7->stream_res.tg->inst],
   VAR_1, &VAR_10,
   VAR_2, &VAR_11,
   VAR_0, &VAR_12,
   VAR_4, &VAR_13);

 VAR_10 = VAR_9;
 VAR_11 = VAR_9;
 VAR_12 = VAR_9;
 VAR_13 = VAR_9;

 FUNC_2(VAR_3[VAR_7->stream_res.tg->inst], VAR_14,
   VAR_1, VAR_10,
   VAR_2, VAR_11);

 if (VAR_15->masks->BLND_BLND_V_UPDATE_LOCK != 0)
  FUNC_2(VAR_3[VAR_7->stream_res.tg->inst], VAR_14,
    VAR_0, VAR_12,
    VAR_4, VAR_13);

 if (VAR_15->wa.blnd_crtc_trigger) {
  if (!VAR_8) {
   uint32_t VAR_16 = FUNC_1(VAR_5[VAR_7->stream_res.tg->inst]);
   FUNC_3(VAR_5[VAR_7->stream_res.tg->inst], VAR_16);
  }
 }
}
