
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int surface; int viewport; int subsurface; } ;
struct TYPE_14__ {int surface; int viewport; int subsurface; } ;
struct TYPE_13__ {int surface; int viewport; } ;
struct TYPE_12__ {int surface; int viewport; } ;
struct TYPE_16__ {TYPE_4__ bottom; TYPE_3__ right; TYPE_2__ left; TYPE_1__ top; } ;
struct TYPE_17__ {int scale; int width; int height; TYPE_5__ decorations; int transparent; int native; } ;
struct TYPE_18__ {TYPE_6__ wl; } ;
typedef TYPE_7__ _GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*,int,int) ;
 int FUNC_1 (TYPE_7__*,int,int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ,int,int,int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static void FUNC_7(_GLFWwindow* VAR_3)
{
    int VAR_4 = VAR_3->wl.scale;
    int VAR_5 = VAR_3->wl.width * VAR_4;
    int VAR_6 = VAR_3->wl.height * VAR_4;
    FUNC_3(VAR_3->wl.native, VAR_5, VAR_6, 0, 0);
    if (!VAR_3->wl.transparent)
        FUNC_2(VAR_3);
    FUNC_0(VAR_3, VAR_5, VAR_6);
    FUNC_1(VAR_3, VAR_4, VAR_4);

    if (!VAR_3->wl.decorations.top.surface)
        return;


    FUNC_6(VAR_3->wl.decorations.top.viewport,
                                VAR_3->wl.width, VAR_1);
    FUNC_5(VAR_3->wl.decorations.top.surface);


    FUNC_6(VAR_3->wl.decorations.left.viewport,
                                VAR_2, VAR_3->wl.height + VAR_1);
    FUNC_5(VAR_3->wl.decorations.left.surface);


    FUNC_4(VAR_3->wl.decorations.right.subsurface,
                               VAR_3->wl.width, -VAR_1);
    FUNC_6(VAR_3->wl.decorations.right.viewport,
                                VAR_2, VAR_3->wl.height + VAR_1);
    FUNC_5(VAR_3->wl.decorations.right.surface);


    FUNC_4(VAR_3->wl.decorations.bottom.subsurface,
                               -VAR_2, VAR_3->wl.height);
    FUNC_6(VAR_3->wl.decorations.bottom.viewport,
                                VAR_3->wl.width + VAR_0, VAR_2);
    FUNC_5(VAR_3->wl.decorations.bottom.surface);
}
