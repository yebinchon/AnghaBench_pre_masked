
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* unlock ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SDL_VoutOverlay ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(SDL_VoutOverlay *VAR_0)
{
    if (VAR_0 && VAR_0->unlock)
        return VAR_0->unlock(VAR_0);

    return -1;
}
