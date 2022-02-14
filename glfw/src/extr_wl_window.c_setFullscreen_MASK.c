
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int serverSide; } ;
struct TYPE_11__ {scalar_t__ toplevel; } ;
struct TYPE_14__ {TYPE_3__ decorations; TYPE_1__ xdg; } ;
struct TYPE_15__ {TYPE_4__ wl; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_12__ {int output; } ;
struct TYPE_16__ {TYPE_2__ wl; } ;
typedef TYPE_6__ _GLFWmonitor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_1, _GLFWmonitor* VAR_2,
                          int VAR_3)
{
    if (VAR_1->wl.xdg.toplevel)
    {
        FUNC_2(
            VAR_1->wl.xdg.toplevel,
            VAR_2->wl.output);
    }
    FUNC_1(VAR_1, VAR_0);
    if (!VAR_1->wl.decorations.serverSide)
        FUNC_0(VAR_1);
}
