
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * viewport; int * subsurface; int * surface; } ;
typedef TYPE_1__ _GLFWdecorationWayland ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(_GLFWdecorationWayland* VAR_0)
{
    if (VAR_0->surface)
        FUNC_1(VAR_0->surface);
    if (VAR_0->subsurface)
        FUNC_0(VAR_0->subsurface);
    if (VAR_0->viewport)
        FUNC_2(VAR_0->viewport);
    VAR_0->surface = ((void*)0);
    VAR_0->subsurface = ((void*)0);
    VAR_0->viewport = ((void*)0);
}
