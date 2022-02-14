
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_straps {int member_0; } ;
struct resource_pool {size_t audio_count; size_t stream_enc_count; int ** stream_enc; struct audio** audios; int audio_support; struct resource_caps* res_cap; } ;
struct resource_create_funcs {int (* create_hwseq ) (struct dc_context*) ;int * (* create_stream_encoder ) (int,struct dc_context*) ;struct audio* (* create_audio ) (struct dc_context*,int) ;int (* read_dce_straps ) (struct dc_context*,struct resource_straps*) ;} ;
struct resource_caps {unsigned int num_audio; int num_stream_encoder; } ;
struct dc_context {int dc_bios; } ;
struct TYPE_4__ {int dynamic_audio; } ;
struct dc {int hwseq; TYPE_2__ caps; struct dc_context* ctx; } ;
struct audio {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* destroy ) (struct audio**) ;int (* endpoint_valid ) (struct audio*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dc_context*,struct resource_straps*) ;
 struct audio* FUNC_2 (struct dc_context*,int) ;
 int FUNC_3 (struct audio*) ;
 int FUNC_4 (struct audio**) ;
 int * FUNC_5 (int,struct dc_context*) ;
 int FUNC_6 (struct dc_context*) ;
 int FUNC_7 (struct resource_straps*,unsigned int*,int *) ;
 int * FUNC_8 (struct dc_context*,int ) ;

bool FUNC_9(
 unsigned int VAR_0,
 struct dc *VAR_1,
 struct resource_pool *VAR_2,
 const struct resource_create_funcs *VAR_3)
{
 struct dc_context *VAR_4 = VAR_1->ctx;
 const struct resource_caps *VAR_5 = VAR_2->res_cap;
 int VAR_6;
 unsigned int VAR_7 = VAR_5->num_audio;
 struct resource_straps VAR_8 = {0};

 if (VAR_3->read_dce_straps)
  VAR_3->read_dce_straps(VAR_1->ctx, &VAR_8);

 VAR_2->audio_count = 0;
 if (VAR_3->create_audio) {







  FUNC_7(&VAR_8, &VAR_7, &VAR_2->audio_support);
  for (VAR_6 = 0; VAR_6 < VAR_5->num_audio; VAR_6++) {
   struct audio *VAR_9 = VAR_3->create_audio(VAR_4, VAR_6);

   if (VAR_9 == ((void*)0)) {
    FUNC_0("DC: failed to create audio!\n");
    return 0;
   }
   if (!VAR_9->funcs->endpoint_valid(VAR_9)) {
    VAR_9->funcs->destroy(&VAR_9);
    break;
   }
   VAR_2->audios[VAR_6] = VAR_9;
   VAR_2->audio_count++;
  }
 }

 VAR_2->stream_enc_count = 0;
 if (VAR_3->create_stream_encoder) {
  for (VAR_6 = 0; VAR_6 < VAR_5->num_stream_encoder; VAR_6++) {
   VAR_2->stream_enc[VAR_6] = VAR_3->create_stream_encoder(VAR_6, VAR_4);
   if (VAR_2->stream_enc[VAR_6] == ((void*)0))
    FUNC_0("DC: failed to create stream_encoder!\n");
   VAR_2->stream_enc_count++;
  }
 }

 VAR_1->caps.dynamic_audio = 0;
 if (VAR_2->audio_count < VAR_2->stream_enc_count) {
  VAR_1->caps.dynamic_audio = 1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_2->stream_enc[VAR_2->stream_enc_count] =
   FUNC_8(
     VAR_4, VAR_4->dc_bios);
  if (VAR_2->stream_enc[VAR_2->stream_enc_count] == ((void*)0)) {
   FUNC_0("DC: failed to create stream_encoder!\n");
   return 0;
  }
  VAR_2->stream_enc_count++;
 }

 VAR_1->hwseq = VAR_3->create_hwseq(VAR_4);

 return 1;
}
