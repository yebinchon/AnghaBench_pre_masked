
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


struct TYPE_16__ {int toplevel; int surface; } ;
struct TYPE_17__ {int surface; TYPE_3__ xdg; scalar_t__ maximized; scalar_t__ title; } ;
struct TYPE_19__ {scalar_t__ minwidth; scalar_t__ minheight; scalar_t__ maxwidth; scalar_t__ maxheight; TYPE_4__ wl; TYPE_2__* monitor; } ;
typedef TYPE_6__ _GLFWwindow ;
struct TYPE_18__ {int display; int wmBase; } ;
struct TYPE_14__ {int output; } ;
struct TYPE_15__ {TYPE_1__ wl; } ;
struct TYPE_13__ {TYPE_5__ wl; } ;
typedef int GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_12__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int *,TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,TYPE_6__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static GLFWbool FUNC_14(_GLFWwindow* VAR_7)
{
    VAR_7->wl.xdg.surface = FUNC_13(VAR_4.wl.wmBase,
                                                         VAR_7->wl.surface);
    if (!VAR_7->wl.xdg.surface)
    {
        FUNC_0(VAR_2,
                        "Wayland: xdg-surface creation failed");
        return VAR_1;
    }

    FUNC_5(VAR_7->wl.xdg.surface,
                             &VAR_5,
                             VAR_7);

    VAR_7->wl.xdg.toplevel = FUNC_6(VAR_7->wl.xdg.surface);
    if (!VAR_7->wl.xdg.toplevel)
    {
        FUNC_0(VAR_2,
                        "Wayland: xdg-toplevel creation failed");
        return VAR_1;
    }

    FUNC_7(VAR_7->wl.xdg.toplevel,
                              &VAR_6,
                              VAR_7);

    if (VAR_7->wl.title)
        FUNC_12(VAR_7->wl.xdg.toplevel, VAR_7->wl.title);

    if (VAR_7->minwidth != VAR_0 && VAR_7->minheight != VAR_0)
        FUNC_11(VAR_7->wl.xdg.toplevel,
                                  VAR_7->minwidth, VAR_7->minheight);
    if (VAR_7->maxwidth != VAR_0 && VAR_7->maxheight != VAR_0)
        FUNC_9(VAR_7->wl.xdg.toplevel,
                                  VAR_7->maxwidth, VAR_7->maxheight);

    if (VAR_7->monitor)
    {
        FUNC_8(VAR_7->wl.xdg.toplevel,
                                    VAR_7->monitor->wl.output);
        FUNC_1(VAR_7, VAR_3);
    }
    else if (VAR_7->wl.maximized)
    {
        FUNC_10(VAR_7->wl.xdg.toplevel);
        FUNC_1(VAR_7, VAR_1);
        FUNC_2(VAR_7);
    }
    else
    {
        FUNC_1(VAR_7, VAR_1);
        FUNC_2(VAR_7);
    }

    FUNC_4(VAR_7->wl.surface);
    FUNC_3(VAR_4.wl.display);

    return VAR_3;
}
