
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opaque; } ;
typedef TYPE_1__ SDL_VoutOverlay ;


 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) inline static SDL_VoutOverlay *FUNC_2(size_t VAR_0)
{
    SDL_VoutOverlay *VAR_1 = (SDL_VoutOverlay*) FUNC_0(1, sizeof(SDL_VoutOverlay));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->opaque = FUNC_0(1, VAR_0);
    if (!VAR_1->opaque) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
