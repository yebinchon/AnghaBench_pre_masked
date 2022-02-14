
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display_overlay; int free_l; } ;
typedef int SDL_Vout_Opaque ;
typedef TYPE_1__ SDL_Vout ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

SDL_Vout *FUNC_1()
{
    SDL_Vout *VAR_2 = FUNC_0(sizeof(SDL_Vout_Opaque));
    if (!VAR_2)
        return ((void*)0);



    VAR_2->free_l = VAR_1;
    VAR_2->display_overlay = VAR_0;

    return VAR_2;
}
