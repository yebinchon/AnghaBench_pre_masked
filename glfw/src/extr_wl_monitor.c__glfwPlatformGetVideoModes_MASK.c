
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int modeCount; int * modes; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWvidmode ;



GLFWvidmode* FUNC_0(_GLFWmonitor* VAR_0, int* VAR_1)
{
    *VAR_1 = VAR_0->modeCount;
    return VAR_0->modes;
}
