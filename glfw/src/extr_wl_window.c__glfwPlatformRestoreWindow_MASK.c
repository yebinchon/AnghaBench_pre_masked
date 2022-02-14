
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ toplevel; } ;
struct TYPE_7__ {scalar_t__ maximized; TYPE_1__ xdg; } ;
struct TYPE_8__ {TYPE_2__ wl; scalar_t__ monitor; } ;
typedef TYPE_3__ _GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(_GLFWwindow* VAR_1)
{
    if (VAR_1->wl.xdg.toplevel)
    {
        if (VAR_1->monitor)
            FUNC_1(VAR_1->wl.xdg.toplevel);
        if (VAR_1->wl.maximized)
            FUNC_2(VAR_1->wl.xdg.toplevel);


    }
    FUNC_0(VAR_1, ((void*)0));
    VAR_1->wl.maximized = VAR_0;
}
