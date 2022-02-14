
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* close_audio ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SDL_Aout ;


 void FUNC_0 (TYPE_1__*) ;

void FUNC_1(SDL_Aout *VAR_0)
{
    if (VAR_0 && VAR_0->close_audio)
        return VAR_0->close_audio(VAR_0);
}
