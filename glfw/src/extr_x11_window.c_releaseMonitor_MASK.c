
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* monitor; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_9__ {scalar_t__ count; int exposure; int blanking; int interval; int timeout; } ;
struct TYPE_8__ {TYPE_2__ saver; int display; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;
struct TYPE_11__ {TYPE_3__* window; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 TYPE_7__ VAR_0 ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_1)
{
    if (VAR_1->monitor->window != VAR_1)
        return;

    FUNC_1(VAR_1->monitor, ((void*)0));
    FUNC_2(VAR_1->monitor);

    VAR_0.x11.saver.count--;

    if (VAR_0.x11.saver.count == 0)
    {

        FUNC_0(VAR_0.x11.display,
                        VAR_0.x11.saver.timeout,
                        VAR_0.x11.saver.interval,
                        VAR_0.x11.saver.blanking,
                        VAR_0.x11.saver.exposure);
    }
}
