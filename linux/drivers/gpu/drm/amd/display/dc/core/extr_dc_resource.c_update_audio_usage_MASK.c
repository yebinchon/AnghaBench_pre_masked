
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int audio_count; struct audio** audios; } ;
struct resource_context {int* is_audio_acquired; } ;
struct audio {int dummy; } ;



void FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct audio *VAR_2,
  bool VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1->audio_count; VAR_4++) {
  if (VAR_1->audios[VAR_4] == VAR_2)
   VAR_0->is_audio_acquired[VAR_4] = VAR_3;
 }
}
