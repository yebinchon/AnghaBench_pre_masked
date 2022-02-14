
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int transparent; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int NET_WM_CM_Sx; int display; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_5__ VAR_2 ;

int FUNC_1(_GLFWwindow* VAR_3)
{
    if (!VAR_3->x11.transparent)
        return VAR_0;

    return FUNC_0(VAR_2.x11.display, VAR_2.x11.NET_WM_CM_Sx) != VAR_1;
}
