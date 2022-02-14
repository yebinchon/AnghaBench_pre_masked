
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* func_get_audio_session_id ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SDL_Aout ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(SDL_Aout *VAR_0)
{
    if (VAR_0) {
        if (VAR_0->func_get_audio_session_id) {
            return VAR_0->func_get_audio_session_id(VAR_0);
        }
    }
    return 0;
}
