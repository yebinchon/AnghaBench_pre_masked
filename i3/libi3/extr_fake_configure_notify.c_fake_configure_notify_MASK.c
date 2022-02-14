
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* xcb_window_t ;
struct TYPE_4__ {int height; int width; int y; int x; } ;
typedef TYPE_1__ xcb_rectangle_t ;
typedef int xcb_connection_t ;
struct TYPE_5__ {int border_width; int override_redirect; int above_sibling; int height; int width; int y; int x; int response_type; void* window; void* event; } ;
typedef TYPE_2__ xcb_configure_notify_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,void*,int ,char*) ;

void FUNC_4(xcb_connection_t *VAR_3, xcb_rectangle_t VAR_4, xcb_window_t VAR_5, int VAR_6) {



    void *VAR_7 = FUNC_1(32, 1);
    xcb_configure_notify_event_t *VAR_8 = VAR_7;

    VAR_8->event = VAR_5;
    VAR_8->window = VAR_5;
    VAR_8->response_type = VAR_0;

    VAR_8->x = VAR_4.x;
    VAR_8->y = VAR_4.y;
    VAR_8->width = VAR_4.width;
    VAR_8->height = VAR_4.height;

    VAR_8->border_width = VAR_6;
    VAR_8->above_sibling = VAR_2;
    VAR_8->override_redirect = 0;

    FUNC_3(VAR_3, 0, VAR_5, VAR_1, (char *)VAR_8);
    FUNC_2(VAR_3);

    FUNC_0(VAR_7);
}
