
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct wl_cursor {int dummy; } ;
struct TYPE_16__ {scalar_t__ focus; } ;
struct TYPE_17__ {TYPE_1__ decorations; TYPE_6__* currentCursor; } ;
struct TYPE_19__ {scalar_t__ cursorMode; TYPE_2__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_20__ {int member_7; int member_6; int member_5; int member_4; int member_3; int * member_2; struct wl_cursor* member_1; struct wl_cursor* member_0; } ;
typedef TYPE_5__ _GLFWcursorWayland ;
struct TYPE_21__ {TYPE_5__ wl; } ;
typedef TYPE_6__ _GLFWcursor ;
struct TYPE_18__ {int serial; int pointer; scalar_t__ cursorThemeHiDPI; scalar_t__ cursorTheme; TYPE_4__* pointerFocus; } ;
struct TYPE_15__ {TYPE_3__ wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_14__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 struct wl_cursor* FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ,int ,int *,int ,int ) ;

void FUNC_7(_GLFWwindow* VAR_6, _GLFWcursor* VAR_7)
{
    struct wl_cursor* VAR_8;
    struct wl_cursor* VAR_9 = ((void*)0);

    if (!VAR_4.wl.pointer)
        return;

    VAR_6->wl.currentCursor = VAR_7;



    if (VAR_6 != VAR_4.wl.pointerFocus || VAR_6->wl.decorations.focus != VAR_5)
        return;


    if (VAR_6->cursorMode != VAR_0 && FUNC_1(VAR_6))
        FUNC_4(VAR_6);

    if (VAR_6->cursorMode == VAR_2)
    {
        if (VAR_7)
            FUNC_3(VAR_6, &VAR_7->wl);
        else
        {
            VAR_8 = FUNC_5(VAR_4.wl.cursorTheme,
                                                       "left_ptr");
            if (!VAR_8)
            {
                FUNC_0(VAR_3,
                                "Wayland: Standard cursor not found");
                return;
            }
            if (VAR_4.wl.cursorThemeHiDPI)
                VAR_9 =
                    FUNC_5(VAR_4.wl.cursorThemeHiDPI,
                                               "left_ptr");
            _GLFWcursorWayland VAR_10 = {
                VAR_8,
                VAR_9,
                ((void*)0),
                0, 0,
                0, 0,
                0
            };
            FUNC_3(VAR_6, &VAR_10);
        }
    }
    else if (VAR_6->cursorMode == VAR_0)
    {
        if (!FUNC_1(VAR_6))
            FUNC_2(VAR_6);
    }
    else if (VAR_6->cursorMode == VAR_1)
    {
        FUNC_6(VAR_4.wl.pointer, VAR_4.wl.serial, ((void*)0), 0, 0);
    }
}
