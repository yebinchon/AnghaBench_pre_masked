
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ client; scalar_t__ source; int (* makeCurrent ) (TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_9__ {int contextSlot; } ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(GLFWwindow* VAR_3)
{
    _GLFWwindow* VAR_4 = (_GLFWwindow*) VAR_3;
    _GLFWwindow* VAR_5 = FUNC_2(&VAR_2.contextSlot);

    FUNC_0();

    if (VAR_4 && VAR_4->context.client == VAR_0)
    {
        FUNC_1(VAR_1,
                        "Cannot make current with a window that has no OpenGL or OpenGL ES context");
        return;
    }

    if (VAR_5)
    {
        if (!VAR_4 || VAR_4->context.source != VAR_5->context.source)
            VAR_5->context.makeCurrent(((void*)0));
    }

    if (VAR_4)
        VAR_4->context.makeCurrent(VAR_4);
}
