
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int serverSide; } ;
struct TYPE_13__ {int decoration; int toplevel; } ;
struct TYPE_12__ {TYPE_1__ decorations; TYPE_4__ xdg; } ;
struct TYPE_14__ {TYPE_3__ wl; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_11__ {scalar_t__ decorationManager; } ;
struct TYPE_15__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int *,TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_4)
{
    if (VAR_2.wl.decorationManager)
    {
        VAR_4->wl.xdg.decoration =
            FUNC_1(
                VAR_2.wl.decorationManager, VAR_4->wl.xdg.toplevel);
        FUNC_2(VAR_4->wl.xdg.decoration,
                                                 &VAR_3,
                                                 VAR_4);
        FUNC_3(
            VAR_4->wl.xdg.decoration,
            VAR_1);
    }
    else
    {
        VAR_4->wl.decorations.serverSide = VAR_0;
        FUNC_0(VAR_4);
    }
}
