
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wl_region {int dummy; } ;
struct TYPE_7__ {int surface; int height; int width; } ;
struct TYPE_8__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_6__ {int compositor; } ;
struct TYPE_9__ {TYPE_1__ wl; } ;


 TYPE_5__ VAR_0 ;
 struct wl_region* FUNC_0 (int ) ;
 int FUNC_1 (struct wl_region*,int ,int ,int ,int ) ;
 int FUNC_2 (struct wl_region*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct wl_region*) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_1)
{
    struct wl_region* VAR_2;

    VAR_2 = FUNC_0(VAR_0.wl.compositor);
    if (!VAR_2)
        return;

    FUNC_1(VAR_2, 0, 0, VAR_1->wl.width, VAR_1->wl.height);
    FUNC_4(VAR_1->wl.surface, VAR_2);
    FUNC_3(VAR_1->wl.surface);
    FUNC_2(VAR_2);
}
