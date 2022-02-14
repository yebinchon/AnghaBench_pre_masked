
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * (* create_overlay ) (int,int,int,TYPE_1__*) ;} ;
typedef int SDL_VoutOverlay ;
typedef TYPE_1__ SDL_Vout ;


 int * FUNC_0 (int,int,int,TYPE_1__*) ;

SDL_VoutOverlay *FUNC_1(int VAR_0, int VAR_1, int VAR_2, SDL_Vout *VAR_3)
{
    if (VAR_3 && VAR_3->create_overlay)
        return VAR_3->create_overlay(VAR_0, VAR_1, VAR_2, VAR_3);

    return ((void*)0);
}
