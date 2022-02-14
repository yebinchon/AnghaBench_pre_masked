
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * (* func_getOutputFormat ) (TYPE_1__*) ;} ;
typedef int SDL_AMediaFormat ;
typedef TYPE_1__ SDL_AMediaCodec ;


 int FUNC_0 (int * (*) (TYPE_1__*)) ;
 int * FUNC_1 (TYPE_1__*) ;

SDL_AMediaFormat* FUNC_2(SDL_AMediaCodec* VAR_0)
{
    FUNC_0(VAR_0->func_getOutputFormat);
    return VAR_0->func_getOutputFormat(VAR_0);
}
