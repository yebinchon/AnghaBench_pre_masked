
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_data_source {int dummy; } ;
struct TYPE_3__ {struct wl_data_source* dataSource; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wl_data_source*) ;

__attribute__((used)) static void FUNC_2(void* VAR_2,
                                      struct wl_data_source* VAR_3)
{
    FUNC_1(VAR_3);

    if (VAR_1.wl.dataSource != VAR_3)
    {
        FUNC_0(VAR_0,
                        "Wayland: Unknown clipboard data source");
        return;
    }

    VAR_1.wl.dataSource = ((void*)0);
}
