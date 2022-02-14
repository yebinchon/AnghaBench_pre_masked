
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ visible; scalar_t__ title; } ;
typedef TYPE_3__ _GLFWwndconfig ;
struct TYPE_20__ {int * toplevel; int * surface; } ;
struct TYPE_21__ {int visible; int monitorsSize; scalar_t__ monitorsCount; int monitors; int * currentCursor; TYPE_1__ xdg; int title; int transparent; } ;
struct TYPE_23__ {TYPE_2__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
typedef int _GLFWmonitor ;
struct TYPE_24__ {int transparent; } ;
typedef TYPE_5__ _GLFWfbconfig ;
struct TYPE_25__ {scalar_t__ client; scalar_t__ source; } ;
typedef TYPE_6__ _GLFWctxconfig ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,TYPE_6__ const*,TYPE_5__ const*) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__ const*,TYPE_5__ const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__ const*) ;
 int FUNC_7 (TYPE_4__*) ;

int FUNC_8(_GLFWwindow* VAR_6,
                              const _GLFWwndconfig* VAR_7,
                              const _GLFWctxconfig* VAR_8,
                              const _GLFWfbconfig* VAR_9)
{
    VAR_6->wl.transparent = VAR_9->transparent;

    if (!FUNC_6(VAR_6, VAR_7))
        return VAR_1;

    if (VAR_8->client != VAR_3)
    {
        if (VAR_8->source == VAR_0 ||
            VAR_8->source == VAR_2)
        {
            if (!FUNC_2())
                return VAR_1;
            if (!FUNC_0(VAR_6, VAR_8, VAR_9))
                return VAR_1;
        }
        else if (VAR_8->source == VAR_4)
        {
            if (!FUNC_3())
                return VAR_1;
            if (!FUNC_1(VAR_6, VAR_8, VAR_9))
                return VAR_1;
        }
    }

    if (VAR_7->title)
        VAR_6->wl.title = FUNC_4(VAR_7->title);

    if (VAR_7->visible)
    {
        if (!FUNC_7(VAR_6))
            return VAR_1;

        VAR_6->wl.visible = VAR_5;
    }
    else
    {
        VAR_6->wl.xdg.surface = ((void*)0);
        VAR_6->wl.xdg.toplevel = ((void*)0);
        VAR_6->wl.visible = VAR_1;
    }

    VAR_6->wl.currentCursor = ((void*)0);

    VAR_6->wl.monitors = FUNC_5(1, sizeof(_GLFWmonitor*));
    VAR_6->wl.monitorsCount = 0;
    VAR_6->wl.monitorsSize = 1;

    return VAR_5;
}
