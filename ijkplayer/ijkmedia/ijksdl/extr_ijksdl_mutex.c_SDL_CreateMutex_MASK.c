
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ SDL_mutex ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

SDL_mutex *FUNC_3(void)
{
    SDL_mutex *VAR_0;
    VAR_0 = (SDL_mutex *) FUNC_1(sizeof(SDL_mutex));
    if (!VAR_0)
        return ((void*)0);

    if (FUNC_2(&VAR_0->id, ((void*)0)) != 0) {
        FUNC_0(VAR_0);
        return ((void*)0);
    }

    return VAR_0;
}
