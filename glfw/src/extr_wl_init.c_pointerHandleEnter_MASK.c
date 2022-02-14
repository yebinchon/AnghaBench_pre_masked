
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct TYPE_10__ {int focus; } ;
struct TYPE_12__ {int currentCursor; int hovered; TYPE_1__ decorations; } ;
struct TYPE_13__ {TYPE_3__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_11__ {TYPE_4__* pointerFocus; int serial; } ;
struct TYPE_14__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 TYPE_9__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (struct wl_surface*,int*) ;
 TYPE_4__* FUNC_3 (struct wl_surface*) ;

__attribute__((used)) static void FUNC_4(void* VAR_2,
                               struct wl_pointer* VAR_3,
                               uint32_t VAR_4,
                               struct wl_surface* VAR_5,
                               wl_fixed_t VAR_6,
                               wl_fixed_t VAR_7)
{

    if (!VAR_5)
        return;

    int VAR_8 = 0;
    _GLFWwindow* VAR_9 = FUNC_3(VAR_5);
    if (!VAR_9)
    {
        VAR_9 = FUNC_2(VAR_5, &VAR_8);
        if (!VAR_9)
            return;
    }

    VAR_9->wl.decorations.focus = VAR_8;
    VAR_1.wl.serial = VAR_4;
    VAR_1.wl.pointerFocus = VAR_9;

    VAR_9->wl.hovered = VAR_0;

    FUNC_1(VAR_9, VAR_9->wl.currentCursor);
    FUNC_0(VAR_9, VAR_0);
}
