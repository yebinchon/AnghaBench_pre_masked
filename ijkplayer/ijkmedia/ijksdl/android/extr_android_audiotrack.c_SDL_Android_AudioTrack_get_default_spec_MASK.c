
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; scalar_t__ buffer_size_in_bytes; int audio_format; int channel_config; scalar_t__ sample_rate_in_hz; int stream_type; } ;
typedef TYPE_1__ SDL_Android_AudioTrack_Spec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(SDL_Android_AudioTrack_Spec *VAR_4)
{
    FUNC_0(VAR_4);
    VAR_4->stream_type = VAR_3;
    VAR_4->sample_rate_in_hz = 0;
    VAR_4->channel_config = VAR_0;
    VAR_4->audio_format = VAR_1;
    VAR_4->buffer_size_in_bytes = 0;
    VAR_4->mode = VAR_2;
}
