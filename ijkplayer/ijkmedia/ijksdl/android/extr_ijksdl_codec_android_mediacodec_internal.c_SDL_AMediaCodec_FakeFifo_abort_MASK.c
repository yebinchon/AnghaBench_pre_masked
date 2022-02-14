
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int should_abort; int mutex; int wakeup_dequeue_cond; int wakeup_enqueue_cond; } ;
typedef TYPE_1__ SDL_AMediaCodec_FakeFifo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(SDL_AMediaCodec_FakeFifo *VAR_0)
{
    FUNC_1(VAR_0->mutex);
    VAR_0->should_abort = 1;
    FUNC_0(VAR_0->wakeup_enqueue_cond);
    FUNC_0(VAR_0->wakeup_dequeue_cond);
    FUNC_2(VAR_0->mutex);
}
