
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pause_audio ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ SDL_Aout ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(SDL_Aout *VAR_0, int VAR_1)
{
    if (VAR_0 && VAR_0->pause_audio)
        VAR_0->pause_audio(VAR_0, VAR_1);
}
