
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ alphaMask; } ;
struct TYPE_10__ {TYPE_3__ direct; } ;
typedef TYPE_4__ XRenderPictFormat ;
typedef int Visual ;
struct TYPE_7__ {int available; } ;
struct TYPE_8__ {int display; TYPE_1__ xrender; } ;
struct TYPE_11__ {TYPE_2__ x11; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int *) ;
 TYPE_5__ VAR_1 ;

GLFWbool FUNC_1(Visual* VAR_2)
{
    if (!VAR_1.x11.xrender.available)
        return VAR_0;

    XRenderPictFormat* VAR_3 = FUNC_0(VAR_1.x11.display, VAR_2);
    return VAR_3 && VAR_3->direct.alphaMask;
}
