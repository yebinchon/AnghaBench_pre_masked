
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* opaque; int * mutex; } ;
typedef TYPE_1__ SDL_AMediaFormat ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (size_t) ;

__attribute__((used)) inline static SDL_AMediaFormat *FUNC_3(size_t VAR_0)
{
    SDL_AMediaFormat *VAR_1 = (SDL_AMediaFormat*) FUNC_2(sizeof(SDL_AMediaFormat));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->opaque = FUNC_2(VAR_0);
    if (!VAR_1->opaque) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    VAR_1->mutex = FUNC_0();
    if (VAR_1->mutex == ((void*)0)) {
        FUNC_1(VAR_1->opaque);
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
