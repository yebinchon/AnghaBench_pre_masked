
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct TYPE_6__ {int hovered; } ;
struct TYPE_8__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {TYPE_3__* pointerFocus; int serial; } ;
struct TYPE_9__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_1(void* VAR_2,
                               struct wl_pointer* VAR_3,
                               uint32_t VAR_4,
                               struct wl_surface* VAR_5)
{
    _GLFWwindow* VAR_6 = VAR_1.wl.pointerFocus;

    if (!VAR_6)
        return;

    VAR_6->wl.hovered = VAR_0;

    VAR_1.wl.serial = VAR_4;
    VAR_1.wl.pointerFocus = ((void*)0);
    FUNC_0(VAR_6, VAR_0);
}
