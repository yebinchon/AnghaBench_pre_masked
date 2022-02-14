
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ colormap; scalar_t__ handle; int * ic; } ;
struct TYPE_9__ {int (* destroy ) (TYPE_4__*) ;} ;
struct TYPE_12__ {TYPE_2__ x11; TYPE_1__ context; scalar_t__ monitor; } ;
typedef TYPE_4__ _GLFWwindow ;
typedef scalar_t__ Window ;
struct TYPE_11__ {int display; int context; TYPE_4__* disabledCursorWindow; } ;
struct TYPE_13__ {TYPE_3__ x11; } ;
typedef scalar_t__ Colormap ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 TYPE_8__ VAR_0 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

void FUNC_8(_GLFWwindow* VAR_1)
{
    if (VAR_0.x11.disabledCursorWindow == VAR_1)
        VAR_0.x11.disabledCursorWindow = ((void*)0);

    if (VAR_1->monitor)
        FUNC_6(VAR_1);

    if (VAR_1->x11.ic)
    {
        FUNC_1(VAR_1->x11.ic);
        VAR_1->x11.ic = ((void*)0);
    }

    if (VAR_1->context.destroy)
        VAR_1->context.destroy(VAR_1);

    if (VAR_1->x11.handle)
    {
        FUNC_0(VAR_0.x11.display, VAR_1->x11.handle, VAR_0.x11.context);
        FUNC_5(VAR_0.x11.display, VAR_1->x11.handle);
        FUNC_2(VAR_0.x11.display, VAR_1->x11.handle);
        VAR_1->x11.handle = (Window) 0;
    }

    if (VAR_1->x11.colormap)
    {
        FUNC_4(VAR_0.x11.display, VAR_1->x11.colormap);
        VAR_1->x11.colormap = (Colormap) 0;
    }

    FUNC_3(VAR_0.x11.display);
}
