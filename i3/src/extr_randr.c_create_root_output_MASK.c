
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct output_name {char* name; } ;
struct TYPE_7__ {int height_in_pixels; int width_in_pixels; } ;
struct TYPE_5__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {int active; int names_head; TYPE_1__ rect; } ;
typedef TYPE_2__ Output ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct output_name*,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 void* FUNC_2 (int,int) ;

Output *FUNC_3(xcb_connection_t *VAR_2) {
    Output *VAR_3 = FUNC_2(1, sizeof(Output));

    VAR_3->active = 0;
    VAR_3->rect.x = 0;
    VAR_3->rect.y = 0;
    VAR_3->rect.width = VAR_1->width_in_pixels;
    VAR_3->rect.height = VAR_1->height_in_pixels;

    struct output_name *VAR_4 = FUNC_2(1, sizeof(struct output_name));
    VAR_4->name = "xroot-0";
    FUNC_0(&VAR_3->names_head);
    FUNC_1(&VAR_3->names_head, VAR_4, VAR_0);

    return VAR_3;
}
