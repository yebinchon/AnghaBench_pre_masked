
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * surface; int * toplevel; } ;
struct TYPE_5__ {int visible; TYPE_2__ xdg; } ;
struct TYPE_7__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(_GLFWwindow* VAR_1)
{
    if (VAR_1->wl.xdg.toplevel)
    {
        FUNC_1(VAR_1->wl.xdg.toplevel);
        FUNC_0(VAR_1->wl.xdg.surface);
        VAR_1->wl.xdg.toplevel = ((void*)0);
        VAR_1->wl.xdg.surface = ((void*)0);
    }
    VAR_1->wl.visible = VAR_0;
}
