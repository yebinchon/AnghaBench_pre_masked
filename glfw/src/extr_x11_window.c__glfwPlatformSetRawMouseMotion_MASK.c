
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _GLFWwindow ;
struct TYPE_4__ {int available; } ;
struct TYPE_5__ {int * disabledCursorWindow; TYPE_1__ xi; } ;
struct TYPE_6__ {TYPE_2__ x11; } ;
typedef scalar_t__ GLFWbool ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(_GLFWwindow *VAR_1, GLFWbool VAR_2)
{
    if (!VAR_0.x11.xi.available)
        return;

    if (VAR_0.x11.disabledCursorWindow != VAR_1)
        return;

    if (VAR_2)
        FUNC_1(VAR_1);
    else
        FUNC_0(VAR_1);
}
