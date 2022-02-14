
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sdl_amedia_status_t ;
struct TYPE_7__ {int is_started; int (* func_stop ) (TYPE_2__*) ;TYPE_1__* common; } ;
struct TYPE_6__ {int fake_fifo; } ;
typedef TYPE_2__ SDL_AMediaCodec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int (*) (TYPE_2__*)) ;
 int FUNC_2 (TYPE_2__*) ;

sdl_amedia_status_t FUNC_3(SDL_AMediaCodec* VAR_0)
{
    FUNC_1(VAR_0->func_stop);
    VAR_0->is_started = 0;
    FUNC_0(&VAR_0->common->fake_fifo);
    return VAR_0->func_stop(VAR_0);
}
