
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* monitor; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_7__ {int mouseTrailSize; int acquiredMonitorCount; } ;
struct TYPE_10__ {TYPE_1__ win32; } ;
struct TYPE_9__ {TYPE_2__* window; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_6__ VAR_2 ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_3)
{
    if (VAR_3->monitor->window != VAR_3)
        return;

    VAR_2.win32.acquiredMonitorCount--;
    if (!VAR_2.win32.acquiredMonitorCount)
    {
        FUNC_1(VAR_0);


        if (FUNC_0())
            FUNC_2(VAR_1, VAR_2.win32.mouseTrailSize, 0, 0);
    }

    FUNC_3(VAR_3->monitor, ((void*)0));
    FUNC_4(VAR_3->monitor);
}
