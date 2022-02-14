
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const currentRamp; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWmonitor ;
typedef int GLFWgammaramp ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 int FUNC_3 (int ) ;

const GLFWgammaramp* FUNC_4(GLFWmonitor* VAR_0)
{
    _GLFWmonitor* VAR_1 = (_GLFWmonitor*) VAR_0;
    FUNC_3(VAR_1 != ((void*)0));

    FUNC_0(((void*)0));

    FUNC_1(&VAR_1->currentRamp);
    if (!FUNC_2(VAR_1, &VAR_1->currentRamp))
        return ((void*)0);

    return &VAR_1->currentRamp;
}
