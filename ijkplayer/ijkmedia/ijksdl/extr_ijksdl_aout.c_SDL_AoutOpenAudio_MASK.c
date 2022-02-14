
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* open_audio ) (TYPE_1__*,int const*,int *) ;} ;
typedef int SDL_AudioSpec ;
typedef TYPE_1__ SDL_Aout ;


 int FUNC_0 (TYPE_1__*,int const*,int *) ;

int FUNC_1(SDL_Aout *VAR_0, const SDL_AudioSpec *VAR_1, SDL_AudioSpec *VAR_2)
{
    if (VAR_0 && VAR_1 && VAR_0->open_audio)
        return VAR_0->open_audio(VAR_0, VAR_1, VAR_2);

    return -1;
}
