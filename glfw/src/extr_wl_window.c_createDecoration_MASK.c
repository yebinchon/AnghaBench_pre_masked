
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct wl_region {int dummy; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_6__ {int surface; int viewport; int subsurface; } ;
typedef TYPE_2__ _GLFWdecorationWayland ;
struct TYPE_5__ {int compositor; int viewporter; int subcompositor; } ;
struct TYPE_7__ {TYPE_1__ wl; } ;
typedef scalar_t__ GLFWbool ;


 TYPE_4__ VAR_0 ;
 struct wl_region* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wl_region*,int ,int ,int,int) ;
 int FUNC_3 (struct wl_region*) ;
 int FUNC_4 (int ,int ,struct wl_surface*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,struct wl_buffer*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct wl_region*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(_GLFWdecorationWayland* VAR_1,
                             struct wl_surface* VAR_2,
                             struct wl_buffer* VAR_3, GLFWbool VAR_4,
                             int VAR_5, int VAR_6,
                             int VAR_7, int VAR_8)
{
    struct wl_region* VAR_9;

    VAR_1->surface = FUNC_1(VAR_0.wl.compositor);
    VAR_1->subsurface =
        FUNC_4(VAR_0.wl.subcompositor,
                                        VAR_1->surface, VAR_2);
    FUNC_5(VAR_1->subsurface, VAR_5, VAR_6);
    VAR_1->viewport = FUNC_10(VAR_0.wl.viewporter,
                                                      VAR_1->surface);
    FUNC_9(VAR_1->viewport, VAR_7, VAR_8);
    FUNC_6(VAR_1->surface, VAR_3, 0, 0);

    if (VAR_4)
    {
        VAR_9 = FUNC_0(VAR_0.wl.compositor);
        FUNC_2(VAR_9, 0, 0, VAR_7, VAR_8);
        FUNC_8(VAR_1->surface, VAR_9);
        FUNC_7(VAR_1->surface);
        FUNC_3(VAR_9);
    }
    else
        FUNC_7(VAR_1->surface);
}
