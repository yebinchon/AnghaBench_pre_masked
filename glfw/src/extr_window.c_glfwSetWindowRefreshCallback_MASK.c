
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refresh; } ;
struct TYPE_4__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindowrefreshfun ;
typedef int GLFWwindow ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

GLFWwindowrefreshfun FUNC_3(GLFWwindow* VAR_0,
                                                          GLFWwindowrefreshfun VAR_1)
{
    _GLFWwindow* VAR_2 = (_GLFWwindow*) VAR_0;
    FUNC_2(VAR_2 != ((void*)0));

    FUNC_0(((void*)0));
    FUNC_1(VAR_2->callbacks.refresh, VAR_1);
    return VAR_1;
}
