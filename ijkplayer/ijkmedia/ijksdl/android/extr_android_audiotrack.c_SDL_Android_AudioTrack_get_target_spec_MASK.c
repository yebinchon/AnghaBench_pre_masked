
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int buffer_size_in_bytes; int audio_format; int channel_config; int sample_rate_in_hz; } ;
struct TYPE_8__ {TYPE_2__ spec; } ;
struct TYPE_6__ {scalar_t__ padding; scalar_t__ silence; int size; int format; int channels; int freq; } ;
typedef TYPE_1__ SDL_AudioSpec ;
typedef TYPE_2__ SDL_Android_AudioTrack_Spec ;
typedef TYPE_3__ SDL_Android_AudioTrack ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(SDL_Android_AudioTrack *VAR_0, SDL_AudioSpec *VAR_1)
{
    SDL_Android_AudioTrack_Spec *VAR_2 = &VAR_0->spec;

    VAR_1->freq = VAR_2->sample_rate_in_hz;
    VAR_1->channels = FUNC_0(VAR_2->channel_config);
    VAR_1->format = FUNC_1(VAR_2->audio_format);
    VAR_1->size = VAR_2->buffer_size_in_bytes;
    VAR_1->silence = 0;
    VAR_1->padding = 0;
}
