
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* monitor; int videoMode; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {int acquiredMonitorCount; int mouseTrailSize; } ;
struct TYPE_11__ {TYPE_1__ win32; } ;
struct TYPE_10__ {int window; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 TYPE_7__ VAR_4 ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_5)
{
    if (!VAR_4.win32.acquiredMonitorCount)
    {
        FUNC_1(VAR_0 | VAR_1);



        if (FUNC_0())
        {
            FUNC_2(VAR_2, 0, &VAR_4.win32.mouseTrailSize, 0);
            FUNC_2(VAR_3, 0, 0, 0);
        }
    }

    if (!VAR_5->monitor->window)
        VAR_4.win32.acquiredMonitorCount++;

    FUNC_4(VAR_5->monitor, &VAR_5->videoMode);
    FUNC_3(VAR_5->monitor, VAR_5);
}
