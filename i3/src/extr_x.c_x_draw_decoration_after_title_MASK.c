
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct deco_render_params {TYPE_2__* color; } ;
struct TYPE_9__ {int height; int y; scalar_t__ width; scalar_t__ x; } ;
struct TYPE_10__ {TYPE_1__* parent; TYPE_3__ deco_rect; } ;
struct TYPE_8__ {int background; } ;
struct TYPE_7__ {int frame_buffer; } ;
typedef TYPE_3__ Rect ;
typedef TYPE_4__ Con ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,struct deco_render_params*) ;

__attribute__((used)) static void FUNC_5(Con *VAR_0, struct deco_render_params *VAR_1) {
    FUNC_0(VAR_0->parent != ((void*)0));

    Rect *VAR_2 = &(VAR_0->deco_rect);




    if (!FUNC_2()) {



        FUNC_1(&(VAR_0->parent->frame_buffer), VAR_1->color->background,
                            VAR_2->x + VAR_2->width - 2 * FUNC_3(1),
                            VAR_2->y,
                            2 * FUNC_3(1),
                            VAR_2->height);
    }


    FUNC_4(VAR_0, VAR_1);
}
