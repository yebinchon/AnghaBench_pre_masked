
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mutex; struct TYPE_5__* opaque; struct TYPE_5__* common; int fake_fifo; } ;
typedef TYPE_1__ SDL_AMediaCodec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(SDL_AMediaCodec *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->common) {
        FUNC_0(&VAR_0->common->fake_fifo);
        FUNC_2(VAR_0->common);
    }

    FUNC_2(VAR_0->opaque);

    if (VAR_0->mutex)
        FUNC_1(&VAR_0->mutex);

    FUNC_3(VAR_0, 0, sizeof(SDL_AMediaCodec));
    FUNC_2(VAR_0);
}
