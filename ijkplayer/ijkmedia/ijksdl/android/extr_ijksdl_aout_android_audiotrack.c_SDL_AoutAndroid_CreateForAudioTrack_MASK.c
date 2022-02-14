
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int func_set_playback_rate; int func_get_audio_session_id; int close_audio; int set_volume; int flush_audio; int pause_audio; int open_audio; int free_l; int * opaque_class; TYPE_1__* opaque; } ;
struct TYPE_5__ {float speed; int wakeup_mutex; int wakeup_cond; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

SDL_Aout *FUNC_3()
{
    SDL_Aout *VAR_9 = FUNC_0(sizeof(SDL_Aout_Opaque));
    if (!VAR_9)
        return ((void*)0);

    SDL_Aout_Opaque *VAR_10 = VAR_9->opaque;
    VAR_10->wakeup_cond = FUNC_1();
    VAR_10->wakeup_mutex = FUNC_2();
    VAR_10->speed = 1.0f;

    VAR_9->opaque_class = &VAR_8;
    VAR_9->free_l = VAR_2;
    VAR_9->open_audio = VAR_4;
    VAR_9->pause_audio = VAR_5;
    VAR_9->flush_audio = VAR_1;
    VAR_9->set_volume = VAR_6;
    VAR_9->close_audio = VAR_0;
    VAR_9->func_get_audio_session_id = VAR_3;
    VAR_9->func_set_playback_rate = VAR_7;

    return VAR_9;
}
