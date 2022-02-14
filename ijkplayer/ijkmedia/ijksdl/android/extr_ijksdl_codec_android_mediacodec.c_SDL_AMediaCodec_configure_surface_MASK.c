
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sdl_amedia_status_t ;
typedef int jobject ;
struct TYPE_5__ {int is_configured; int is_started; int (* func_configure_surface ) (int *,TYPE_1__*,int const*,int ,int *,int ) ;} ;
typedef int SDL_AMediaFormat ;
typedef int SDL_AMediaCrypto ;
typedef TYPE_1__ SDL_AMediaCodec ;
typedef int JNIEnv ;


 int FUNC_0 (int (*) (int *,TYPE_1__*,int const*,int ,int *,int )) ;
 int FUNC_1 (int *,TYPE_1__*,int const*,int ,int *,int ) ;

sdl_amedia_status_t FUNC_2(
    JNIEnv*VAR_0,
    SDL_AMediaCodec* VAR_1,
    const SDL_AMediaFormat* VAR_2,
    jobject VAR_3,
    SDL_AMediaCrypto *VAR_4,
    uint32_t VAR_5)
{
    FUNC_0(VAR_1->func_configure_surface);
    sdl_amedia_status_t VAR_6 = VAR_1->func_configure_surface(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_1->is_configured = 1;
    VAR_1->is_started = 0;
    return VAR_6;
}
