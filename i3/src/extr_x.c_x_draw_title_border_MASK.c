
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct deco_render_params {TYPE_2__* color; } ;
struct TYPE_8__ {int y; int height; int width; scalar_t__ x; } ;
struct TYPE_9__ {TYPE_1__* parent; TYPE_3__ deco_rect; } ;
struct TYPE_7__ {int border; } ;
struct TYPE_6__ {int frame_buffer; } ;
typedef TYPE_3__ Rect ;
typedef TYPE_4__ Con ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int,int,int) ;

__attribute__((used)) static void FUNC_2(Con *VAR_0, struct deco_render_params *VAR_1) {
    FUNC_0(VAR_0->parent != ((void*)0));

    Rect *VAR_2 = &(VAR_0->deco_rect);


    FUNC_1(&(VAR_0->parent->frame_buffer), VAR_1->color->border,
                        VAR_2->x, VAR_2->y, 1, VAR_2->height);


    FUNC_1(&(VAR_0->parent->frame_buffer), VAR_1->color->border,
                        VAR_2->x + VAR_2->width - 1, VAR_2->y, 1, VAR_2->height);


    FUNC_1(&(VAR_0->parent->frame_buffer), VAR_1->color->border,
                        VAR_2->x, VAR_2->y, VAR_2->width, 1);


    FUNC_1(&(VAR_0->parent->frame_buffer), VAR_1->color->border,
                        VAR_2->x, VAR_2->y + VAR_2->height - 1, VAR_2->width, 1);
}
