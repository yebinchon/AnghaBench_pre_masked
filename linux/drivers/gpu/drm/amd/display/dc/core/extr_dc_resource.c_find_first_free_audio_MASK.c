
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int audio_count; struct audio** audios; } ;
struct resource_context {int* is_audio_acquired; int* is_stream_enc_acquired; } ;
struct audio {int dummy; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;



__attribute__((used)) static struct audio *FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  enum engine_id VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_1->audio_count;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if ((VAR_0->is_audio_acquired[VAR_3] == 0) && (VAR_0->is_stream_enc_acquired[VAR_3] == 1)) {

   if (VAR_2 != VAR_3)
    continue;
   return VAR_1->audios[VAR_3];
  }
 }


 if ((VAR_2 < VAR_4) && (VAR_0->is_audio_acquired[VAR_2] == 0)) {
  return VAR_1->audios[VAR_2];
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_0->is_audio_acquired[VAR_3] == 0) {
   return VAR_1->audios[VAR_3];
  }
 }
 return 0;
}
