
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ client; int (* swapBuffers ) (TYPE_2__*) ;} ;
struct TYPE_5__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(GLFWwindow* VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_2;
    FUNC_2(VAR_3 != ((void*)0));

    FUNC_0();

    if (VAR_3->context.client == VAR_0)
    {
        FUNC_1(VAR_1,
                        "Cannot swap buffers of a window that has no OpenGL or OpenGL ES context");
        return;
    }

    VAR_3->context.swapBuffers(VAR_3);
}
