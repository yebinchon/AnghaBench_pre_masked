
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct wl_cursor_image {int delay; int hotspot_x; int hotspot_y; int height; int width; } ;
struct wl_cursor {struct wl_cursor_image** images; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_10__ {int tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_2__ it_value; } ;
struct TYPE_9__ {int scale; } ;
struct TYPE_12__ {TYPE_1__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_13__ {size_t currentImage; int xhot; int yhot; int height; int width; struct wl_cursor* cursorHiDPI; struct wl_buffer* buffer; struct wl_cursor* cursor; } ;
typedef TYPE_5__ _GLFWcursorWayland ;
struct TYPE_11__ {int serial; int pointer; int cursorTimerfd; struct wl_surface* cursorSurface; } ;
struct TYPE_14__ {TYPE_3__ wl; } ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (int ,int ,struct itimerspec*,int *) ;
 struct wl_buffer* FUNC_1 (struct wl_cursor_image*) ;
 int FUNC_2 (int ,int ,struct wl_surface*,int,int) ;
 int FUNC_3 (struct wl_surface*,struct wl_buffer*,int ,int ) ;
 int FUNC_4 (struct wl_surface*) ;
 int FUNC_5 (struct wl_surface*,int ,int ,int ,int ) ;
 int FUNC_6 (struct wl_surface*,int) ;

__attribute__((used)) static void FUNC_7(_GLFWwindow* VAR_1,
                           _GLFWcursorWayland* VAR_2)
{
    struct itimerspec VAR_3 = {};
    struct wl_cursor* VAR_4 = VAR_2->cursor;
    struct wl_cursor_image* VAR_5;
    struct wl_buffer* VAR_6;
    struct wl_surface* VAR_7 = VAR_0.wl.cursorSurface;
    int VAR_8 = 1;

    if (!VAR_4)
        VAR_6 = VAR_2->buffer;
    else
    {
        if (VAR_1->wl.scale > 1 && VAR_2->cursorHiDPI)
        {
            VAR_4 = VAR_2->cursorHiDPI;
            VAR_8 = 2;
        }

        VAR_5 = VAR_4->images[VAR_2->currentImage];
        VAR_6 = FUNC_1(VAR_5);
        if (!VAR_6)
            return;

        VAR_3.it_value.tv_sec = VAR_5->delay / 1000;
        VAR_3.it_value.tv_nsec = (VAR_5->delay % 1000) * 1000000;
        FUNC_0(VAR_0.wl.cursorTimerfd, 0, &VAR_3, ((void*)0));

        VAR_2->width = VAR_5->width;
        VAR_2->height = VAR_5->height;
        VAR_2->xhot = VAR_5->hotspot_x;
        VAR_2->yhot = VAR_5->hotspot_y;
    }

    FUNC_2(VAR_0.wl.pointer, VAR_0.wl.serial,
                          VAR_7,
                          VAR_2->xhot / VAR_8,
                          VAR_2->yhot / VAR_8);
    FUNC_6(VAR_7, VAR_8);
    FUNC_3(VAR_7, VAR_6, 0, 0);
    FUNC_5(VAR_7, 0, 0,
                      VAR_2->width, VAR_2->height);
    FUNC_4(VAR_7);
}
