
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int buffer_size_in_bytes; int audio_format; int channel_config; int sample_rate_in_hz; } ;
struct TYPE_6__ {int size; int format; int channels; int freq; } ;
typedef TYPE_1__ SDL_AudioSpec ;
typedef TYPE_2__ SDL_Android_AudioTrack_Spec ;
typedef int SDL_Android_AudioTrack ;
typedef int JNIEnv ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

SDL_Android_AudioTrack *FUNC_4(JNIEnv *VAR_0, const SDL_AudioSpec *VAR_1)
{
    SDL_Android_AudioTrack_Spec VAR_2;

    FUNC_0(&VAR_2);
    VAR_2.sample_rate_in_hz = VAR_1->freq;
    VAR_2.channel_config = FUNC_2(VAR_1->channels);
    VAR_2.audio_format = FUNC_3(VAR_1->format);
    VAR_2.buffer_size_in_bytes = VAR_1->size;

    return FUNC_1(VAR_0, &VAR_2);
}
