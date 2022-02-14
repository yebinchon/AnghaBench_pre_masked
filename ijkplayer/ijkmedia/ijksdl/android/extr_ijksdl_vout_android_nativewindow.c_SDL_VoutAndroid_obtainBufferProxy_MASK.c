
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ SDL_Vout ;
typedef int SDL_AMediaCodecBufferProxy ;
typedef int SDL_AMediaCodecBufferInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*,int,int,int *) ;

SDL_AMediaCodecBufferProxy *FUNC_3(SDL_Vout *VAR_0, int VAR_1, int VAR_2, SDL_AMediaCodecBufferInfo *VAR_3)
{
    SDL_AMediaCodecBufferProxy *VAR_4 = ((void*)0);
    FUNC_0(VAR_0->mutex);
    VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_1(VAR_0->mutex);
    return VAR_4;
}
