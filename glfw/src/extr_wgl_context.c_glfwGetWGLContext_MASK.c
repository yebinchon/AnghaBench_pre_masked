
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * handle; } ;
struct TYPE_5__ {scalar_t__ client; TYPE_1__ wgl; } ;
struct TYPE_6__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int * HGLRC ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

HGLRC FUNC_2(GLFWwindow* VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_2;
    FUNC_0(((void*)0));

    if (VAR_3->context.client == VAR_0)
    {
        FUNC_1(VAR_1, ((void*)0));
        return ((void*)0);
    }

    return VAR_3->context.wgl.handle;
}
