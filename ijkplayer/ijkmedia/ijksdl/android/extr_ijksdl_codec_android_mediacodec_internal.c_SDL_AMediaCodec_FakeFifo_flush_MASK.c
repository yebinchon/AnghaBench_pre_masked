
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; scalar_t__ size; scalar_t__ end; scalar_t__ begin; scalar_t__ should_abort; } ;
typedef TYPE_1__ SDL_AMediaCodec_FakeFifo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(SDL_AMediaCodec_FakeFifo *VAR_0)
{
    if (VAR_0->should_abort)
        return;

    FUNC_0(VAR_0->mutex);
    VAR_0->begin = 0;
    VAR_0->end = 0;
    VAR_0->size = 0;
    FUNC_1(VAR_0->mutex);
}
