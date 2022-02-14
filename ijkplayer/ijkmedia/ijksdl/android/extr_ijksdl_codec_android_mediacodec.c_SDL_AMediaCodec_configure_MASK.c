
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sdl_amedia_status_t ;
struct TYPE_5__ {int is_configured; int is_started; int (* func_configure ) (TYPE_1__*,int const*,int *,int *,int ) ;} ;
typedef int SDL_AMediaFormat ;
typedef int SDL_AMediaCrypto ;
typedef TYPE_1__ SDL_AMediaCodec ;
typedef int ANativeWindow ;


 int FUNC_0 (int (*) (TYPE_1__*,int const*,int *,int *,int )) ;
 int FUNC_1 (TYPE_1__*,int const*,int *,int *,int ) ;

sdl_amedia_status_t FUNC_2(
    SDL_AMediaCodec* VAR_0,
    const SDL_AMediaFormat* VAR_1,
    ANativeWindow* VAR_2,
    SDL_AMediaCrypto *VAR_3,
    uint32_t VAR_4)
{
    FUNC_0(VAR_0->func_configure);
    sdl_amedia_status_t VAR_5 = VAR_0->func_configure(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    VAR_0->is_configured = 1;
    VAR_0->is_started = 0;
    return VAR_5;
}
