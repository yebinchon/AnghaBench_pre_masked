
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; struct TYPE_5__* modes; int currentRamp; int originalRamp; } ;
typedef TYPE_1__ _GLFWmonitor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(_GLFWmonitor* VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    FUNC_1(VAR_0);

    FUNC_0(&VAR_0->originalRamp);
    FUNC_0(&VAR_0->currentRamp);

    FUNC_2(VAR_0->modes);
    FUNC_2(VAR_0->name);
    FUNC_2(VAR_0);
}
