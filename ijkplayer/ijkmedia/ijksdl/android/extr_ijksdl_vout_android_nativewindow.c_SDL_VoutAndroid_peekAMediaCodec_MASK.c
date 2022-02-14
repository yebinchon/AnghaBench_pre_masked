
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mutex; TYPE_1__* opaque; } ;
struct TYPE_4__ {int * acodec; } ;
typedef TYPE_1__ SDL_Vout_Opaque ;
typedef TYPE_2__ SDL_Vout ;
typedef int SDL_AMediaCodec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

SDL_AMediaCodec *FUNC_2(SDL_Vout *VAR_0)
{
    SDL_Vout_Opaque *VAR_1 = VAR_0->opaque;
    SDL_AMediaCodec *VAR_2 = ((void*)0);

    FUNC_0(VAR_0->mutex);
    VAR_2 = VAR_1->acodec;
    FUNC_1(VAR_0->mutex);
    return VAR_2;
}
