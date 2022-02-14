
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_pointer {int dummy; } ;
struct TYPE_10__ {int focus; } ;
struct TYPE_9__ {scalar_t__ toplevel; } ;
struct TYPE_11__ {TYPE_2__ decorations; scalar_t__ cursorPosY; scalar_t__ cursorPosX; TYPE_1__ xdg; scalar_t__ width; } ;
struct TYPE_14__ {TYPE_3__ wl; } ;
typedef TYPE_6__ _GLFWwindow ;
struct TYPE_12__ {int modifiers; } ;
struct TYPE_13__ {TYPE_4__ xkb; scalar_t__ serial; int seat; TYPE_6__* pointerFocus; } ;
struct TYPE_15__ {TYPE_5__ wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_8__ VAR_15 ;
 int FUNC_0 (TYPE_6__*,int,int ,int ) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void* VAR_16,
                                struct wl_pointer* VAR_17,
                                uint32_t VAR_18,
                                uint32_t VAR_19,
                                uint32_t VAR_20,
                                uint32_t VAR_21)
{
    _GLFWwindow* VAR_22 = VAR_15.wl.pointerFocus;
    int VAR_23;
    uint32_t VAR_24 = VAR_9;

    if (!VAR_22)
        return;
    if (VAR_20 == VAR_0)
    {
        switch (VAR_22->wl.decorations.focus)
        {
            case 130:
                break;
            case 128:
                if (VAR_22->wl.cursorPosY < VAR_14)
                    VAR_24 = VAR_11;
                else
                {
                    FUNC_2(VAR_22->wl.xdg.toplevel, VAR_15.wl.seat, VAR_18);
                }
                break;
            case 131:
                if (VAR_22->wl.cursorPosY < VAR_14)
                    VAR_24 = VAR_12;
                else
                    VAR_24 = VAR_8;
                break;
            case 129:
                if (VAR_22->wl.cursorPosY < VAR_14)
                    VAR_24 = VAR_13;
                else
                    VAR_24 = VAR_10;
                break;
            case 132:
                if (VAR_22->wl.cursorPosX < VAR_14)
                    VAR_24 = VAR_6;
                else if (VAR_22->wl.cursorPosX > VAR_22->wl.width + VAR_14)
                    VAR_24 = VAR_7;
                else
                    VAR_24 = VAR_5;
                break;
            default:
                FUNC_1(0);
        }
        if (VAR_24 != VAR_9)
        {
            FUNC_3(VAR_22->wl.xdg.toplevel, VAR_15.wl.seat,
                                VAR_18, VAR_24);
        }
    }
    else if (VAR_20 == VAR_1)
    {
        if (VAR_22->wl.decorations.focus != 130 && VAR_22->wl.xdg.toplevel)
        {
            FUNC_4(VAR_22->wl.xdg.toplevel,
                                          VAR_15.wl.seat, VAR_18,
                                          VAR_22->wl.cursorPosX,
                                          VAR_22->wl.cursorPosY);
            return;
        }
    }


    if (VAR_22->wl.decorations.focus != 130)
        return;

    VAR_15.wl.serial = VAR_18;



    VAR_23 = VAR_20 - VAR_0;

    FUNC_0(VAR_22,
                         VAR_23,
                         VAR_21 == VAR_4
                                ? VAR_2
                                : VAR_3,
                         VAR_15.wl.xkb.modifiers);
}
