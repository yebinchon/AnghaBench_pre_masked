
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sdl_amedia_status_t ;
struct TYPE_5__ {scalar_t__ (* func_start ) (TYPE_1__*) ;int is_started; } ;
typedef TYPE_1__ SDL_AMediaCodec ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__ (*) (TYPE_1__*)) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

sdl_amedia_status_t FUNC_2(SDL_AMediaCodec* VAR_1)
{
    FUNC_0(VAR_1->func_start);
    sdl_amedia_status_t VAR_2 = VAR_1->func_start(VAR_1);
    if (VAR_2 == VAR_0) {
        VAR_1->is_started = 1;
    }
    return VAR_2;
}
