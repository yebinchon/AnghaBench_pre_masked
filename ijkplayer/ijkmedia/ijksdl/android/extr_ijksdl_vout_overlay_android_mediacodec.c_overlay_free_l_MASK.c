
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* opaque; } ;
struct TYPE_7__ {scalar_t__ mutex; } ;
typedef TYPE_1__ SDL_VoutOverlay_Opaque ;
typedef TYPE_2__ SDL_VoutOverlay ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(SDL_VoutOverlay *VAR_0)
{
    FUNC_0("SDL_Overlay(mediacodec): overlay_free_l(%p)\n", VAR_0);
    if (!VAR_0)
        return;

    SDL_VoutOverlay_Opaque *VAR_1 = VAR_0->opaque;
    if (!VAR_1)
        return;

    FUNC_3(VAR_0);

    if (VAR_1->mutex)
        FUNC_1(VAR_1->mutex);

    FUNC_2(VAR_0);
}
