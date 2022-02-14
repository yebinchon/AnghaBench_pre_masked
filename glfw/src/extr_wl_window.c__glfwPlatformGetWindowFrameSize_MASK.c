
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int serverSide; } ;
struct TYPE_6__ {TYPE_1__ decorations; } ;
struct TYPE_7__ {TYPE_2__ wl; int monitor; scalar_t__ decorated; } ;
typedef TYPE_3__ _GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(_GLFWwindow* VAR_2,
                                     int* VAR_3, int* VAR_4,
                                     int* VAR_5, int* VAR_6)
{
    if (VAR_2->decorated && !VAR_2->monitor && !VAR_2->wl.decorations.serverSide)
    {
        if (VAR_4)
            *VAR_4 = VAR_0;
        if (VAR_3)
            *VAR_3 = VAR_1;
        if (VAR_5)
            *VAR_5 = VAR_1;
        if (VAR_6)
            *VAR_6 = VAR_1;
    }
}
