
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* opaque; int * mutex; } ;
typedef TYPE_1__ SDL_Vout ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) inline static SDL_Vout *FUNC_3(size_t VAR_0)
{
    SDL_Vout *VAR_1 = (SDL_Vout*) FUNC_1(1, sizeof(SDL_Vout));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->opaque = FUNC_1(1, VAR_0);
    if (!VAR_1->opaque) {
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    VAR_1->mutex = FUNC_0();
    if (VAR_1->mutex == ((void*)0)) {
        FUNC_2(VAR_1->opaque);
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
