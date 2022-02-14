
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {scalar_t__ toplevel; } ;
struct TYPE_13__ {TYPE_1__ xdg; } ;
struct TYPE_15__ {TYPE_2__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
typedef int _GLFWmonitor ;
struct TYPE_14__ {int decorationManager; } ;
struct TYPE_11__ {TYPE_3__ wl; } ;


 int VAR_0 ;
 TYPE_10__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int *,int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(_GLFWwindow* VAR_2,
                                   _GLFWmonitor* VAR_3,
                                   int VAR_4, int VAR_5,
                                   int VAR_6, int VAR_7,
                                   int VAR_8)
{
    if (VAR_3)
    {
        FUNC_2(VAR_2, VAR_3, VAR_8);
    }
    else
    {
        if (VAR_2->wl.xdg.toplevel)
            FUNC_4(VAR_2->wl.xdg.toplevel);
        FUNC_3(VAR_2, VAR_0);
        if (!VAR_1.wl.decorationManager)
            FUNC_1(VAR_2);
    }
    FUNC_0(VAR_2, VAR_3);
}
