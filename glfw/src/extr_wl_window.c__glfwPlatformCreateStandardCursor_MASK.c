
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wl_cursor {int dummy; } ;
struct TYPE_7__ {struct wl_cursor* cursorHiDPI; scalar_t__ currentImage; struct wl_cursor* cursor; } ;
struct TYPE_8__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWcursor ;
struct TYPE_6__ {scalar_t__ cursorThemeHiDPI; scalar_t__ cursorTheme; } ;
struct TYPE_9__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 struct wl_cursor* FUNC_2 (scalar_t__,int ) ;

int FUNC_3(_GLFWcursor* VAR_4, int VAR_5)
{
    struct wl_cursor* VAR_6;

    VAR_6 = FUNC_2(VAR_3.wl.cursorTheme,
                                                FUNC_1(VAR_5));
    if (!VAR_6)
    {
        FUNC_0(VAR_1,
                        "Wayland: Standard cursor \"%s\" not found",
                        FUNC_1(VAR_5));
        return VAR_0;
    }

    VAR_4->wl.cursor = VAR_6;
    VAR_4->wl.currentImage = 0;

    if (VAR_3.wl.cursorThemeHiDPI)
    {
        VAR_6 = FUNC_2(VAR_3.wl.cursorThemeHiDPI,
                                                    FUNC_1(VAR_5));
        VAR_4->wl.cursorHiDPI = VAR_6;
    }

    return VAR_2;
}
