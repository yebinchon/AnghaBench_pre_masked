
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int display_overlay; int (* free_l ) (TYPE_2__*) ;int create_overlay; int * opaque_class; TYPE_1__* opaque; } ;
struct TYPE_6__ {int egl; int overlay_pool; int overlay_manager; int * native_window; } ;
typedef TYPE_1__ SDL_Vout_Opaque ;
typedef TYPE_2__ SDL_Vout ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;

SDL_Vout *FUNC_4()
{
    SDL_Vout *VAR_3 = FUNC_2(sizeof(SDL_Vout_Opaque));
    if (!VAR_3)
        return ((void*)0);

    SDL_Vout_Opaque *VAR_4 = VAR_3->opaque;
    VAR_4->native_window = ((void*)0);
    if (FUNC_1(&VAR_4->overlay_manager, 32))
        goto fail;
    if (FUNC_1(&VAR_4->overlay_pool, 32))
        goto fail;

    VAR_4->egl = FUNC_0();
    if (!VAR_4->egl)
        goto fail;

    VAR_3->opaque_class = &VAR_2;
    VAR_3->create_overlay = VAR_0;
    VAR_3->free_l = FUNC_3;
    VAR_3->display_overlay = VAR_1;

    return VAR_3;
fail:
    FUNC_3(VAR_3);
    return ((void*)0);
}
