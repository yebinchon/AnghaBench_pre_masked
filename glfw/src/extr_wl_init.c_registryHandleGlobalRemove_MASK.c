
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_registry {int dummy; } ;
struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_6__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWmonitor ;
struct TYPE_7__ {int monitorCount; TYPE_2__** monitors; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2,
                                       struct wl_registry *VAR_3,
                                       uint32_t VAR_4)
{
    int VAR_5;
    _GLFWmonitor* VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_1.monitorCount; ++VAR_5)
    {
        VAR_6 = VAR_1.monitors[VAR_5];
        if (VAR_6->wl.name == VAR_4)
        {
            FUNC_0(VAR_6, VAR_0, 0);
            return;
        }
    }
}
