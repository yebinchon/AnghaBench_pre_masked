
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct TYPE_13__ {struct wl_surface* surface; } ;
struct TYPE_12__ {struct wl_surface* surface; } ;
struct TYPE_11__ {struct wl_surface* surface; } ;
struct TYPE_10__ {struct wl_surface* surface; } ;
struct TYPE_14__ {TYPE_4__ bottom; TYPE_3__ right; TYPE_2__ left; TYPE_1__ top; } ;
struct TYPE_15__ {TYPE_5__ decorations; } ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_6__ wl; } ;
typedef TYPE_7__ _GLFWwindow ;
struct TYPE_17__ {TYPE_7__* windowListHead; } ;


 TYPE_9__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static _GLFWwindow* FUNC_0(struct wl_surface* VAR_5,
                                                    int* VAR_6)
{
    int VAR_7;
    _GLFWwindow* VAR_8 = VAR_0.windowListHead;
    if (!VAR_6)
        VAR_6 = &VAR_7;
    while (VAR_8)
    {
        if (VAR_5 == VAR_8->wl.decorations.top.surface)
        {
            *VAR_6 = VAR_4;
            break;
        }
        if (VAR_5 == VAR_8->wl.decorations.left.surface)
        {
            *VAR_6 = VAR_2;
            break;
        }
        if (VAR_5 == VAR_8->wl.decorations.right.surface)
        {
            *VAR_6 = VAR_3;
            break;
        }
        if (VAR_5 == VAR_8->wl.decorations.bottom.surface)
        {
            *VAR_6 = VAR_1;
            break;
        }
        VAR_8 = VAR_8->next;
    }
    return VAR_8;
}
