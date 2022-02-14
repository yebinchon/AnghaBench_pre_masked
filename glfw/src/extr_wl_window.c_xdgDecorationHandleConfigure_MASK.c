
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct zxdg_toplevel_decoration_v1 {int dummy; } ;
struct TYPE_5__ {int serverSide; } ;
struct TYPE_6__ {TYPE_1__ decorations; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(void* VAR_1,
                                         struct zxdg_toplevel_decoration_v1* VAR_2,
                                         uint32_t VAR_3)
{
    _GLFWwindow* VAR_4 = VAR_1;

    VAR_4->wl.decorations.serverSide = (VAR_3 == VAR_0);

    if (!VAR_4->wl.decorations.serverSide)
        FUNC_0(VAR_4);
}
