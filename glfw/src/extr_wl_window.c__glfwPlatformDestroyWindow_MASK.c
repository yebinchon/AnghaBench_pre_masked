
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_17__ {scalar_t__ surface; scalar_t__ toplevel; scalar_t__ decoration; } ;
struct TYPE_16__ {scalar_t__ buffer; } ;
struct TYPE_18__ {int monitors; int title; scalar_t__ surface; TYPE_4__ xdg; scalar_t__ native; TYPE_3__ decorations; scalar_t__ idleInhibitor; } ;
struct TYPE_15__ {int (* destroy ) (TYPE_6__*) ;} ;
struct TYPE_19__ {TYPE_5__ wl; TYPE_2__ context; } ;
typedef TYPE_6__ _GLFWwindow ;
struct TYPE_14__ {TYPE_6__* keyboardFocus; TYPE_6__* pointerFocus; } ;
struct TYPE_13__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_12__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

void FUNC_12(_GLFWwindow* VAR_2)
{
    if (VAR_2 == VAR_1.wl.pointerFocus)
    {
        VAR_1.wl.pointerFocus = ((void*)0);
        FUNC_0(VAR_2, VAR_0);
    }
    if (VAR_2 == VAR_1.wl.keyboardFocus)
    {
        VAR_1.wl.keyboardFocus = ((void*)0);
        FUNC_1(VAR_2, VAR_0);
    }

    if (VAR_2->wl.idleInhibitor)
        FUNC_10(VAR_2->wl.idleInhibitor);

    if (VAR_2->context.destroy)
        VAR_2->context.destroy(VAR_2);

    FUNC_2(VAR_2);
    if (VAR_2->wl.xdg.decoration)
        FUNC_11(VAR_2->wl.xdg.decoration);

    if (VAR_2->wl.decorations.buffer)
        FUNC_5(VAR_2->wl.decorations.buffer);

    if (VAR_2->wl.native)
        FUNC_6(VAR_2->wl.native);

    if (VAR_2->wl.xdg.toplevel)
        FUNC_9(VAR_2->wl.xdg.toplevel);

    if (VAR_2->wl.xdg.surface)
        FUNC_8(VAR_2->wl.xdg.surface);

    if (VAR_2->wl.surface)
        FUNC_7(VAR_2->wl.surface);

    FUNC_3(VAR_2->wl.title);
    FUNC_3(VAR_2->wl.monitors);
}
