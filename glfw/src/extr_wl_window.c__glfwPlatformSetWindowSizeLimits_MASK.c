
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ toplevel; } ;
struct TYPE_6__ {int surface; TYPE_1__ xdg; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (scalar_t__,int,int) ;

void FUNC_3(_GLFWwindow* VAR_1,
                                      int VAR_2, int VAR_3,
                                      int VAR_4, int VAR_5)
{
    if (VAR_1->wl.xdg.toplevel)
    {
        if (VAR_2 == VAR_0 || VAR_3 == VAR_0)
            VAR_2 = VAR_3 = 0;
        if (VAR_4 == VAR_0 || VAR_5 == VAR_0)
            VAR_4 = VAR_5 = 0;
        FUNC_2(VAR_1->wl.xdg.toplevel, VAR_2, VAR_3);
        FUNC_1(VAR_1->wl.xdg.toplevel, VAR_4, VAR_5);
        FUNC_0(VAR_1->wl.surface);
    }
}
