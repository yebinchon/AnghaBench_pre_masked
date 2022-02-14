
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ toplevel; } ;
struct TYPE_6__ {TYPE_1__ xdg; scalar_t__ title; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char const*) ;

void FUNC_3(_GLFWwindow* VAR_0, const char* VAR_1)
{
    if (VAR_0->wl.title)
        FUNC_1(VAR_0->wl.title);
    VAR_0->wl.title = FUNC_0(VAR_1);
    if (VAR_0->wl.xdg.toplevel)
        FUNC_2(VAR_0->wl.xdg.toplevel, VAR_1);
}
