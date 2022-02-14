
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* free_l ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SDL_Aout ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(SDL_Aout *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->free_l)
        VAR_0->free_l(VAR_0);
    else
        FUNC_0(VAR_0);
}
