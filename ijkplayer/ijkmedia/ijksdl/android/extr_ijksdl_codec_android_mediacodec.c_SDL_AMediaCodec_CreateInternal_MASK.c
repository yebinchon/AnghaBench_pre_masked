
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* common; void* opaque; int * mutex; } ;
struct TYPE_5__ {int fake_fifo; } ;
typedef int SDL_AMediaCodec_Common ;
typedef TYPE_2__ SDL_AMediaCodec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 () ;
 void* FUNC_3 (int) ;

SDL_AMediaCodec *FUNC_4(size_t VAR_0)
{
    SDL_AMediaCodec *VAR_1 = (SDL_AMediaCodec*) FUNC_3(sizeof(SDL_AMediaCodec));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->mutex = FUNC_2();
    if (VAR_1->mutex == ((void*)0))
        goto fail;

    VAR_1->opaque = FUNC_3(VAR_0);
    if (!VAR_1->opaque)
        goto fail;

    VAR_1->common = FUNC_3(sizeof(SDL_AMediaCodec_Common));
    if (!VAR_1->common)
        goto fail;

    FUNC_0(&VAR_1->common->fake_fifo);

    return VAR_1;
fail:
    FUNC_1(VAR_1);
    return ((void*)0);
}
