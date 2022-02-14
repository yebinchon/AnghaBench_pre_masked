
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_output {int dummy; } ;
struct TYPE_8__ {int scale; int name; struct wl_output* output; } ;
struct TYPE_10__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_9__ {int registry; } ;
struct TYPE_11__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (struct wl_output*,int *,TYPE_3__*) ;
 int VAR_3 ;
 struct wl_output* FUNC_4 (int ,int,int *,int) ;

void FUNC_5(uint32_t VAR_4, uint32_t VAR_5)
{
    _GLFWmonitor *VAR_6;
    struct wl_output *VAR_7;

    if (VAR_5 < 2)
    {
        FUNC_2(VAR_0,
                        "Wayland: Unsupported output interface version");
        return;
    }


    VAR_6 = FUNC_0(((void*)0), 0, 0);

    VAR_7 = FUNC_4(VAR_1.wl.registry,
                              VAR_4,
                              &VAR_3,
                              2);
    if (!VAR_7)
    {
        FUNC_1(VAR_6);
        return;
    }

    VAR_6->wl.scale = 1;
    VAR_6->wl.output = VAR_7;
    VAR_6->wl.name = VAR_4;

    FUNC_3(VAR_7, &VAR_2, VAR_6);
}
