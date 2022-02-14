
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int window; } ;
struct TYPE_5__ {scalar_t__ client; TYPE_1__ glx; } ;
struct TYPE_6__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int GLXWindow ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

GLXWindow FUNC_2(GLFWwindow* VAR_3)
{
    _GLFWwindow* VAR_4 = (_GLFWwindow*) VAR_3;
    FUNC_0(VAR_2);

    if (VAR_4->context.client == VAR_0)
    {
        FUNC_1(VAR_1, ((void*)0));
        return VAR_2;
    }

    return VAR_4->context.glx.window;
}
