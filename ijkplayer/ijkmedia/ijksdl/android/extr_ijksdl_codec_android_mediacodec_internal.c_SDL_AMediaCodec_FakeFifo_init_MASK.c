
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sdl_amedia_status_t ;
struct TYPE_4__ {void* wakeup_dequeue_cond; void* wakeup_enqueue_cond; int mutex; } ;
typedef TYPE_1__ SDL_AMediaCodec_FakeFifo ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

sdl_amedia_status_t FUNC_3(SDL_AMediaCodec_FakeFifo *VAR_1)
{
    FUNC_2(VAR_1, 0, sizeof(SDL_AMediaCodec_FakeFifo));

    VAR_1->mutex = FUNC_1();
    VAR_1->wakeup_enqueue_cond = FUNC_0();
    VAR_1->wakeup_dequeue_cond = FUNC_0();

    return VAR_0;
}
