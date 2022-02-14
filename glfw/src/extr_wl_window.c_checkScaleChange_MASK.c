
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int monitorsCount; int scale; int surface; TYPE_2__** monitors; } ;
struct TYPE_13__ {TYPE_4__ wl; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_11__ {int compositorVersion; } ;
struct TYPE_14__ {TYPE_3__ wl; } ;
struct TYPE_9__ {int scale; } ;
struct TYPE_10__ {TYPE_1__ wl; } ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_1)
{
    int VAR_2 = 1;
    int VAR_3;
    int VAR_4;


    if (VAR_0.wl.compositorVersion < 3)
        return;


    for (VAR_3 = 0; VAR_3 < VAR_1->wl.monitorsCount; ++VAR_3)
    {
        VAR_4 = VAR_1->wl.monitors[VAR_3]->wl.scale;
        if (VAR_2 < VAR_4)
            VAR_2 = VAR_4;
    }


    if (VAR_2 != VAR_1->wl.scale)
    {
        VAR_1->wl.scale = VAR_2;
        FUNC_1(VAR_1->wl.surface, VAR_2);
        FUNC_0(VAR_1);
    }
}
