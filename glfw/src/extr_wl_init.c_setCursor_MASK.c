
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct wl_cursor_theme {int dummy; } ;
struct wl_cursor_image {int hotspot_x; int hotspot_y; int height; int width; } ;
struct wl_cursor {struct wl_cursor_image** images; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_6__ {int scale; } ;
struct TYPE_8__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int serial; int pointer; struct wl_cursor_theme* cursorThemeHiDPI; struct wl_cursor_theme* cursorTheme; struct wl_surface* cursorSurface; } ;
struct TYPE_9__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct wl_buffer* FUNC_1 (struct wl_cursor_image*) ;
 struct wl_cursor* FUNC_2 (struct wl_cursor_theme*,char const*) ;
 int FUNC_3 (int ,int ,struct wl_surface*,int,int) ;
 int FUNC_4 (struct wl_surface*,struct wl_buffer*,int ,int ) ;
 int FUNC_5 (struct wl_surface*) ;
 int FUNC_6 (struct wl_surface*,int ,int ,int ,int ) ;
 int FUNC_7 (struct wl_surface*,int) ;

__attribute__((used)) static void FUNC_8(_GLFWwindow* VAR_2, const char* VAR_3)
{
    struct wl_buffer* VAR_4;
    struct wl_cursor* VAR_5;
    struct wl_cursor_image* VAR_6;
    struct wl_surface* VAR_7 = VAR_1.wl.cursorSurface;
    struct wl_cursor_theme* VAR_8 = VAR_1.wl.cursorTheme;
    int VAR_9 = 1;

    if (VAR_2->wl.scale > 1 && VAR_1.wl.cursorThemeHiDPI)
    {


        VAR_9 = 2;
        VAR_8 = VAR_1.wl.cursorThemeHiDPI;
    }

    VAR_5 = FUNC_2(VAR_8, VAR_3);
    if (!VAR_5)
    {
        FUNC_0(VAR_0,
                        "Wayland: Standard cursor not found");
        return;
    }

    VAR_6 = VAR_5->images[0];

    if (!VAR_6)
        return;

    VAR_4 = FUNC_1(VAR_6);
    if (!VAR_4)
        return;
    FUNC_3(VAR_1.wl.pointer, VAR_1.wl.serial,
                          VAR_7,
                          VAR_6->hotspot_x / VAR_9,
                          VAR_6->hotspot_y / VAR_9);
    FUNC_7(VAR_7, VAR_9);
    FUNC_4(VAR_7, VAR_4, 0, 0);
    FUNC_6(VAR_7, 0, 0,
                      VAR_6->width, VAR_6->height);
    FUNC_5(VAR_7);
}
