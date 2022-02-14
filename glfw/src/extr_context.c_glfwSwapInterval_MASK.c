
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* swapInterval ) (int) ;} ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_7__ {int contextSlot; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int) ;

void FUNC_4(int VAR_2)
{
    _GLFWwindow* VAR_3;

    FUNC_0();

    VAR_3 = FUNC_2(&VAR_1.contextSlot);
    if (!VAR_3)
    {
        FUNC_1(VAR_0,
                        "Cannot set swap interval without a current OpenGL or OpenGL ES context");
        return;
    }

    VAR_3->context.swapInterval(VAR_2);
}
