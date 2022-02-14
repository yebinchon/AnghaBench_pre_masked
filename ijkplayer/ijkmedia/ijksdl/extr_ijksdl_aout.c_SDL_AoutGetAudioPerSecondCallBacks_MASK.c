
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* func_get_audio_persecond_callbacks ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SDL_Aout ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(SDL_Aout *VAR_1)
{
    if (VAR_1) {
        if (VAR_1->func_get_audio_persecond_callbacks) {
            return VAR_1->func_get_audio_persecond_callbacks(VAR_1);
        }
    }
    return VAR_0;
}
