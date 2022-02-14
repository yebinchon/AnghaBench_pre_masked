
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_4__ xcb_rectangle_t ;
struct TYPE_9__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_12__ {int border_width; TYPE_3__* window; TYPE_2__ window_rect; TYPE_1__ rect; } ;
struct TYPE_10__ {int id; } ;
typedef TYPE_5__ Con ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_4__,int ,int ) ;

void FUNC_2(Con *VAR_1) {
    xcb_rectangle_t VAR_2;
    if (VAR_1->window == ((void*)0))
        return;

    VAR_2.x = VAR_1->rect.x + VAR_1->window_rect.x;
    VAR_2.y = VAR_1->rect.y + VAR_1->window_rect.y;
    VAR_2.width = VAR_1->window_rect.width;
    VAR_2.height = VAR_1->window_rect.height;

    FUNC_0("fake rect = (%d, %d, %d, %d)\n", VAR_2.x, VAR_2.y, VAR_2.width, VAR_2.height);

    FUNC_1(VAR_0, VAR_2, VAR_1->window->id, VAR_1->border_width);
}
