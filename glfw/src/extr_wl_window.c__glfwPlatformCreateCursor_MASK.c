
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int xhot; int yhot; int height; int width; int buffer; } ;
struct TYPE_8__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWcursor ;
struct TYPE_9__ {int height; int width; } ;
typedef TYPE_3__ GLFWimage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;

int FUNC_1(_GLFWcursor* VAR_2,
                              const GLFWimage* VAR_3,
                              int VAR_4, int VAR_5)
{
    VAR_2->wl.buffer = FUNC_0(VAR_3);
    if (!VAR_2->wl.buffer)
        return VAR_0;

    VAR_2->wl.width = VAR_3->width;
    VAR_2->wl.height = VAR_3->height;
    VAR_2->wl.xhot = VAR_4;
    VAR_2->wl.yhot = VAR_5;
    return VAR_1;
}
