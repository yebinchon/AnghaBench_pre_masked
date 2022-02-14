
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* display_overlay ) (TYPE_1__*,int *) ;} ;
typedef int SDL_VoutOverlay ;
typedef TYPE_1__ SDL_Vout ;


 int FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(SDL_Vout *VAR_0, SDL_VoutOverlay *VAR_1)
{
    if (VAR_0 && VAR_1 && VAR_0->display_overlay)
        return VAR_0->display_overlay(VAR_0, VAR_1);

    return -1;
}
