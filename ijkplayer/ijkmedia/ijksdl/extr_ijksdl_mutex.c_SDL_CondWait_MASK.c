
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
typedef TYPE_1__ SDL_mutex ;
typedef TYPE_1__ SDL_cond ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(SDL_cond *VAR_0, SDL_mutex *VAR_1)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
    if (!VAR_0 || !VAR_1)
        return -1;

    return FUNC_1(&VAR_0->id, &VAR_1->id);
}
