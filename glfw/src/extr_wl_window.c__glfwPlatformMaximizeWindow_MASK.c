
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ toplevel; } ;
struct TYPE_6__ {int maximized; TYPE_1__ xdg; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(_GLFWwindow* VAR_1)
{
    if (VAR_1->wl.xdg.toplevel)
    {
        FUNC_0(VAR_1->wl.xdg.toplevel);
    }
    VAR_1->wl.maximized = VAR_0;
}
