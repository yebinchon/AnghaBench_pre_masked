
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* opaque; } ;
struct TYPE_5__ {int acodec; int egl; int * native_window; int overlay_manager; int overlay_pool; } ;
typedef TYPE_1__ SDL_Vout_Opaque ;
typedef TYPE_2__ SDL_Vout ;
typedef int SDL_AMediaCodecBufferProxy ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(SDL_Vout *VAR_0)
{
    if (!VAR_0)
        return;

    SDL_Vout_Opaque *VAR_1 = VAR_0->opaque;
    if (VAR_1) {
        SDL_AMediaCodecBufferProxy **VAR_2 = (SDL_AMediaCodecBufferProxy **)FUNC_2(&VAR_1->overlay_manager);
        SDL_AMediaCodecBufferProxy **VAR_3 = (SDL_AMediaCodecBufferProxy **)FUNC_4(&VAR_1->overlay_manager);
        for (; VAR_2 < VAR_3; ++VAR_2) {
            FUNC_5(VAR_2);
        }
        FUNC_3(&VAR_1->overlay_pool);
        FUNC_3(&VAR_1->overlay_manager);

        if (VAR_1->native_window) {
            FUNC_0(VAR_1->native_window);
            VAR_1->native_window = ((void*)0);
        }

        FUNC_1(&VAR_1->egl);

        FUNC_6(&VAR_1->acodec);
    }

    FUNC_7(VAR_0);
}
