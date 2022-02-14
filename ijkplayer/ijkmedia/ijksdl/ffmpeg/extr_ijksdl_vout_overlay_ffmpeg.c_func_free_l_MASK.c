
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* opaque; } ;
struct TYPE_6__ {scalar_t__ mutex; scalar_t__ frame_buffer; scalar_t__ linked_frame; scalar_t__ managed_frame; int img_convert_ctx; } ;
typedef TYPE_1__ SDL_VoutOverlay_Opaque ;
typedef TYPE_2__ SDL_VoutOverlay ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(SDL_VoutOverlay *VAR_0)
{
    FUNC_0("SDL_Overlay(ffmpeg): overlay_free_l(%p)\n", VAR_0);
    if (!VAR_0)
        return;

    SDL_VoutOverlay_Opaque *VAR_1 = VAR_0->opaque;
    if (!VAR_1)
        return;

    FUNC_6(VAR_1->img_convert_ctx);

    if (VAR_1->managed_frame)
        FUNC_4(&VAR_1->managed_frame);

    if (VAR_1->linked_frame) {
        FUNC_5(VAR_1->linked_frame);
        FUNC_4(&VAR_1->linked_frame);
    }

    if (VAR_1->frame_buffer)
        FUNC_3(&VAR_1->frame_buffer);

    if (VAR_1->mutex)
        FUNC_1(VAR_1->mutex);

    FUNC_2(VAR_0);
}
